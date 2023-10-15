/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *switchButton;
    QPushButton *switchButton_2;
    QPushButton *secButton;
    QPushButton *minButton;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        switchButton = new QPushButton(centralwidget);
        switchButton->setObjectName("switchButton");
        switchButton->setGeometry(QRect(50, 130, 80, 24));
        switchButton_2 = new QPushButton(centralwidget);
        switchButton_2->setObjectName("switchButton_2");
        switchButton_2->setGeometry(QRect(530, 130, 80, 24));
        secButton = new QPushButton(centralwidget);
        secButton->setObjectName("secButton");
        secButton->setGeometry(QRect(270, 290, 80, 24));
        minButton = new QPushButton(centralwidget);
        minButton->setObjectName("minButton");
        minButton->setGeometry(QRect(410, 290, 80, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(150, 450, 121, 61));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(440, 460, 141, 51));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 170, 351, 101));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(50, 100, 118, 23));
        progressBar->setMaximum(300);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(520, 100, 118, 23));
        progressBar_2->setMaximum(300);
        progressBar_2->setValue(0);
        progressBar_2->setInvertedAppearance(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switchButton->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        switchButton_2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        secButton->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        minButton->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Choose time and start game", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
