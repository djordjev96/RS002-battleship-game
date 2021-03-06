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

    int getSelectedRow();
    int getSelectedColumn();

private slots:
    void on_startBattleBtn_clicked();

    void setShip(int, int, int,int);
    void player1FieldClicked(int, int);
    void player2FieldClicked(int, int);    

    void typeChanged1(const QString&);
    void typeChanged2(const QString&);
    void playerNameEdited();

private:
    void autoplayCompVsComp();
    void updateFields();
    void checkGameStatus();

    Ui::MainWindow *ui;
    IGame* m_game;
    std::shared_ptr<IPlayer> m_player1;
    std::shared_ptr<IPlayer> m_player2;
    bool isGameOverDialogShown;

    int selectedRow;
    int selectedColumn;

    QPixmap m_HitImage;
    QPixmap m_MissImage; 
};

#endif // MAINWINDOW_H
