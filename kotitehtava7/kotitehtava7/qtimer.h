#ifndef QTIMER_H
#define QTIMER_H


class QTimer;

class ChessClock : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChessClock(QWidget *parent = nullptr);
    ~ChessClock();

public slots:
    void timeout(); // Tämä on QTimer-luokan timeout()-signaalin käsittelijä

private:
    Ui::ChessClock *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;

    void setGameInfoText(QString text, short fontSize);
};
