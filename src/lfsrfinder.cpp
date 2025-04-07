// lfsrfinder.cpp
#include "lfsrfinder.h"
#include <QThread>
#include <QDebug>

LFSRFinder::LFSRFinder(QObject *parent) :
    QObject(parent),
    m_cancelRequested(false),
    m_progressBar(nullptr)
{
}

void LFSRFinder::setData(const QByteArray &plainData, const QByteArray &cipherData)
{
    m_plainData = plainData;
    m_cipherData = cipherData;
}

void LFSRFinder::setProgressBar(QProgressBar *progressBar)
{
    m_progressBar = progressBar;
}

void LFSRFinder::startSearch()
{
    m_cancelRequested = false;

    QThread *workerThread = QThread::create([this]() {
        try {
            QVector<bool> result = findMinimalLFSR();
            if (!m_cancelRequested) {
                emit searchCompleted(result);
            }
        } catch (const std::exception &e) {
            emit searchFailed(QString(e.what()));
        }
    });

    connect(workerThread, &QThread::finished, workerThread, &QThread::deleteLater);
    workerThread->start();
}

void LFSRFinder::cancelSearch()
{
    m_cancelRequested = true;
}

void LFSRFinder::updateProgress(int value, const QString& message)
{
    if (!message.isEmpty()) {
        qDebug() << message;
    }
    emit progressChanged(value);
}

QVector<bool> LFSRFinder::findMinimalLFSR()
{
    if (m_plainData.size() != m_cipherData.size()) {
        throw std::runtime_error("Plaintext and ciphertext sizes don't match");
    }

    const int dataSize = m_plainData.size();
    QVector<bool> xorBits;
    xorBits.reserve(dataSize * 8);

    const uchar* plain = reinterpret_cast<const uchar*>(m_plainData.constData());
    const uchar* cipher = reinterpret_cast<const uchar*>(m_cipherData.constData());

    for (int i = 0; i < dataSize; ++i) {
        const uchar xorByte = plain[i] ^ cipher[i];
        for (int j = 7; j >= 0; --j) {
            xorBits.append((xorByte >> j) & 1);
        }

        if (dataSize >= 100 && i % (dataSize / 100) == 0) {
            int progress = (i * 100) / dataSize;
            updateProgress(progress, QString("Processing data: %1%").arg(progress));
        }
    }

    this->xorRes = xorBits;

    const int n = (xorBits.size() > 10000) ? 10000 : xorBits.size();
    QVector<bool> c(n, false);
    QVector<bool> b(n, false);
    c[0] = b[0] = true;
    int L = 0;
    int m = 1;
    bool delta;

    for (int i = 0; i < n && !m_cancelRequested; ++i) {
        delta = xorBits[i];
        for (int j = 1; j <= L; ++j) {
            delta ^= (c[j] & xorBits[i-j]);
        }

        if (delta) {
            QVector<bool> temp = c;
            for (int j = 0; j + m < n; ++j) {
                if (b[j]) {
                    c[j+m] = c[j+m] ^ 1;
                }
            }
            if (2*L <= i) {
                L = i + 1 - L;
                b = temp;
                m = 1;
            } else {
                ++m;
            }
        } else {
            ++m;
        }

        // Update progress every 1% of bits processed
        qDebug() << n << i;
        if (n >= 100 && i % (n / 100) == 0) {
            int progress = (i * 100) / n;
            updateProgress(progress, QString("Analyzing LFSR: %1%").arg(progress));
        }
    }

    if (m_cancelRequested) {
        return QVector<bool>();
    }

    QVector<bool> lfsrCoeffs(L + 1);
    for (int i = 0; i <= L; ++i) {
        lfsrCoeffs[i] = c[i];
    }

    //if (!verifyLFSR(lfsrCoeffs, xorBits)) {
    //    throw std::runtime_error("Found LFSR doesn't verify against the keystream");
    //}

    lfsrCoeffs.pop_front();
    return lfsrCoeffs;
}

bool LFSRFinder::verifyLFSR(const QVector<bool>& coeffs, const QVector<bool>& keyStream)
{
    const int L = coeffs.size() - 1;
    const int n = keyStream.size();

    for (int i = L; i < n; ++i) {
        bool nextBit = false;
        for (int j = 1; j <= L; ++j) {
            nextBit ^= (coeffs[j] & keyStream[i-j]);
        }
        if (nextBit != keyStream[i]) {
            return false;
        }
    }
    return true;
}
/*
#include <iostream>
auto analyzeLFSR = [&](const std::vector<bool>& s) {
    using std::vector;
    using std::cout;
    using std::endl;

    size_t n = s.size();
    vector<bool> c(n, false);  // Текущий полином
    vector<bool> b(n, false);  // Предыдущий полином
    c[0] = b[0] = true;        // Инициализация: C(x) = 1, B(x) = 1
    size_t L = 0;              // Текущая длина LFSR
    size_t m = 1;              // Индекс последнего изменения
    bool delta = false;        // Невязка

    // Алгоритм Берлекэмпа-Мэсси
    for (size_t i = 0; i < n; ++i) {
        delta = s[i];
        for (size_t j = 1; j <= L; ++j) {
            delta ^= (c[j] & s[i - j]);
        }

        if (delta) {
            vector<bool> temp = c;
            for (size_t j = 0; j + m < n; ++j) {
                if (b[j]) {
                    c[j + m] = !c[j + m];
                }
            }
            if (2 * L <= i) {
                L = i + 1 - L;
                b = temp;
                m = 1;
            } else {
                m++;
            }
        } else {
            m++;
        }
    }

    // Получаем коэффициенты обратной связи (c1, c2, ..., cL)
    vector<bool> lfsr_coeffs(L + 1);
    for (size_t i = 0; i <= L; ++i) {
        lfsr_coeffs[i] = c[i];
    }

    // Проверяем, действительно ли это LFSR
    bool is_valid = true;
    for (size_t i = L; i < n && is_valid; ++i) {
        bool next_bit = false;
        for (size_t j = 1; j <= L; ++j) {
            next_bit ^= (lfsr_coeffs[j] & s[i - j]);
        }
        if (next_bit != s[i]) {
            is_valid = false;
        }
    }

    // Выводим результаты
    cout << "Длина LFSR (L): " << L << endl;
    cout << "Характеристическая функция (1";
    for (size_t i = 1; i <= L; ++i) {
        if (lfsr_coeffs[i]) {
            cout << " + x^" << i;
        }
    }
    cout << ")" << endl;

    if (!is_valid) {
        cout << "Внимание: последовательность не полностью соответствует найденному LFSR!" << endl;
    }
};*/
