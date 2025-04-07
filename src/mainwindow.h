#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QByteArray>
#include "lfsrfinder.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    LFSRFinder *m_finder;
    QByteArray plainData;
    QByteArray cipherData;

    // Binary conversion methods
    QString dataToBinary(const QByteArray &data);
    QString generatePreview(const QByteArray &data);

    // UI update methods
    void updateKeyInfo(const QVector<bool> &key, const QVector<bool> &keyarr);
    void updateReport(const QString &message);
    void clearAllData();

    // Data processing
    bool validateInputData();

private slots:
    // User action handlers
    void loadPlainText();
    void loadCipherText();
    void startAnalysis();

    // LFSR result handlers
    void handleLFSRFound(const QVector<bool> &result);
    void handleSearchFailed(const QString &error);
    void updateProgress(int value);
};

#endif // MAINWINDOW_H
