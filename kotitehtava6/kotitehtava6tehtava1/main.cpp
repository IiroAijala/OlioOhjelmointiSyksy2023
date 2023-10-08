#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    QWidget mainWidget;
    mainWidget.setWindowTitle("Counter App");

    QLineEdit lineEdit;
    lineEdit.setReadOnly(true);
    lineEdit.setAlignment(Qt::AlignCenter);

    QPushButton countButton("Count");
    int count = 0;
    QObject::connect(&countButton, &QPushButton::clicked, [&]() {
        count++;
        lineEdit.setText(QString::number(count));
    });

    QPushButton resetButton("Reset");
    QObject::connect(&resetButton, &QPushButton::clicked, [&]() {
        count = 0;
        lineEdit.setText(QString::number(count));
    });

    QVBoxLayout layout;
    layout.addWidget(&countButton);
    layout.addWidget(&lineEdit);
    layout.addWidget(&resetButton);

    mainWidget.setLayout(&layout);

    mainWidget.show();

    return app.exec();
}
