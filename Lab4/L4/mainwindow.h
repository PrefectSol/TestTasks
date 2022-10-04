#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    const unsigned int RADIUS = 500;

protected:
    void paintEvent(QPaintEvent*) override;

private slots:
    void DrawArrows(QPainter &painter);

    void DrawItems(QPainter &painter);

    void DrawSticks(QPainter &painter);
};

#endif // MAINWINDOW_H
