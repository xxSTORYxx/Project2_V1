#include "groupbox.h"

QRadioButton* GroupBox::check1 = nullptr;
QRadioButton* GroupBox::check2 = nullptr;
QRadioButton* GroupBox::check3 = nullptr;
QRadioButton* GroupBox::check4 = nullptr;
QRadioButton* GroupBox::check5 = nullptr;
QRadioButton* GroupBox::check6 = nullptr;
QRadioButton* GroupBox::check7 = nullptr;
QRadioButton* GroupBox::check8 = nullptr;
QRadioButton* GroupBox::check9 = nullptr;
QRadioButton* GroupBox::check10 = nullptr;
GroupBox::GroupBox(QWidget *parent):QWidget(parent)
{
    //請選擇英雄
    myGroupBox1 = new QGroupBox(tr("請選擇英雄"),this);
    myGroupBox1-> setGeometry(100,50,200,60);
    check1 = new QRadioButton(tr("弘南"),this);
    check2 = new QRadioButton(tr("宗女"),this);
    check3 = new QRadioButton(tr("白狐"),this);
    check1-> setChecked(true);
    myLayout1 = new QHBoxLayout;
    myLayout1-> addWidget(check1);
    myLayout1-> addWidget(check2);
    myLayout1-> addWidget(check3);
    myGroupBox1-> setLayout(myLayout1);
    //請選擇打手1
    myGroupBox2 = new QGroupBox(tr("請選擇打手1"),this);
    myGroupBox2-> setGeometry(100,150,200,60);
    check4 = new QRadioButton(tr("誕凰"),this);
    check5 = new QRadioButton(tr("紫瑟"),this);
    check4-> setChecked(true);
    myLayout2 = new QHBoxLayout;
    myLayout2-> addWidget(check4);
    myLayout2-> addWidget(check5);
    myGroupBox2-> setLayout(myLayout2);
    //請選擇打手2
    myGroupBox3 = new QGroupBox(tr("請選擇打手2"),this);
    myGroupBox3-> setGeometry(100,250,200,60);
    check6 = new QRadioButton(tr("衍靜"),this);
    check7 = new QRadioButton(tr("投筋"),this);
    check6-> setChecked(true);
    myLayout3 = new QHBoxLayout;
    myLayout3-> addWidget(check6);
    myLayout3-> addWidget(check7);
    myGroupBox3-> setLayout(myLayout3);
    //請選擇支援
    myGroupBox4 = new QGroupBox(tr("請選擇支援"),this);
    myGroupBox4-> setGeometry(100,350,200,60);
    check8 = new QRadioButton(tr("律靈"),this);
    check9 = new QRadioButton(tr("嘿靈"),this);
    check10 = new QRadioButton(tr("楠孩"),this);
    check8-> setChecked(true);
    myLayout4 = new QHBoxLayout;
    myLayout4-> addWidget(check8);
    myLayout4-> addWidget(check9);
    myLayout4-> addWidget(check10);
    myGroupBox4-> setLayout(myLayout4);
}
GroupBox::~GroupBox(){
    delete myGroupBox1; delete myGroupBox2; delete myGroupBox3; delete myGroupBox4;
    delete check1; delete check2; delete check3;
    delete check4; delete check5;
    delete check6; delete check7;
    delete check8; delete check9; delete check10;
    delete myLayout1; delete myLayout2; delete myLayout3; delete myLayout4;
}
