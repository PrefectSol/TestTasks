#ifndef FISH_H
#define FISH_H

#include <QGraphicsItem>
#include <QPainter>
#include <cmath>

class Fish : public QGraphicsPolygonItem
{
public:
    Fish();

    void SetSpeed(int speed);

private:
    QPoint points[16];

    qreal xPos;
    qreal yPos;

    qreal angle;

    bool toBack;

    int speed;

    const int SIZE;

protected:
    void advance(int phase) override;
};

#endif // FISH_H
