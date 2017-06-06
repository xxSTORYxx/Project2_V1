#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    QDesktopWidget wid;
    // ================= Setting Windows Size =================
    int screenW = 400;
    int screenH = 700;
    m.setGeometry(wid.screen()-> width()/2-(screenW/2),
                  wid.screen()-> height()/2 - (screenH/2),
                  screenW , screenH);
    // ================= Setting Windows Title and Icon =================
    m.show();


    return a.exec();
}
