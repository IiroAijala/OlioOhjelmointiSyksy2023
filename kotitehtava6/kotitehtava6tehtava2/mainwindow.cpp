#include "mainwindow.h"
#include <QDebug>
#include <cmath>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Calculator");

    number1Label = new QLabel("Number1", this);
    number2Label = new QLabel("Number2", this);
    resultLabel = new QLabel("Result", this);
    num1 = new QLineEdit(this);
    num2 = new QLineEdit(this);
    result = new QLineEdit(this);
    N0 = new QPushButton("0", this);
    N1 = new QPushButton("1", this);
    N2 = new QPushButton("2", this);
    N3 = new QPushButton("3", this);
    N4 = new QPushButton("4", this);
    N5 = new QPushButton("5", this);
    N6 = new QPushButton("6", this);
    N7 = new QPushButton("7", this);
    N8 = new QPushButton("8", this);
    N9 = new QPushButton("9", this);
    add = new QPushButton("+", this);
    sub = new QPushButton("-", this);
    mul = new QPushButton("*", this);
    div = new QPushButton("/", this);
    clear = new QPushButton("Clear", this);
    enter = new QPushButton("Enter", this);

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(number1Label, 0, 0);
    layout->addWidget(num1, 0, 1);
    layout->addWidget(number2Label, 1, 0);
    layout->addWidget(num2, 1, 1);
    layout->addWidget(resultLabel, 2, 0);
    layout->addWidget(result, 2, 1);
    layout->addWidget(N0, 3, 0);
    layout->addWidget(N1, 3, 1);
    layout->addWidget(N2, 3, 2);
    layout->addWidget(N3, 3, 3);
    layout->addWidget(N4, 4, 0);
    layout->addWidget(N5, 4, 1);
    layout->addWidget(N6, 4, 2);
    layout->addWidget(N7, 5, 0);
    layout->addWidget(N8, 5, 1);
    layout->addWidget(N9, 5, 2);
    layout->addWidget(add, 3, 4);
    layout->addWidget(sub, 4, 4);
    layout->addWidget(mul, 5, 4);
    layout->addWidget(div, 6, 4);
    layout->addWidget(clear, 6, 0);
    layout->addWidget(enter, 6, 1);

    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    setCentralWidget(widget);

    state = 1;
    operand = 0;
    number1 = "";
    number2 = "";

    connect(N0, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N1, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N2, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N3, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N4, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N5, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N6, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N7, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N8, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(N9, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(add, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(sub, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(mul, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(div, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(clear, &QPushButton::clicked, this, &MainWindow::clearClickHandler);
    connect(enter, &QPushButton::clicked, this, &MainWindow::enterClickHandler);
}

MainWindow::~MainWindow()
{
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();

    if (state == 1)
    {
        number1 += name;
        num1->setText(number1);
    }
    else if (state == 2)
    {
        number2 += name;
        num2->setText(number2);
    }
}

void MainWindow::operationClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString op = button->text();

    if (op == "+")
        operand = 0;
    else if (op == "-")
        operand = 1;
    else if (op == "*")
        operand = 2;
    else if (op == "/")
        operand = 3;

    state = 2;
}

void MainWindow::clearClickHandler()
{
    state = 1;
    number1 = "";
    number2 = "";
    num1->clear();
    num2->clear();
    result->clear();
}

void MainWindow::enterClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    switch (operand)
    {
    case 0:
        result->setText(QString::number(n1 + n2));
        break;
    case 1:
        result->setText(QString::number(n1 - n2));
        break;
    case 2:
        result->setText(QString::number(n1 * n2));
        break;
    case 3:
        if (n2 != 0)
            result->setText(QString::number(n1 / n2));
        else
            result->setText("Error: Division by zero");
        break;
    }

    state = 1;
}
