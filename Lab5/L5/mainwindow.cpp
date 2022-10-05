#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qcustomplot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), graphCount(0)
{
    ui->setupUi(this);

    this->setWindowTitle("Graph View");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CalcGraph1_clicked()
{
    QVector<double> xValues;
    QVector<double> yValues;

    double startX = ui->startX1->text().replace(',', '.').toDouble();
    double endX = ui->endX1->text().replace(',', '.').toDouble();
    double step = ui->step1->text().replace(',', '.').toDouble();

    if (startX == 0 || endX == 0 || step == 0) {
        QMessageBox::warning(this, "", "Некорректные данные");
        return;
    }

    for(double x = startX; x <= endX; x += step) {
        xValues.push_back(x);
        yValues.push_back(sin(2*x));
    }

    double maxX = -999, minX = 999;
    for(int i = 0; i < xValues.size(); i++) {
        if (xValues[i] > maxX) maxX = xValues[i];
        if (xValues[i] < minX) minX = xValues[i];
    }

    double maxY = -999, minY = 999;
    for(int i = 0; i < yValues.size(); i++) {
        if (yValues[i] > maxY) maxY = yValues[i];
        if (yValues[i] < minY) minY = yValues[i];
    }

    ui->Graph->xAxis->setRange(minX, maxX);
    ui->Graph->yAxis->setRange(minY, maxY);

    ui->Graph->addGraph();
    ui->Graph->graph(graphCount++)->setData(xValues, yValues);
    ui->Graph->replot();
}

void MainWindow::on_CalcGraph2_clicked()
{
    double startX = ui->startX2->text().replace(',', '.').toDouble();
    double endX = ui->endX2->text().replace(',', '.').toDouble();
    double step = ui->step2->text().replace(',', '.').toDouble();

    if (startX == 0 || endX == 0 || step == 0) {
        QMessageBox::warning(this, "", "Некорректные данные");
        return;
    }

    for(double x = startX; x <= endX; x += step) {
        xValues.push_back(x);
        yValues.push_back(2 * pow(x, 3) - 4 * pow(x, 2) + x + 8);
    }

    double maxX = -999, minX = 999;
    for(int i = 0; i < xValues.size(); i++) {
        if (xValues[i] > maxX) maxX = xValues[i];
        if (xValues[i] < minX) minX = xValues[i];
    }

    double maxY = -999, minY = 999;
    for(int i = 0; i < yValues.size(); i++) {
        if (yValues[i] > maxY) maxY = yValues[i];
        if (yValues[i] < minY) minY = yValues[i];
    }

    ui->Graph->xAxis->setRange(minX, maxX);
    ui->Graph->yAxis->setRange(minY, maxY);

    ui->Graph->addGraph();
    ui->Graph->graph(graphCount++)->setData(xValues, yValues);
    ui->Graph->replot();
}


void MainWindow::on_GraphReset_clicked()
{
    xValues.clear();
    yValues.clear();

    while(graphCount >= 0) {
        ui->Graph->removeGraph(graphCount--);
    }

    graphCount = 0;
    ui->Graph->replot();
}
