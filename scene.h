#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

class Scene : public QObject
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);



signals:

public slots:
    void hero_out();
};

#endif // SCENE_H
