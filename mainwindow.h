#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QHBoxLayout>
#include <QSound>
#include <QLabel>
#include <QLCDNumber>
#include "groupbox.h"
#include "cardout.h"
#include "aifight.h"
#include "scene.h"

class MainWindow:public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
     ~MainWindow();
    QSound *bgm;
    Scene *scene;
    void settingBg();


private slots:
    void chPage();
    void manChPage();
    void autoChPage();
    void fightPage();
    void chDeck_H();
    void chDeck_S1();
    void chDeck_S2();
    void chDeck_HELP();
    void aiConnect();
    void youWinPage();
    void youLosePage();
    void tiePage();

private:
    QLabel *startTitle, *startPic, *winTitle, *loseTitle, *tieTitle;
    QPushButton *start, *end, *manualChose, *autoChose, *manChConfirm;
    QFrame *mainFrame, *chPageFrame, *manChPageFrame, *autoChPageFrame ,*fightPageFrame;
    QFrame *youWinPageFrame, *youLosePageFrame, *tiePageFrame;
    QHBoxLayout *mainLayout, *mainLayout2, *mainLayout3, *mainLayout4, *mainLayout5;
    QHBoxLayout *mainLayout6, *mainLayout7, *mainLayout8;
    QPushButton *hero, *soldier1, *soldier2, *helper;
    GroupBox *groupbox;
    CardOut *cardout;
    QLabel *myCastle, *aiCastle;
    QLCDNumber *myScore, *aiScore;
    QTimer *aiOut;
    int aiCounter = 0;
    AiFight *aifight;
    QTimer *wait1, *wait2;
    //int helperType;

signals:
    //void
};

#endif // MAINWINDOW_H

