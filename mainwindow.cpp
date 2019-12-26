#include "Game/Player/Player.hpp";
#include "Game/Game.hpp";
#include <QThread>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBattleBtn_clicked()
{
    QString player1Name = ui->player1NameInput->text();
    QString player2Name = ui->player2NameInput->text();

    IPlayer* player1 = new Player(player1Name, PlayerType::Human);
    IPlayer* player2 = new Player(player2Name, PlayerType::Human);

    m_game = new Game(player1, player2);

    while(m_game->GetGameState() != GameState::GameOver)
    {
        QThread::msleep(500);
    }
}
