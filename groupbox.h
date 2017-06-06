#ifndef GROUPBOX_H
#define GROUPBOX_H

#include <QWidget>
#include <QRadioButton>
#include <QGroupBox>
#include <QHBoxLayout>

class GroupBox:public QWidget
{
    Q_OBJECT
public:
    GroupBox(QWidget *parent = 0);
    ~GroupBox();
    static QRadioButton *check1, *check2, *check3;
    QGroupBox *myGroupBox1;
    QHBoxLayout *myLayout1;

    static QRadioButton *check4, *check5;
    QGroupBox *myGroupBox2;
    QHBoxLayout *myLayout2;

    static QRadioButton *check6, *check7;
    QGroupBox *myGroupBox3;
    QHBoxLayout *myLayout3;

    static QRadioButton *check8, *check9, *check10;
    QGroupBox *myGroupBox4;
    QHBoxLayout *myLayout4;
};

#endif // GROUPBOX_H
