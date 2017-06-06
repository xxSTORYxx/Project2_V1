#include "scene.h"

Scene::Scene(int hero, int helper, int soldier1, int soldier2, QObject *parent) : QObject(parent)
{

}
void Scene::hero_out()
{
    QPixmap hero;
    if(heroType == 1)
        hero.load(":/image/img/.jpg");//
    else
        hero.load(":/image/img/.jpg");//
    start = start.scaled(start.width()*3/2,start.height()*3/2,Qt::KeepAspectRatio);

    myhero_1 = new Minion(50);
    myhero_2 = new Minion(50);
    myhero_3 = new Minion(50);
    myhero_4 = new Minion(50);
    myhero_5 = new Minion(50);
    myhero_1->setPixmap(hero);
    myhero_2->setPixmap(hero);
    myhero_3->setPixmap(hero);
    myhero_4->setPixmap(hero);
    myhero_5->setPixmap(hero);
    //btn_start->setPos(200,390);
}
//if(x == 1){
// addItem(myhero_1);
// ++x;
//}
//if(x == 2)
