/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *player1Type;
    QLineEdit *player1NameInput;
    QPushButton *startBattleBtn;
    QComboBox *player2Type;
    QLineEdit *player2NameInput;
    QTableWidget *player1Field;
    QTableWidget *player2Field;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ship1Btn;
    QPushButton *ship2Btn;
    QPushButton *ship3Btn;
    QPushButton *ship4Btn;
    QPushButton *ship5Btn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *gameDifficulty;
    QRadioButton *radioButtonEasy;
    QRadioButton *radioButtonHard;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 901, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        player1Type = new QComboBox(horizontalLayoutWidget);
        player1Type->setObjectName(QString::fromUtf8("player1Type"));

        horizontalLayout->addWidget(player1Type);

        player1NameInput = new QLineEdit(horizontalLayoutWidget);
        player1NameInput->setObjectName(QString::fromUtf8("player1NameInput"));

        horizontalLayout->addWidget(player1NameInput);

        startBattleBtn = new QPushButton(horizontalLayoutWidget);
        startBattleBtn->setObjectName(QString::fromUtf8("startBattleBtn"));

        horizontalLayout->addWidget(startBattleBtn);

        player2Type = new QComboBox(horizontalLayoutWidget);
        player2Type->setObjectName(QString::fromUtf8("player2Type"));

        horizontalLayout->addWidget(player2Type);

        player2NameInput = new QLineEdit(horizontalLayoutWidget);
        player2NameInput->setObjectName(QString::fromUtf8("player2NameInput"));

        horizontalLayout->addWidget(player2NameInput);

        player1Field = new QTableWidget(centralWidget);
        if (player1Field->columnCount() < 10)
            player1Field->setColumnCount(10);
        if (player1Field->rowCount() < 10)
            player1Field->setRowCount(10);
        player1Field->setObjectName(QString::fromUtf8("player1Field"));
        player1Field->setGeometry(QRect(10, 120, 341, 341));
        player1Field->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        player1Field->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        player1Field->setAutoScroll(true);
        player1Field->setGridStyle(Qt::SolidLine);
        player1Field->setRowCount(10);
        player1Field->setColumnCount(10);
        player2Field = new QTableWidget(centralWidget);
        if (player2Field->columnCount() < 10)
            player2Field->setColumnCount(10);
        if (player2Field->rowCount() < 10)
            player2Field->setRowCount(10);
        player2Field->setObjectName(QString::fromUtf8("player2Field"));
        player2Field->setGeometry(QRect(570, 120, 341, 341));
        player2Field->setRowCount(10);
        player2Field->setColumnCount(10);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(390, 160, 141, 276));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ship1Btn = new QPushButton(verticalLayoutWidget);
        ship1Btn->setObjectName(QString::fromUtf8("ship1Btn"));
        ship1Btn->setFlat(true);

        verticalLayout->addWidget(ship1Btn);

        ship2Btn = new QPushButton(verticalLayoutWidget);
        ship2Btn->setObjectName(QString::fromUtf8("ship2Btn"));
        ship2Btn->setFlat(true);

        verticalLayout->addWidget(ship2Btn);

        ship3Btn = new QPushButton(verticalLayoutWidget);
        ship3Btn->setObjectName(QString::fromUtf8("ship3Btn"));
        ship3Btn->setFlat(true);

        verticalLayout->addWidget(ship3Btn);

        ship4Btn = new QPushButton(verticalLayoutWidget);
        ship4Btn->setObjectName(QString::fromUtf8("ship4Btn"));
        ship4Btn->setFlat(true);

        verticalLayout->addWidget(ship4Btn);

        ship5Btn = new QPushButton(verticalLayoutWidget);
        ship5Btn->setObjectName(QString::fromUtf8("ship5Btn"));
        ship5Btn->setFlat(true);

        verticalLayout->addWidget(ship5Btn);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(390, 100, 131, 41));
        gameDifficulty = new QHBoxLayout(horizontalLayoutWidget_2);
        gameDifficulty->setSpacing(6);
        gameDifficulty->setContentsMargins(11, 11, 11, 11);
        gameDifficulty->setObjectName(QString::fromUtf8("gameDifficulty"));
        gameDifficulty->setContentsMargins(0, 0, 0, 0);
        radioButtonEasy = new QRadioButton(horizontalLayoutWidget_2);
        radioButtonEasy->setObjectName(QString::fromUtf8("radioButtonEasy"));

        gameDifficulty->addWidget(radioButtonEasy);

        radioButtonHard = new QRadioButton(horizontalLayoutWidget_2);
        radioButtonHard->setObjectName(QString::fromUtf8("radioButtonHard"));
        radioButtonHard->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButtonHard->sizePolicy().hasHeightForWidth());
        radioButtonHard->setSizePolicy(sizePolicy);

        gameDifficulty->addWidget(radioButtonHard);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 950, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Battleship Game", nullptr));
        player1NameInput->setText(QString());
        player1NameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Player1", nullptr));
        startBattleBtn->setText(QCoreApplication::translate("MainWindow", "Start Battle", nullptr));
        player2NameInput->setText(QString());
        player2NameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Player2", nullptr));
        ship1Btn->setText(QString());
        ship2Btn->setText(QString());
        ship3Btn->setText(QString());
        ship4Btn->setText(QString());
        ship5Btn->setText(QString());
        radioButtonEasy->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        radioButtonHard->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
