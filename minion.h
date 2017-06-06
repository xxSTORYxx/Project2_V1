#ifndef MINION_H
#define MINION_H

#include <QObject>
#include<QGraphicsPixmapItem>

class Minion : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit Minion(int hp , QObject *parent = 0);

signals:

public slots:
};

#endif // MINION_H
