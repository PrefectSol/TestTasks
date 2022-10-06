#include "fish.h"

Fish::Fish() : QGraphicsPolygonItem(), xPos(0), yPos(0), angle(0), toBack(false), SIZE(4)
{
    points[0] = QPoint(-20, 0) * SIZE;
    points[1] = QPoint(-10, 10) * SIZE;
    points[2] = QPoint(0, 20) * SIZE;
    points[3] = QPoint(10, 20) * SIZE;
    points[4] = QPoint(0, 10) * SIZE;
    points[5] = QPoint(10, 10) * SIZE;
    points[6] = QPoint(10, 0) * SIZE;
    points[7] = QPoint(30, 10) * SIZE;
    points[8] = QPoint(30, -10) * SIZE;
    points[9] = QPoint(10, 0) * SIZE;
    points[10] = QPoint(10, -10) * SIZE;
    points[11] = QPoint(0, -10) * SIZE;
    points[12] = QPoint(10, -20) * SIZE;
    points[13] = QPoint(0, -20) * SIZE;
    points[14] = QPoint(-10, -10) * SIZE;
    points[15] = QPoint(-20, 0) * SIZE;

    QPen fishStyle;
    fishStyle.setColor(Qt::red);
    fishStyle.setWidth(3);

    QPolygon fish;
    for(int i = 0; i < 16; i++) {
        fish << points[i];
    }

    setPen(fishStyle);
    setPolygon(fish);
}

void Fish::SetSpeed(int speed) { this->speed = speed; }

void Fish::advance(int phase)
{
    if (angle == 360) angle = 0;
    if (xPos >= 9.43) toBack = true;
    if (xPos <= 0) toBack = false;

    if (toBack) xPos -= (speed / 1000.0);
    else xPos += (speed / 1000.0);

    yPos = sin(xPos) * 200;

    setPos(xPos * 110, yPos);
    setRotation(angle);
    rotation();

    angle++;
}
