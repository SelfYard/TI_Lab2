// lfsrfinder.h
#ifndef LFSRFINDER_H
#define LFSRFINDER_H

#include <QObject>
#include <QVector>
#include <QByteArray>
#include <atomic>

class QProgressBar;

class LFSRFinder : public QObject
{
    Q_OBJECT

public:
    explicit LFSRFinder(QObject *parent = nullptr);

    void setData(const QByteArray &plainData, const QByteArray &cipherData);
    void setProgressBar(QProgressBar *progressBar);
    void startSearch();
    void cancelSearch();

signals:
    void searchCompleted(const QVector<bool> &result);
    void searchFailed(const QString &error);
    void progressChanged(int value);

private:
    QVector<bool> findMinimalLFSR();
    bool verifyLFSR(const QVector<bool>& coeffs, const QVector<bool>& keyStream);
    void updateProgress(int value, const QString& message = "");

    QByteArray m_plainData;
    QByteArray m_cipherData;
    std::atomic<bool> m_cancelRequested;
    QProgressBar* m_progressBar;
public:
    QVector<bool> xorRes;
};

#endif // LFSRFINDER_H
