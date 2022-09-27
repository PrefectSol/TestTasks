#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "parser.h"
#include "QDebug"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rectangleMethod->setChecked(true);
    ui->func->setText("(x^2 * cos(x))/ (1 + x) ^ 3");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
    QApplication::closeAllWindows();
}

QString MainWindow::CheckRB() {
    QString result = "rectangle";
    if (ui->trapezoidMethod->isChecked()) result = "trapezoid";
    else if (ui->parabolaMethod->isChecked()) result = "parabola";

    return result;
}

double ParabolaIntegral(double a, double b, int n, char *func){
    TParser parser;

    parser.Compile(func);
    parser.Evaluate(a);

    double S = abs(parser.GetResult());
    double segment = (b - a) / n;
    double x;

    for(int i = 1; i <= n / 2; i++) {
        x = a +2 * i * segment;

        parser.Evaluate(x);
        double a1 = abs(parser.GetResult());

        parser.Evaluate(x - segment);
        double a2 = abs(parser.GetResult());

        S += 2 * a1 + 4 * a2;
    }

    parser.Evaluate(b);
    double lValue = abs(parser.GetResult());

    S = (S - lValue) * segment / 3;

    return S;
}


double TrapezoidIntegral(double a, double b, int n, char *func){
    TParser parser;

    double segment = (b - a) / n;
    double x = a;
    double S = 0;

    parser.Compile(func);
    for(int i = 0; i <= n; i++) {
        parser.Evaluate(x);
        double sideA = abs(parser.GetResult());

        parser.Evaluate(x + segment);
        double sideB = abs(parser.GetResult());

        S += (sideA + sideB) * segment / 2.0;
        x += segment;
    }

    return S;
}

double RectangleIntegral(double a, double b, int n, char *func) {
    TParser parser;

    double segment = (b - a) / n;
    double x = a + segment / 2.0;
    double S = 0;
    double dif = 0;
    parser.Compile(func);
    for(int i = 0; i <= n; i++) {
        parser.Evaluate(x);

        S += abs(parser.GetResult() * segment);
        x += segment;
        dif -= segment;
    }

    return S;
}

double CalculateWithEps(double eps, double(*func)(double a, double b, int n, char *f),
                        double a, double b, int n, char *f) {
    double s0, sn;
    int n0, nn = n;
    int count = 0;
    do {
        if (count++ > 10000) return s0;
        n0 = nn++;
        s0 = sn;
        sn = func(a, b, nn, f);

    } while(abs(sn - s0) >= eps);

    return s0;
}

void MainWindow::on_CalculateButton_clicked()
{
    QString inputAcc, textAcc, textResult;

    inputAcc = ui->accuracy->text();
    double acc = inputAcc.toDouble();
    textAcc = QString::number(acc);

    int parts = ui->parts->text().toInt();
    double upLimit = ui->upLimit->text().toDouble();
    double downLimit = ui->downLimit->text().toDouble();

    QString rb = CheckRB();
    TParser parser;

    string str = ui->func->text().toStdString();
    string fnc = "";

    for(int i = 0; i < str.length(); i++) {
        if (str[i] == 'x') fnc += "x[0]";
        else fnc += str[i];
    }
    char *f = const_cast<char*>(fnc.c_str());

    if (ui->isAcc->isChecked()) {
        if (rb == "rectangle") textResult = QString::number(CalculateWithEps(acc, &RectangleIntegral,
                                                                             downLimit, upLimit, parts, f));
        else if (rb == "trapezoid") textResult = QString::number(CalculateWithEps(acc, &TrapezoidIntegral,
                                                                                  downLimit, upLimit, parts, f));
        else  textResult = QString::number(CalculateWithEps(acc, &ParabolaIntegral,
                                                            downLimit, upLimit, parts, f));
    }

    else {
        if (rb == "rectangle") textResult = QString::number(RectangleIntegral(downLimit, upLimit, parts, f));
        else if (rb == "trapezoid") textResult = QString::number(TrapezoidIntegral(downLimit, upLimit, parts, f));
        else  textResult = QString::number(ParabolaIntegral(downLimit, upLimit, parts, f));
    }


    if ((ui->isAcc->isChecked() && inputAcc != "0" && textAcc == "0") ||
            ((QString::number(parts) == "0" && ui->parts->text() != "0") ||
            (QString::number(upLimit) == "0" && ui->upLimit->text() != "0") ||
            (QString::number(downLimit) == "0" && ui->downLimit->text() != "0"))) textResult = "ERROR";

    ui->result->setText("Результат: " + textResult);
}
