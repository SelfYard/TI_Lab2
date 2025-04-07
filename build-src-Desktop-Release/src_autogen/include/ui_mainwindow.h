/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *reportTextEdit;
    QPushButton *startButton;
    QPushButton *chiperTextFileOpen;
    QPushButton *plainTextFileOpen;
    QLabel *chiperTextLabel;
    QLabel *plainTextLabel;
    QTextEdit *plainTextEdit;
    QLabel *reportTextLabel;
    QTextEdit *chiperTextEdit;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName("gridLayout");
        reportTextEdit = new QTextEdit(centralwidget);
        reportTextEdit->setObjectName("reportTextEdit");

        gridLayout->addWidget(reportTextEdit, 7, 3, 1, 2);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");

        gridLayout->addWidget(startButton, 0, 3, 1, 2);

        chiperTextFileOpen = new QPushButton(centralwidget);
        chiperTextFileOpen->setObjectName("chiperTextFileOpen");

        gridLayout->addWidget(chiperTextFileOpen, 0, 1, 1, 1);

        plainTextFileOpen = new QPushButton(centralwidget);
        plainTextFileOpen->setObjectName("plainTextFileOpen");

        gridLayout->addWidget(plainTextFileOpen, 0, 0, 1, 1);

        chiperTextLabel = new QLabel(centralwidget);
        chiperTextLabel->setObjectName("chiperTextLabel");

        gridLayout->addWidget(chiperTextLabel, 1, 1, 3, 1);

        plainTextLabel = new QLabel(centralwidget);
        plainTextLabel->setObjectName("plainTextLabel");

        gridLayout->addWidget(plainTextLabel, 1, 0, 3, 1);

        plainTextEdit = new QTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout->addWidget(plainTextEdit, 4, 0, 7, 1);

        reportTextLabel = new QLabel(centralwidget);
        reportTextLabel->setObjectName("reportTextLabel");

        gridLayout->addWidget(reportTextLabel, 6, 3, 1, 2);

        chiperTextEdit = new QTextEdit(centralwidget);
        chiperTextEdit->setObjectName("chiperTextEdit");

        gridLayout->addWidget(chiperTextEdit, 4, 1, 7, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 9, 3, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(plainTextFileOpen, SIGNAL(clicked()), MainWindow, SLOT(loadPlainText()));
        QObject::connect(chiperTextFileOpen, SIGNAL(clicked()), MainWindow, SLOT(loadCipherText()));
        QObject::connect(startButton, SIGNAL(clicked()), MainWindow, SLOT(startAnalysis()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        chiperTextFileOpen->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\207\321\202\320\265\320\275\320\270\321\217", nullptr));
        plainTextFileOpen->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\207\321\202\320\265\320\275\320\270\321\217", nullptr));
        chiperTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\321\202\320\265\320\272\321\201\321\202", nullptr));
        plainTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        reportTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\321\221\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
