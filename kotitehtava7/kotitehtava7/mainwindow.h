#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QPushButton>
#include <QLabel>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();
    void startGame();
    void switchPlayer();
    void stopGame();
    void setGameTimeSecButton();
    void setGameTimeMinButton();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    bool gameStarted; // Lisätty gameStarted-muuttuja
    QTimer* pQTimer;
    QProgressBar* progressBar;
    QProgressBar* progressBar_2;
    QPushButton* startButton;
    QPushButton* switchButton;
    QPushButton* stopButton;
    QLabel* gameInfoLabel;

    void updateProgressBar();
    void setGameInfoText(const QString& text, short fontSize);
    void endGame(const QString& result);
};

#endif // MAINWINDOW_H
