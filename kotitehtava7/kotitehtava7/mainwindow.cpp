#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    currentPlayer = 0;
    gameStarted = false;

    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));

    progressBar = ui->progressBar;
    progressBar_2 = ui->progressBar_2;
    startButton = ui->startButton;
    switchButton = ui->switchButton;
    stopButton = ui->stopButton;
    gameInfoLabel = ui->label;

    connect(startButton, SIGNAL(clicked()), this, SLOT(startGame()));
    connect(switchButton, SIGNAL(clicked()), this, SLOT(switchPlayer()));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(stopGame()));
    connect(ui->secButton, SIGNAL(clicked()), this, SLOT(setGameTimeSecButton()));
    connect(ui->minButton, SIGNAL(clicked()), this, SLOT(setGameTimeMinButton()));

    // Alustetaan peliajat nollaksi
    player1Time = 0;
    player2Time = 0;

    // Alustetaan progressbarit
    progressBar->setValue(0);
    progressBar_2->setValue(0);
}

void MainWindow::setGameTimeSecButton()
{
    player1Time = 120;
    player2Time = 120;
    updateProgressBar();
    setGameInfoText("Ready to play", 14); // Muutettu pelin tila
}

void MainWindow::setGameTimeMinButton()
{
    player1Time = 300;
    player2Time = 300;
    updateProgressBar();
    setGameInfoText("Ready to play", 14); // Muutettu pelin tila
}

void MainWindow::timeout()
{
    if (gameStarted) {
        if (currentPlayer == 1) {
            if (player1Time > 0) {
                player1Time--;
                updateProgressBar();
            } else {
                endGame("Player 1 WON!");
            }
        } else if (currentPlayer == 2) {
            if (player2Time > 0) {
                player2Time--;
                updateProgressBar();
            } else {
                endGame("Player 2 WON!");
            }
        }
    }
}

void MainWindow::updateProgressBar()
{
    progressBar->setValue(player1Time);
    progressBar_2->setValue(player2Time);
}

void MainWindow::startGame()
{
    if (!gameStarted) {
        currentPlayer = 1;
        updateProgressBar();
        pQTimer->start(1000);
        setGameInfoText("Game in progress", 14); // Muutettu pelin tila
        gameStarted = true;
    }
}

void MainWindow::switchPlayer()
{
    if (gameStarted) {
        if (currentPlayer == 1) {
            currentPlayer = 2;
        } else if (currentPlayer == 2) {
            currentPlayer = 1;
        }
        updateProgressBar();
    }
}

void MainWindow::stopGame()
{
    if (gameStarted) {
        gameStarted = false;
        pQTimer->stop();
        setGameInfoText("New game via start button", 14);
        player1Time = 0;
        player2Time = 0;
        updateProgressBar();
    }
}


void MainWindow::setGameInfoText(const QString &text, short fontSize)
{
    gameInfoLabel->setText(text);
    QFont font = gameInfoLabel->font();
    font.setPointSize(fontSize);
    gameInfoLabel->setFont(font);
}

void MainWindow::endGame(const QString &result)
{
    gameStarted = false;
    pQTimer->stop();
    setGameInfoText(result, 14);
    player1Time = 0;
    player2Time = 0;
    updateProgressBar();
}

MainWindow::~MainWindow()
{

    delete ui;
}
