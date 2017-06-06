#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
           :QWidget(parent)
{
    //設定視窗名稱與圖案
    setWindowTitle(tr("攻城"));
    setWindowIcon(QIcon("US_Army.jpg"));

    //設定chPage背景色
    chPageFrame = new QFrame(this);
    chPageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    chPageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout2 = new QHBoxLayout(chPageFrame);

    QPalette p2 = chPageFrame-> palette();
    p2.setColor(QPalette::Window, Qt::yellow);
    chPageFrame-> setPalette(p2);
    chPageFrame-> hide();

    //設定manChPage背景色
    manChPageFrame = new QFrame(this);
    manChPageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    manChPageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout3 = new QHBoxLayout(manChPageFrame);

    QPalette p3 = manChPageFrame-> palette();
    p3.setColor(QPalette::Window, Qt::white);
    manChPageFrame-> setPalette(p3);
    manChPageFrame-> hide();

    //設定autoChPage背景色
    autoChPageFrame = new QFrame(this);
    autoChPageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    autoChPageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout4 = new QHBoxLayout(autoChPageFrame);

    QPalette p4 = autoChPageFrame-> palette();
    p4.setColor(QPalette::Window, Qt::white);
    autoChPageFrame-> setPalette(p4);
    autoChPageFrame-> hide();

    //設定fightPage背景色
    fightPageFrame = new QFrame(this);
    fightPageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    fightPageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout5 = new QHBoxLayout(fightPageFrame);

    QPalette p5 = fightPageFrame-> palette();
    p5.setColor(QPalette::Window, Qt::darkGreen);
    fightPageFrame-> setPalette(p5);
    fightPageFrame-> hide();

    //設定startPage背景色
    mainFrame = new QFrame(this);
    mainFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    mainFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout = new QHBoxLayout(mainFrame);

    QPalette p1 = mainFrame-> palette();
    p1.setColor(QPalette::Window, Qt::black);
    mainFrame-> setPalette(p1);

    //設定初始頁面背景圖案
    QPixmap p("US_Army.jpg");                   //載入圖檔
    startPic = new QLabel(this);
    startPic->setGeometry(0,100,400,400);
    startPic->setPixmap(p.scaled(400,400,Qt::KeepAspectRatio));  //將圖案縮小為(400,400)
//=====================================================================================================
    hero = new QPushButton(this);
    hero-> setGeometry(60,515,70,70);
    hero-> hide();

    soldier1 = new QPushButton(this);
    soldier1-> setGeometry(145,515,70,70);
    soldier1-> hide();

    soldier2 = new QPushButton(this);
    soldier2-> setGeometry(230,515,70,70);
    soldier2-> hide();

    helper = new QPushButton(this);
    helper-> setGeometry(315,515,70,70);
    helper-> hide();
////////////////////////////////////////////////////////////////////////////HERO
    CardOut::myHero_1 = new QPushButton(this);
    CardOut::myHero_1-> setGeometry(300, 400, 10, 10);
    CardOut::myHero_1-> hide();
    CardOut::myHero_2 = new QPushButton(this);
    CardOut::myHero_2-> setGeometry(300, 400, 10, 10);
    CardOut::myHero_2-> hide();
    CardOut::myHero_3 = new QPushButton(this);
    CardOut::myHero_3-> setGeometry(300, 400, 10, 10);
    CardOut::myHero_3-> hide();
    CardOut::myHero_4 = new QPushButton(this);
    CardOut::myHero_4-> setGeometry(300, 400, 10, 10);
    CardOut::myHero_4-> hide();
    CardOut::myHero_5 = new QPushButton(this);
    CardOut::myHero_5-> setGeometry(300, 400, 10, 10);
    CardOut::myHero_5-> hide();

    CardOut::moveCount_h1 = new QTimer(this);
    CardOut::moveCount_h2 = new QTimer(this);
    CardOut::moveCount_h3 = new QTimer(this);
    CardOut::moveCount_h4 = new QTimer(this);
    CardOut::moveCount_h5 = new QTimer(this);

    CardOut::dieCount_h1 = new QTimer(this);
    CardOut::dieCount_h2 = new QTimer(this);
    CardOut::dieCount_h3 = new QTimer(this);
    CardOut::dieCount_h4 = new QTimer(this);
    CardOut::dieCount_h5 = new QTimer(this);

//////////////////////////////////////////////////////////////HERO
////////////////////////////////////////////////////////////////////////////SOLDIER1
    CardOut::mySoldier1_1 = new QPushButton(this);
    CardOut::mySoldier1_1-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier1_1-> hide();
    CardOut::mySoldier1_2 = new QPushButton(this);
    CardOut::mySoldier1_2-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier1_2-> hide();
    CardOut::mySoldier1_3 = new QPushButton(this);
    CardOut::mySoldier1_3-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier1_3-> hide();
    CardOut::mySoldier1_4 = new QPushButton(this);
    CardOut::mySoldier1_4-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier1_4-> hide();
    CardOut::mySoldier1_5 = new QPushButton(this);
    CardOut::mySoldier1_5-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier1_5-> hide();

    CardOut::moveCount_s1_1 = new QTimer(this);
    CardOut::moveCount_s1_2 = new QTimer(this);
    CardOut::moveCount_s1_3 = new QTimer(this);
    CardOut::moveCount_s1_4 = new QTimer(this);
    CardOut::moveCount_s1_5 = new QTimer(this);

    CardOut::dieCount_s1_1 = new QTimer(this);
    CardOut::dieCount_s1_2 = new QTimer(this);
    CardOut::dieCount_s1_3 = new QTimer(this);
    CardOut::dieCount_s1_4 = new QTimer(this);
    CardOut::dieCount_s1_5 = new QTimer(this);

//////////////////////////////////////////////////////////////SOLDIER1
////////////////////////////////////////////////////////////////////////////SOLDIER2
    CardOut::mySoldier2_1 = new QPushButton(this);
    CardOut::mySoldier2_1-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier2_1-> hide();
    CardOut::mySoldier2_2 = new QPushButton(this);
    CardOut::mySoldier2_2-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier2_2-> hide();
    CardOut::mySoldier2_3 = new QPushButton(this);
    CardOut::mySoldier2_3-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier2_3-> hide();
    CardOut::mySoldier2_4 = new QPushButton(this);
    CardOut::mySoldier2_4-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier2_4-> hide();
    CardOut::mySoldier2_5 = new QPushButton(this);
    CardOut::mySoldier2_5-> setGeometry(300, 400, 10, 10);
    CardOut::mySoldier2_5-> hide();

    CardOut::moveCount_s2_1 = new QTimer(this);
    CardOut::moveCount_s2_2 = new QTimer(this);
    CardOut::moveCount_s2_3 = new QTimer(this);
    CardOut::moveCount_s2_4 = new QTimer(this);
    CardOut::moveCount_s2_5 = new QTimer(this);

    CardOut::dieCount_s2_1 = new QTimer(this);
    CardOut::dieCount_s2_2 = new QTimer(this);
    CardOut::dieCount_s2_3 = new QTimer(this);
    CardOut::dieCount_s2_4 = new QTimer(this);
    CardOut::dieCount_s2_5 = new QTimer(this);
//////////////////////////////////////////////////////////////SOLDIER1
//////////////////////////////////////////////////////////////HELPER
    CardOut::myHelper_1 = new QPushButton(this);
    CardOut::myHelper_1-> setGeometry(300, 400, 10, 10);
    CardOut::myHelper_1-> hide();
    CardOut::myHelper_2 = new QPushButton(this);
    CardOut::myHelper_2-> setGeometry(300, 400, 10, 10);
    CardOut::myHelper_2-> hide();
    CardOut::myHelper_3 = new QPushButton(this);
    CardOut::myHelper_3-> setGeometry(300, 400, 10, 10);
    CardOut::myHelper_3-> hide();
    CardOut::myHelper_4 = new QPushButton(this);
    CardOut::myHelper_4-> setGeometry(300, 400, 10, 10);
    CardOut::myHelper_4-> hide();
    CardOut::myHelper_5 = new QPushButton(this);
    CardOut::myHelper_5-> setGeometry(300, 400, 10, 10);
    CardOut::myHelper_5-> hide();

    CardOut::moveCount_help_1 = new QTimer(this);
    CardOut::moveCount_help_2 = new QTimer(this);
    CardOut::moveCount_help_3 = new QTimer(this);
    CardOut::moveCount_help_4 = new QTimer(this);
    CardOut::moveCount_help_5 = new QTimer(this);

    CardOut::dieCount_help_1 = new QTimer(this);
    CardOut::dieCount_help_2 = new QTimer(this);
    CardOut::dieCount_help_3 = new QTimer(this);
    CardOut::dieCount_help_4 = new QTimer(this);
    CardOut::dieCount_help_5 = new QTimer(this);
/////////////////////////////////////////////////////////////////HELPER
////////////////////////////////////////////////////////////////AI
    AiFight::aiHero_1 = new QPushButton(this);
    AiFight::aiHero_1-> setGeometry(300, 200, 10, 10);
    AiFight::aiHero_1-> hide();
    AiFight::aiHero_2 = new QPushButton(this);
    AiFight::aiHero_2-> setGeometry(300, 200, 10, 10);
    AiFight::aiHero_2-> hide();
    AiFight::aiHero_3 = new QPushButton(this);
    AiFight::aiHero_3-> setGeometry(300, 200, 10, 10);
    AiFight::aiHero_3-> hide();
    AiFight::aiHero_4 = new QPushButton(this);
    AiFight::aiHero_4-> setGeometry(300, 200, 10, 10);
    AiFight::aiHero_4-> hide();
    AiFight::aiHero_5 = new QPushButton(this);
    AiFight::aiHero_5-> setGeometry(300, 200, 10, 10);
    AiFight::aiHero_5-> hide();

    AiFight::aiSoldier1_1 = new QPushButton(this);
    AiFight::aiSoldier1_1-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier1_1-> hide();
    AiFight::aiSoldier1_2 = new QPushButton(this);
    AiFight::aiSoldier1_2-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier1_2-> hide();
    AiFight::aiSoldier1_3 = new QPushButton(this);
    AiFight::aiSoldier1_3-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier1_3-> hide();
    AiFight::aiSoldier1_4 = new QPushButton(this);
    AiFight::aiSoldier1_4-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier1_4-> hide();
    AiFight::aiSoldier1_5 = new QPushButton(this);
    AiFight::aiSoldier1_5-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier1_5-> hide();

    AiFight::aiSoldier2_1 = new QPushButton(this);
    AiFight::aiSoldier2_1-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier2_1-> hide();
    AiFight::aiSoldier2_2 = new QPushButton(this);
    AiFight::aiSoldier2_2-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier2_2-> hide();
    AiFight::aiSoldier2_3 = new QPushButton(this);
    AiFight::aiSoldier2_3-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier2_3-> hide();
    AiFight::aiSoldier2_4 = new QPushButton(this);
    AiFight::aiSoldier2_4-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier2_4-> hide();
    AiFight::aiSoldier2_5 = new QPushButton(this);
    AiFight::aiSoldier2_5-> setGeometry(300, 200, 10, 10);
    AiFight::aiSoldier2_5-> hide();

    AiFight::aiBackup_1 = new QPushButton(this);
    AiFight::aiBackup_1-> setGeometry(300, 200, 10, 10);
    AiFight::aiBackup_1-> hide();
    AiFight::aiBackup_2 = new QPushButton(this);
    AiFight::aiBackup_2-> setGeometry(300, 200, 10, 10);
    AiFight::aiBackup_2-> hide();
    AiFight::aiBackup_3 = new QPushButton(this);
    AiFight::aiBackup_3-> setGeometry(300, 200, 10, 10);
    AiFight::aiBackup_3-> hide();
    AiFight::aiBackup_4 = new QPushButton(this);
    AiFight::aiBackup_4-> setGeometry(300, 200, 10, 10);
    AiFight::aiBackup_4-> hide();
    AiFight::aiBackup_5 = new QPushButton(this);
    AiFight::aiBackup_5-> setGeometry(300, 200, 10, 10);
    AiFight::aiBackup_5-> hide();

    AiFight::aiMoveCount_H_1 = new QTimer(this);
    AiFight::aiMoveCount_H_2 = new QTimer(this);
    AiFight::aiMoveCount_H_3 = new QTimer(this);
    AiFight::aiMoveCount_H_4 = new QTimer(this);
    AiFight::aiMoveCount_H_5 = new QTimer(this);

    AiFight::aiDieCount_H_1 = new QTimer(this);
    AiFight::aiDieCount_H_2 = new QTimer(this);
    AiFight::aiDieCount_H_3 = new QTimer(this);
    AiFight::aiDieCount_H_4 = new QTimer(this);
    AiFight::aiDieCount_H_5 = new QTimer(this);

    AiFight::aiMoveCount_S1_1 = new QTimer(this);
    AiFight::aiMoveCount_S1_2 = new QTimer(this);
    AiFight::aiMoveCount_S1_3 = new QTimer(this);
    AiFight::aiMoveCount_S1_4 = new QTimer(this);
    AiFight::aiMoveCount_S1_5 = new QTimer(this);

    AiFight::aiDieCount_S1_1 = new QTimer(this);
    AiFight::aiDieCount_S1_2 = new QTimer(this);
    AiFight::aiDieCount_S1_3 = new QTimer(this);
    AiFight::aiDieCount_S1_4 = new QTimer(this);
    AiFight::aiDieCount_S1_5 = new QTimer(this);

    AiFight::aiMoveCount_S2_1 = new QTimer(this);
    AiFight::aiMoveCount_S2_2 = new QTimer(this);
    AiFight::aiMoveCount_S2_3 = new QTimer(this);
    AiFight::aiMoveCount_S2_4 = new QTimer(this);
    AiFight::aiMoveCount_S2_5 = new QTimer(this);

    AiFight::aiDieCount_S2_1 = new QTimer(this);
    AiFight::aiDieCount_S2_2 = new QTimer(this);
    AiFight::aiDieCount_S2_3 = new QTimer(this);
    AiFight::aiDieCount_S2_4 = new QTimer(this);
    AiFight::aiDieCount_S2_5 = new QTimer(this);

    AiFight::aiMoveCount_B_1 = new QTimer(this);
    AiFight::aiMoveCount_B_2 = new QTimer(this);
    AiFight::aiMoveCount_B_3 = new QTimer(this);
    AiFight::aiMoveCount_B_4 = new QTimer(this);
    AiFight::aiMoveCount_B_5 = new QTimer(this);

    AiFight::aiDieCount_B_1 = new QTimer(this);
    AiFight::aiDieCount_B_2 = new QTimer(this);
    AiFight::aiDieCount_B_3 = new QTimer(this);
    AiFight::aiDieCount_B_4 = new QTimer(this);
    AiFight::aiDieCount_B_5 = new QTimer(this);
//=====================================================================================================

    myScore = new QLCDNumber(this);
    myScore-> setPalette(Qt::black);    //設定顏色
    myScore-> setDigitCount(2);         //設定位數
    myScore-> display(CardOut::countMyScore);          //設定顯示數字
    myScore-> setGeometry(200,400,80,30);
    myScore-> hide();

    aiScore = new QLCDNumber(this);
    aiScore-> setPalette(Qt::black);    //設定顏色
    aiScore-> setDigitCount(2);         //設定位數
    aiScore-> display(AiFight::countAiScore);          //設定顯示數字
    aiScore-> setGeometry(200,200,80,30);
    aiScore-> hide();

    aiOut = new QTimer(this);

    //設定youWinPage背景色
    youWinPageFrame = new QFrame(this);
    youWinPageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    youWinPageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout6 = new QHBoxLayout(youWinPageFrame);

    QPalette p6 = youWinPageFrame-> palette();
    p6.setColor(QPalette::Window, Qt::darkYellow);
    youWinPageFrame-> setPalette(p6);
    youWinPageFrame-> hide();

    //設定youLosePage背景色
    youLosePageFrame = new QFrame(this);
    youLosePageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    youLosePageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout7 = new QHBoxLayout(youLosePageFrame);

    QPalette p7 = youLosePageFrame-> palette();
    p6.setColor(QPalette::Window, Qt::darkRed);
    youLosePageFrame-> setPalette(p7);
    youLosePageFrame-> hide();

    //設定tiePage背景色
    tiePageFrame = new QFrame(this);
    tiePageFrame-> setAutoFillBackground(true); //需加此行否則無法填充背景
    tiePageFrame-> resize(400,700); //背景大小為視窗大小
    mainLayout8 = new QHBoxLayout(tiePageFrame);

    QPalette p8 = tiePageFrame-> palette();
    p6.setColor(QPalette::Window, Qt::lightGray);
    tiePageFrame-> setPalette(p8);
    tiePageFrame-> hide();

    //放上開始鍵
    start = new QPushButton(tr("開始"),this);
    start-> setGeometry(140,400,120,50);
    start-> setFont(QFont("Times",18));

    //放上結束鍵
    end = new QPushButton(tr("結束"),this);
    end-> setGeometry(140,500,120,50);
    end-> setFont(QFont("Times",18));

    //創建選牌頁的按鍵：選牌
    manualChose = new QPushButton(tr("選牌"),this);
    manualChose-> setGeometry(140,400,120,50);
    manualChose-> setFont(QFont("Times",18));

    //創建選牌頁的按鍵：電腦抽牌
    autoChose = new QPushButton(tr("電腦抽牌"),this);
    autoChose-> setGeometry(140,500,120,50);
    autoChose-> setFont(QFont("Times",18));
    //隱藏選牌鍵
    manualChose-> hide();
    //隱藏抽牌鍵
    autoChose-> hide();

    //建立選牌頁面的勾選區
    groupbox = new GroupBox(this);
    groupbox-> hide();
    cardout = new CardOut(this);
    //aifight = new AiFight(this);

    //建立敵方城堡
    QPixmap ai(":/picture/enemyCastle.png");                   //載入圖檔
    aiCastle = new QLabel(this);
    aiCastle->setGeometry(160,5,100,100);
    aiCastle->setPixmap(ai.scaled(100,100,Qt::KeepAspectRatio));  //將圖案縮小為(400,400)
    aiCastle-> hide();

    //建立己方城堡
    QPixmap my(":/picture/myCastle.png");                   //載入圖檔
    myCastle = new QLabel(this);
    myCastle->setGeometry(160,405,100,100);
    myCastle->setPixmap(my.scaled(100,100,Qt::KeepAspectRatio));  //將圖案縮小為(400,400)
    myCastle-> hide();

    //創建選牌頁的按鍵：確定
    manChConfirm = new QPushButton(tr("確定"),this);
    manChConfirm-> setGeometry(140,500,120,50);
    manChConfirm-> setFont(QFont("Times",18));
    //隱藏確定鍵
    manChConfirm-> hide();

    //設定初始頁面標題
    startTitle = new QLabel(this);
    startTitle-> setText(tr("<font color=white>攻城</font>"));
    startTitle-> setFont(QFont("Times",72));
    startTitle-> setGeometry(50,-25,300,250);        //設定位置大小
    startTitle-> setAlignment(Qt::AlignCenter);   //label文字置中

    //設定勝利頁面標題
    winTitle = new QLabel(this);
    winTitle-> setText(tr("<font color=purple>勝利</font>"));
    winTitle-> setFont(QFont("Times",72));
    winTitle-> setGeometry(50,200,300,250);        //設定位置大小
    winTitle-> setAlignment(Qt::AlignCenter);   //label文字置中
    winTitle-> hide();

    //設定戰敗頁面標題
    loseTitle = new QLabel(this);
    loseTitle-> setText(tr("<font color=black>戰敗</font>"));
    loseTitle-> setFont(QFont("Times",72));
    loseTitle-> setGeometry(50,200,300,250);        //設定位置大小
    loseTitle-> setAlignment(Qt::AlignCenter);   //label文字置中
    loseTitle-> hide();

    //設定平手頁面標題
    tieTitle = new QLabel(this);
    tieTitle-> setText(tr("<font color=black>平手</font>"));
    tieTitle-> setFont(QFont("Times",72));
    tieTitle-> setGeometry(50,200,300,250);        //設定位置大小
    tieTitle-> setAlignment(Qt::AlignCenter);   //label文字置中
    tieTitle-> hide();

    //播放音樂,無法放入長音樂
   /* bgm = new QSound("backGroundMusic.wav");
    bgm-> play();
*/
    //連接end與關閉頁面
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
    //連接start與隱藏初始頁面
    connect(start,SIGNAL(clicked()),this,SLOT(chPage()));



}
void MainWindow::chPage(){

    //隱藏桌面按鍵
    start->hide();
    end->hide();
    mainFrame->hide();
    startTitle-> hide();
    //顯示選牌鍵與選牌頁面
    manualChose-> show();
    autoChose-> show();
    chPageFrame-> show();
    //連接選牌與選牌頁面
    connect(manualChose,SIGNAL(clicked(bool)),this,SLOT(manChPage()));
    //連接電腦抽牌與電腦抽牌頁面
    connect(autoChose,SIGNAL(clicked(bool)),this,SLOT(autoChPage()));
}
void MainWindow::manChPage(){
    //隱藏桌面按鍵
    manualChose-> hide();
    autoChose-> hide();
    chPageFrame-> hide();
    startPic-> hide();
    //顯示選牌頁面,選牌頁面確定鍵,選牌頁面groupbox
    manChConfirm-> show();
    manChPageFrame-> show();
    groupbox-> show();
    //連接選牌頁面確定鍵與戰鬥頁面
    connect(manChConfirm,SIGNAL(clicked(bool)),this,SLOT(fightPage()));

}
void MainWindow::autoChPage(){
    //隱藏桌面按鍵
    manualChose->hide();
    autoChose->hide();
    chPageFrame->hide();
    //顯示電腦抽牌頁面
    autoChPageFrame-> show();
}

