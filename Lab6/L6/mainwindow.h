#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>

#include "fish.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Exit_clicked();

    void on_Start_clicked();

    void on_Stop_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Fish *fish;
    QTimer *timer;

    const double extremum;

};
#endif // MAINWINDOW_H
