#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickHandler();
    void operationClickHandler();
    void clearClickHandler();
    void enterClickHandler();

private:
    QLabel *number1Label;
    QLabel *number2Label;
    QLabel *resultLabel;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *N0;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *clear;
    QPushButton *enter;
    int state;
    int operand;
    QString number1;
    QString number2;

    void performOperation();
};

#endif // MAINWINDOW_H
