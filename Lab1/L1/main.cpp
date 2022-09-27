#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Calculation of the integrand function");
    w.show();

    return a.exec();
}
