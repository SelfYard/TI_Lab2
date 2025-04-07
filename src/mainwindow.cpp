// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <bitset>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
      m_finder(new LFSRFinder(this))
{
    ui->setupUi(this);

    // Connect signals from LFSRFinder to MainWindow slots
    connect(m_finder, &LFSRFinder::searchCompleted, this, &MainWindow::handleLFSRFound);
    connect(m_finder, &LFSRFinder::searchFailed, this, &MainWindow::handleSearchFailed);
    connect(m_finder, &LFSRFinder::progressChanged, this, &MainWindow::updateProgress);

    // Initialize progress bar
    ui->progressBar->setRange(0, 100);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::dataToBinary(const QByteArray &data)
{
    QString binaryString;
    binaryString.reserve(data.size() * 9); // 8 bits + space per byte

    const uchar* bytes = reinterpret_cast<const uchar*>(data.constData());
    for (int i = 0; i < data.size(); ++i) {
        binaryString += QString("%1 ").arg(bytes[i], 8, 2, QChar('0'));
    }

    return binaryString.trimmed();
}

void MainWindow::loadPlainText()
{
    const QString fileName = QFileDialog::getOpenFileName(this, "Open Plaintext File");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Failed to open file");
        return;
    }

    plainData = file.readAll();
    file.close();

    ui->plainTextEdit->setPlainText(generatePreview(plainData));
    updateReport("Plaintext loaded successfully");
}

void MainWindow::loadCipherText()
{
    const QString fileName = QFileDialog::getOpenFileName(this, "Open Ciphertext File");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Failed to open file");
        return;
    }

    cipherData = file.readAll();
    file.close();

    ui->chiperTextEdit->setPlainText(generatePreview(cipherData));
    updateReport("Ciphertext loaded successfully");
}

QString MainWindow::generatePreview(const QByteArray &data)
{
    const int maxBytes = 10;
    if (data.size() <= maxBytes * 2) {
        return dataToBinary(data);
    }

    const QByteArray firstPart = data.left(maxBytes);
    const QByteArray lastPart = data.right(maxBytes);
    return dataToBinary(firstPart) + " ... " + dataToBinary(lastPart);
}

bool MainWindow::validateInputData()
{
    if (plainData.isEmpty() || cipherData.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please load both plaintext and ciphertext");
        return false;
    }

    if (plainData.size() != cipherData.size()) {
        QMessageBox::warning(this, "Error", "Plaintext and ciphertext sizes don't match");
        return false;
    }

    return true;
}

void MainWindow::startAnalysis()
{
    if (!validateInputData()) return;

    ui->progressBar->setValue(0);
    ui->reportTextEdit->clear();
    updateReport("Starting LFSR data processing...");

    m_finder->setData(plainData, cipherData);
    updateReport("LFSR data processing ends.");

    updateReport("Starting LFSR search...");
    m_finder->startSearch();
    updateReport("LFSR search ends.");
    updateReport("Verify LFSR.");
}

void MainWindow::updateKeyInfo(const QVector<bool> &key, const QVector<bool> &keyarr)
{
    QString keyInfo;
    keyInfo += QString("LFSR Key Found\n");
    keyInfo += QString("Length: %1 bits\n").arg(key.size());
    keyInfo += "Polynomial coefficients: ";

    for (bool bit : key) {
        keyInfo += bit ? "1" : "0";
    }

    keyInfo += "\n\nBinary representation:\n";

    // Format binary output for better readability
    int bitCount = 0;
    for (int i = 0; i < key.size(); ++i) {
        keyInfo += keyarr[i] ? "1" : "0";
    }

    ui->reportTextEdit->setPlainText(keyInfo);
}

void MainWindow::handleLFSRFound(const QVector<bool> &result)
{
    updateProgress(100);
    updateKeyInfo(result, this->m_finder->xorRes);
    updateReport(QString("\nAnalysis completed successfully! Found LFSR of length %1").arg(result.size()));
}

void MainWindow::handleSearchFailed(const QString &error)
{
    updateProgress(0);
    updateReport("Error: " + error);
    QMessageBox::critical(this, "Error", error);
}

void MainWindow::updateProgress(int value)
{
    ui->progressBar->setValue(value);
    // Force UI update
    QCoreApplication::processEvents();
}

void MainWindow::updateReport(const QString &message)
{
    ui->reportTextEdit->append(message);
    // Auto-scroll to bottom
    QTextCursor cursor = ui->reportTextEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->reportTextEdit->setTextCursor(cursor);
}

void MainWindow::clearAllData()
{
    plainData.clear();
    cipherData.clear();
    ui->plainTextEdit->clear();
    ui->chiperTextEdit->clear();
    ui->reportTextEdit->clear();
    ui->progressBar->setValue(0);
}
