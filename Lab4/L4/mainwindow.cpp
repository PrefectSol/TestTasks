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
    }

    painter.drawEllipse(width() / 2 - RADIUS / 2, height() / 2 - RADIUS / 2, RADIUS, RADIUS);
    painter.drawEllipse(width() / 2 - RADIUS / 2 - 20, height() / 2 - RADIUS / 2 - 20, RADIUS + 40, RADIUS + 40);
    painter.drawEllipse(width() / 2 - 10, height() / 2 - 10, 20, 20);

    QList<int> x0Values;
    QList<int> y0Values;
    QList<int> x1Values;
    QList<int> y1Values;

    for(double angle = 0; angle < 360; angle += 30) {
        double rad = angle / 180.0 * M_PI;
        int x0 = RADIUS / 2;
        int y0 = RADIUS / 2;

        int x1 = RADIUS / 2 * (cos(rad) + 1);
        int y1 = RADIUS / 2 * (sin(rad) + 1);

        x0Values.push_back(x0 + width() / 2 - RADIUS / 2);
        y0Values.push_back(y0 + height() / 2 - RADIUS / 2);
        x1Values.push_back(x1 + width() / 2 - RADIUS / 2);
        y1Values.push_back(y1 + height() / 2 - RADIUS / 2);
    }

    painter.drawLine(x0Values[0] + 200, y0Values[0], x1Values[0], y1Values[0]);
    painter.drawLine(x0Values[3], y0Values[3] + 200, x1Values[3], y1Values[3]);
    painter.drawLine(x0Values[6] - 200, y0Values[6], x1Values[6], y1Values[6]);
    painter.drawLine(x0Values[9], y0Values[9] - 200, x1Values[9], y1Values[9]);

    DrawSticks(painter);
    DrawArrows(painter);
    DrawItems(painter);

    painter.end();
}
