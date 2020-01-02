#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Game/IGame.hpp"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startBattleBtn_clicked();
    void player1FieldClicked(int, int);
    void player2FieldClicked(int, int);

private:
    Ui::MainWindow *ui;
    IGame* m_game;
    IPlayer* m_player1;
    IPlayer* m_player2;
};

#endif // MAINWINDOW_H
