#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_CalcGraph1_clicked();

    void on_CalcGraph2_clicked();

    void on_GraphReset_clicked();

private:
    Ui::MainWindow *ui;

    QVector<double> xValues;

    QVector<double> yValues;

    int graphCount;

};
#endif // MAINWINDOW_H