void MainWindow::fightPage(){
    //=============================================================
    //判斷勾選了哪個英雄,並顯現出相對應的圖案
    if(GroupBox::check1-> isChecked() == true)
    {
        hero-> setIcon(QIcon("://picture/hero_1.jpg"));
        CardOut::myHero_1-> setIcon(QIcon("://picture/red.png"));
        CardOut::myHero_2-> setIcon(QIcon("://picture/red.png"));
        CardOut::myHero_3-> setIcon(QIcon("://picture/red.png"));
        CardOut::myHero_4-> setIcon(QIcon("://picture/red.png"));
        CardOut::myHero_5-> setIcon(QIcon("://picture/red.png"));

        AiFight::aiHero_1-> setIcon(QIcon("://picture/brown.png"));
        AiFight::aiHero_2-> setIcon(QIcon("://picture/brown.png"));
        AiFight::aiHero_3-> setIcon(QIcon("://picture/brown.png"));
        AiFight::aiHero_4-> setIcon(QIcon("://picture/brown.png"));
        AiFight::aiHero_5-> setIcon(QIcon("://picture/brown.png"));
    }else if(GroupBox::check2-> isChecked() == true)
    {
        hero-> setIcon(QIcon("://picture/hero_2.jpg"));
        CardOut::myHero_1-> setIcon(QIcon("://picture/brown.png"));
        CardOut::myHero_2-> setIcon(QIcon("://picture/brown.png"));
        CardOut::myHero_3-> setIcon(QIcon("://picture/brown.png"));
        CardOut::myHero_4-> setIcon(QIcon("://picture/brown.png"));
        CardOut::myHero_5-> setIcon(QIcon("://picture/brown.png"));

        AiFight::aiHero_1-> setIcon(QIcon("://picture/fox.png"));
        AiFight::aiHero_2-> setIcon(QIcon("://picture/fox.png"));
        AiFight::aiHero_3-> setIcon(QIcon("://picture/fox.png"));
        AiFight::aiHero_4-> setIcon(QIcon("://picture/fox.png"));
        AiFight::aiHero_5-> setIcon(QIcon("://picture/fox.png"));
    }else if(GroupBox::check3-> isChecked() == true)
    {
        hero-> setIcon(QIcon("://picture/hero_3.jpg"));
        CardOut::myHero_1-> setIcon(QIcon("://picture/fox.png"));
        CardOut::myHero_2-> setIcon(QIcon("://picture/fox.png"));
        CardOut::myHero_3-> setIcon(QIcon("://picture/fox.png"));
        CardOut::myHero_4-> setIcon(QIcon("://picture/fox.png"));
        CardOut::myHero_5-> setIcon(QIcon("://picture/fox.png"));

        AiFight::aiHero_1-> setIcon(QIcon("://picture/red.png"));
        AiFight::aiHero_2-> setIcon(QIcon("://picture/red.png"));
        AiFight::aiHero_3-> setIcon(QIcon("://picture/red.png"));
        AiFight::aiHero_4-> setIcon(QIcon("://picture/red.png"));
        AiFight::aiHero_5-> setIcon(QIcon("://picture/red.png"));
    }
    hero-> setIconSize(QSize(80,80));
    hero-> show();
    CardOut::myHero_1-> setIconSize(QSize(20,20));

    //判斷勾選了哪個士兵1,並顯現出相對應的圖案
    if(GroupBox::check4-> isChecked() == true)
    {
        soldier1-> setIcon(QIcon("://picture/soldier_1.jpg"));
        CardOut::mySoldier1_1-> setIcon(QIcon("://picture/yellow.png"));
        CardOut::mySoldier1_2-> setIcon(QIcon("://picture/yellow.png"));
        CardOut::mySoldier1_3-> setIcon(QIcon("://picture/yellow.png"));
        CardOut::mySoldier1_4-> setIcon(QIcon("://picture/yellow.png"));
        CardOut::mySoldier1_5-> setIcon(QIcon("://picture/yellow.png"));

        AiFight::aiSoldier1_1-> setIcon(QIcon("://picture/purple.png"));
        AiFight::aiSoldier1_2-> setIcon(QIcon("://picture/purple.png"));
        AiFight::aiSoldier1_3-> setIcon(QIcon("://picture/purple.png"));
        AiFight::aiSoldier1_4-> setIcon(QIcon("://picture/purple.png"));
        AiFight::aiSoldier1_5-> setIcon(QIcon("://picture/purple.png"));
    }else if(GroupBox::check5-> isChecked() == true)
    {
        soldier1-> setIcon(QIcon("://picture/soldier_2.jpg"));
        CardOut::mySoldier1_1-> setIcon(QIcon("://picture/purple.png"));
        CardOut::mySoldier1_2-> setIcon(QIcon("://picture/purple.png"));
        CardOut::mySoldier1_3-> setIcon(QIcon("://picture/purple.png"));
        CardOut::mySoldier1_4-> setIcon(QIcon("://picture/purple.png"));
        CardOut::mySoldier1_5-> setIcon(QIcon("://picture/purple.png"));

        AiFight::aiSoldier1_1-> setIcon(QIcon("://picture/yellow.png"));
        AiFight::aiSoldier1_2-> setIcon(QIcon("://picture/yellow.png"));
        AiFight::aiSoldier1_3-> setIcon(QIcon("://picture/yellow.png"));
        AiFight::aiSoldier1_4-> setIcon(QIcon("://picture/yellow.png"));
        AiFight::aiSoldier1_5-> setIcon(QIcon("://picture/yellow.png"));
    }
    soldier1-> setIconSize(QSize(80,80));
    soldier1-> show();
    //判斷勾選了哪個士兵1,並顯現出相對應的圖案
    if(GroupBox::check6-> isChecked() == true)
    {
        soldier2-> setIcon(QIcon("://picture/soldier_3.jpg"));
        CardOut::mySoldier2_1-> setIcon(QIcon("://picture/glasses.png"));
        CardOut::mySoldier2_2-> setIcon(QIcon("://picture/glasses.png"));
        CardOut::mySoldier2_3-> setIcon(QIcon("://picture/glasses.png"));
        CardOut::mySoldier2_4-> setIcon(QIcon("://picture/glasses.png"));
        CardOut::mySoldier2_5-> setIcon(QIcon("://picture/glasses.png"));

        AiFight::aiSoldier2_1-> setIcon(QIcon("://picture/cloth.png"));
        AiFight::aiSoldier2_2-> setIcon(QIcon("://picture/cloth.png"));
        AiFight::aiSoldier2_3-> setIcon(QIcon("://picture/cloth.png"));
        AiFight::aiSoldier2_4-> setIcon(QIcon("://picture/cloth.png"));
        AiFight::aiSoldier2_5-> setIcon(QIcon("://picture/cloth.png"));
    }else if(GroupBox::check7-> isChecked() == true)
    {
        soldier2-> setIcon(QIcon("://picture/soldier_4.jpg"));
        CardOut::mySoldier2_1-> setIcon(QIcon("://picture/cloth.png"));
        CardOut::mySoldier2_2-> setIcon(QIcon("://picture/cloth.png"));
        CardOut::mySoldier2_3-> setIcon(QIcon("://picture/cloth.png"));
        CardOut::mySoldier2_4-> setIcon(QIcon("://picture/cloth.png"));
        CardOut::mySoldier2_5-> setIcon(QIcon("://picture/cloth.png"));

        AiFight::aiSoldier2_1-> setIcon(QIcon("://picture/glasses.png"));
        AiFight::aiSoldier2_2-> setIcon(QIcon("://picture/glasses.png"));
        AiFight::aiSoldier2_3-> setIcon(QIcon("://picture/glasses.png"));
        AiFight::aiSoldier2_4-> setIcon(QIcon("://picture/glasses.png"));
        AiFight::aiSoldier2_5-> setIcon(QIcon("://picture/glasses.png"));

    }
    soldier2-> setIconSize(QSize(80,80));
    //soldier2-> show();
    //判斷勾選了哪個支援,並顯現出相對應的圖案
    if(GroupBox::check8-> isChecked() == true)
    {
        //helperType = 1;
        helper-> setIcon(QIcon("://picture/helper_1.jpg"));
        CardOut::myHelper_1-> setIcon(QIcon("://picture/green.png"));
        CardOut::myHelper_2-> setIcon(QIcon("://picture/green.png"));
        CardOut::myHelper_3-> setIcon(QIcon("://picture/green.png"));
        CardOut::myHelper_4-> setIcon(QIcon("://picture/green.png"));
        CardOut::myHelper_5-> setIcon(QIcon("://picture/green.png"));

        AiFight::aiBackup_1-> setIcon(QIcon("://picture/black.png"));
        AiFight::aiBackup_2-> setIcon(QIcon("://picture/black.png"));
        AiFight::aiBackup_3-> setIcon(QIcon("://picture/black.png"));
        AiFight::aiBackup_4-> setIcon(QIcon("://picture/black.png"));
        AiFight::aiBackup_5-> setIcon(QIcon("://picture/black.png"));
    }else if(GroupBox::check9-> isChecked() == true)
    {
        helper-> setIcon(QIcon("://picture/helper_2.jpg"));
        CardOut::myHelper_1-> setIcon(QIcon("://picture/black.png"));
        CardOut::myHelper_2-> setIcon(QIcon("://picture/black.png"));
        CardOut::myHelper_3-> setIcon(QIcon("://picture/black.png"));
        CardOut::myHelper_4-> setIcon(QIcon("://picture/black.png"));
        CardOut::myHelper_5-> setIcon(QIcon("://picture/black.png"));

        AiFight::aiBackup_1-> setIcon(QIcon("://picture/boy.png"));
        AiFight::aiBackup_2-> setIcon(QIcon("://picture/boy.png"));
        AiFight::aiBackup_3-> setIcon(QIcon("://picture/boy.png"));
        AiFight::aiBackup_4-> setIcon(QIcon("://picture/boy.png"));
        AiFight::aiBackup_5-> setIcon(QIcon("://picture/boy.png"));
    }else if(GroupBox::check10-> isChecked() == true)
    {
        helper-> setIcon(QIcon("://picture/helper_3.jpg"));
        CardOut::myHelper_1-> setIcon(QIcon("://picture/boy.png"));
        CardOut::myHelper_2-> setIcon(QIcon("://picture/boy.png"));
        CardOut::myHelper_3-> setIcon(QIcon("://picture/boy.png"));
        CardOut::myHelper_4-> setIcon(QIcon("://picture/boy.png"));
        CardOut::myHelper_5-> setIcon(QIcon("://picture/boy.png"));

        AiFight::aiBackup_1-> setIcon(QIcon("://picture/green.png"));
        AiFight::aiBackup_2-> setIcon(QIcon("://picture/green.png"));
        AiFight::aiBackup_3-> setIcon(QIcon("://picture/green.png"));
        AiFight::aiBackup_4-> setIcon(QIcon("://picture/green.png"));
        AiFight::aiBackup_5-> setIcon(QIcon("://picture/green.png"));
        AiFight::aiBackup_5-> show();
    }
    helper-> setIconSize(QSize(80,80));
    //helper-> show();
    manChConfirm-> hide();
    //=============================================================
    manChPageFrame-> hide();
    groupbox-> hide();

    fightPageFrame-> show();
    myCastle-> show();
    aiCastle-> show();
    myScore-> show();
    aiScore-> show();
    ///////////////////////////////////////////////
    while (CardOut::countMyScore < 50 && AiFight::countAiScore < 50){
    connect(hero , SIGNAL(clicked(bool)) , this , SLOT(chDeck_H()));
    connect(soldier1 , SIGNAL(clicked(bool)) , this , SLOT(chDeck_S1()));
    connect(soldier2 , SIGNAL(clicked(bool)) , this , SLOT(chDeck_S2()));
    connect(helper , SIGNAL(clicked(bool)) , this , SLOT(chDeck_HELP()));
    connect(hero , SIGNAL(clicked(bool)) , this , SLOT(CardOut::heroOut()));
    connect(soldier1 , SIGNAL(clicked(bool)) , this , SLOT(CardOut::soldier1_Out()));
    connect(soldier2 , SIGNAL(clicked(bool)) , this , SLOT(CardOut::soldier2_Out()));
    connect(helper , SIGNAL(clicked(bool)) , this , SLOT(CardOut::helperOut()));
    aiOut-> start(1500);
    connect(aiOut, SIGNAL(timeout()), this, SLOT(aiConnect()));
    }
    if(CardOut::countMyScore >= 50 && AiFight::countAiScore < 50){
        aiCastle-> hide();
        wait1 = new QTimer(this);
        wait1-> start(3000);
        connect(wait1, SIGNAL(timeout()), this, SLOT(youWinPage()));
    }else if(CardOut::countMyScore < 50 && AiFight::countAiScore >= 50){
        myCastle-> hide();
        wait2 = new QTimer;
        wait2-> start(3000);
        connect(wait2, SIGNAL(timeout()), this, SLOT(youLosePage()));
    }else if(CardOut::countMyScore == 50 && AiFight::countAiScore == 50){
        tiePage();
    }

}
void MainWindow::youWinPage(){
    fightPageFrame-> hide();
    myCastle-> hide();
    myScore-> hide();
    aiScore-> hide();
    hero->hide();
    soldier1->hide();
    soldier2->hide();
    helper->hide();
    //CardOut::~CardOut();
    //AiFight::~AiFight();

    youWinPageFrame-> show();
    winTitle-> show();
}
void MainWindow::youLosePage(){
    fightPageFrame-> hide();
    aiCastle->hide();
    myScore-> hide();
    aiScore-> hide();
    hero->hide();
    soldier1->hide();
    soldier2->hide();
    helper->hide();
    //CardOut::~CardOut();
    //AiFight::~AiFight();

    youLosePageFrame-> show();
    loseTitle-> show();
}
void MainWindow::tiePage(){
    fightPageFrame-> hide();
    myCastle-> hide();
    aiCastle-> hide();
    myScore-> hide();
    aiScore-> hide();
    hero->hide();
    soldier1->hide();
    soldier2->hide();
    helper->hide();
    //CardOut::~CardOut();
    //AiFight::~AiFight();

    tiePageFrame-> show();
    tieTitle-> show();
}

