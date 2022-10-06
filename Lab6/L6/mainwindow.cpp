#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <cmath>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), extremum(9.43)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));

    QPen sinStyle;
    sinStyle.setColor(Qt::white);
    sinStyle.setWidth(3);

    QPolygon func;
    for(double x = 0; x < extremum; x += 0.0001) {
        func << QPoint(x * 110, (sin(x) * 200));
    }

    scene->addPolygon(func, sinStyle);

    fish = new Fish();
    scene->addItem(fish);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Exit_clicked()
{
    qApp->exit();
}


void MainWindow::on_Start_clicked()
{
    if (ui->Speed->text().replace(',', ".").toDouble() == 0) {
        QMessageBox::warning(this, "", "Некорректные данные");
        return;
    }

    fish->SetSpeed(ui->Speed->text().replace(',', ".").toDouble());
    timer->start(10);
}


void MainWindow::on_Stop_clicked()
{
    timer->stop();
}

