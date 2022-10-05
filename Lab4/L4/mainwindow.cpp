#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <cmath>
#include <QDebug>
#include <math.h>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), RADIUS(500)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DrawSticks(QPainter &painter) {
    QPen stick;
    stick.setWidth(50);
    stick.setColor(Qt::white);
    painter.setPen(stick);

    painter.drawLine(width() / 2 - RADIUS / 2 + 30, height() / 2 - RADIUS  / 2 + 30,
                     width() / 2 - RADIUS  / 2 + 42, height() / 2 - RADIUS  / 2 + 42);

    painter.drawLine(width() - (width() / 2 - RADIUS / 2 + 30), height() / 2 - RADIUS  / 2 + 30,
                     width() - (width() / 2 - RADIUS  / 2 + 42), height() / 2 - RADIUS  / 2 + 42);

    stick.setWidth(1);
    stick.setColor(Qt::white);
    painter.setPen(stick);
}

void MainWindow::DrawItems(QPainter &painter) {
    QPolygon item;
    QPen itemPen;

    item << QPoint(150, 170) << QPoint(180, 100) << QPoint(240, 40) << QPoint(310, 10);

    itemPen.setWidth(7);
    itemPen.setColor(Qt::white);

    painter.setPen(itemPen);
    painter.drawPolygon(item);

    QPolygon item2;
    QPen itemPen2;

    item2 << QPoint(width() - 150, 170) << QPoint(width() - 180, 100) << QPoint(width() - 240, 40) << QPoint(width() - 310, 10);

    itemPen2.setWidth(7);
    itemPen2.setColor(Qt::white);

    painter.setPen(itemPen2);
    painter.drawPolygon(item2);
}

void MainWindow::DrawArrows(QPainter &painter) {
    QPolygon sec;
    QPen secArrow;

    sec << QPoint(width() / 2, height() / 2) << QPoint(width() / 2 - 120, height() / 2 - 120);

    secArrow.setWidth(2);
    secArrow.setColor(Qt::red);

    painter.setPen(secArrow);

    painter.drawPolygon(sec);

    QPolygon minute;
    QPen minuteArrow;

    minute << QPoint(width() / 2, height() / 2) << QPoint(width() / 2 + 130, height() / 2 - 130);
    minuteArrow.setWidth(3);
    minuteArrow.setColor(Qt::white);

    painter.setPen(minuteArrow);
    painter.drawPolygon(minute);

    QPolygon hour;
    QPen hourArrow;

    hour << QPoint(width() / 2, height() / 2) << QPoint(width() / 1.5 - 130, height() / 2 + 70);
    hourArrow.setWidth(7);
    hourArrow.setColor(Qt::white);

    painter.setPen(hourArrow);
    painter.drawPolygon(hour);
}

void MainWindow::paintEvent(QPaintEvent*) {
    QPainter painter;

    painter.begin(this);

    painter.drawEllipse(width() / 2 - RADIUS / 2, height() / 2 - RADIUS / 2, RADIUS, RADIUS);
    painter.drawEllipse(width() / 2 - RADIUS / 2 - 20, height() / 2 - RADIUS / 2 - 20, RADIUS + 40, RADIUS + 40);
    painter.drawEllipse(width() / 2 - 10, height() / 2 - 10, 20, 20);

    int count = 12;
    int num = 3;

    double angleUnit = 6.28 / count;
    double scale = RADIUS / 2 - 60;

    for(int i = 0; i < count; i++, num++) {
        if (num == 13) num = 1;

        QLabel *label = new QLabel(this);
        QFont font("Console", 16);

        label->setText(QString::number(num));
        label->setFont(font);

        const QRect pos = QRect(cos(angleUnit * i) * (scale - 40) + width() / 2 - 5.5,
                                sin(angleUnit * i) * (scale - 40) + height() / 2 - 12.5,
                                25, 25);

        label->setGeometry(pos);
        label->show();

        painter.drawRect(cos(angleUnit * i) * scale  + width() / 2 - 7,
                         sin(angleUnit * i) * scale + height() / 2 - 7,
                         14, 14);

        painter.drawLine(cos(angleUnit * i) * scale  + width() / 2,
                         sin(angleUnit * i) * scale + height() / 2,
                         cos(angleUnit * i) * (scale + 60)  + width() / 2,
                         sin(angleUnit * i) * (scale + 60) + height() / 2);
    }

    angleUnit = 6.28 / 60;
    for(int del = 1; del <= 60; del++) {
        painter.drawLine(cos(angleUnit * del) * (scale + 35)  + width() / 2 ,
                         sin(angleUnit * del) * (scale + 35) + height() / 2,
                         cos(angleUnit * del) * (scale + 60)  + width() / 2,
                         sin(angleUnit * del) * (scale + 60) + height() / 2);
    }

    DrawSticks(painter);
    DrawArrows(painter);
    DrawItems(painter);

    painter.end();
}