void MainWindow::aiConnect(){
    aiCounter = aiCounter + 1;
    int i = aiCounter;
    i = i%4 + 1;
    /*
    if(i == 1)
        AiFight::aiHero_out();
    if(i == 2)
        AiFight::aiSoldier1_out();
    if(i == 3)
        AiFight::aiSoldier2_out();
    if(i == 4)
        AiFight::aiBackup_out();*/
}

void MainWindow::chDeck_H(){
    hero-> hide();
    if(soldier1->isHidden() == true){
        soldier1-> show();
    }else if(soldier2->isHidden() == true){
        soldier2-> show();
    }else{
        helper-> show();
    }
}
void MainWindow::chDeck_S1(){
    soldier1-> hide();
    if(soldier2->isHidden() == true){
        soldier2-> show();
    }else if(helper->isHidden() == true){
        helper-> show();
    }else{
        hero-> show();
    }
}
void MainWindow::chDeck_S2(){
    soldier2-> hide();
    if(helper->isHidden() == true){
        helper-> show();
    }else if(hero->isHidden() == true){
        hero-> show();
    }else{
        soldier1-> show();
    }
}
void MainWindow::chDeck_HELP(){
    helper-> hide();
    if(hero->isHidden() == true){
        hero-> show();
    }else if(soldier1->isHidden() == true){
        soldier1-> show();
    }else{
        soldier2-> show();
    }
}
MainWindow::~MainWindow()
{
    delete mainLayout; delete mainLayout2; delete mainLayout3; delete mainLayout4; delete mainLayout5;
    delete bgm;
    delete start; delete end; delete manualChose; delete autoChose; delete manChConfirm;
    delete mainFrame; delete chPageFrame; delete manChPageFrame; delete autoChPageFrame; delete fightPageFrame;
    delete startTitle;
    delete startPic;
    delete groupbox;
    delete cardout;
    delete hero; delete soldier1; delete soldier2;  delete helper;
    delete myScore; delete aiScore;
    delete myCastle; delete aiCastle;
    delete aiOut;
    //delete aifight;
    delete youWinPageFrame; delete youLosePageFrame; delete tiePageFrame;
    delete mainLayout6; delete mainLayout7; delete mainLayout8;
    delete winTitle; delete loseTitle; delete tieTitle;
    delete wait1; delete wait2;
}
    //scene = new Scene(heroType, helperType, soldier1Type, soldier2Type);
    //ui->graphicsView->setScene(scene);
    //scene->setSceneRect(10,0,350,630);
    //settingBg(10,630);
    //ui->graphicsView->show();
    /*
    void MainWindow::settingBg()
    {
    QImage bg;
    bg.load(":/image/img/open.jpg");
    bg = bg.scaled(370,999);
    scene->setBackgroundBrush(bg);
    }
    */
    //connect(hero, SIGNAL(clicked()), &scene, SLOT(hero_out()));


