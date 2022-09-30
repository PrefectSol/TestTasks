#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QVector>
#include <QFileDialog>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitEditor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitEditor() {
    const QString path = "/home/prefect/Code/C++/Tasks/Lab2/L2/Data.txt";
    globalPath = path;

    QVector<QByteArray> students {
        "  01  " + groups[1] + "  Иванов        3  4  2 \n",
        "  02  " + groups[2] + "  Петров        1  2  3 \n",
        "  03  " + groups[3] + "  Лебедев        3  1  5 \n",
        "  04  " + groups[4] + "  Гиляев        5  5  5 \n",
        "  05  " + groups[5] + "  Камутаев        1  1  1 \n",
        "  06  " + groups[6] + "  Валахиев        2  3  1 \n",
        "  07  " + groups[7] + "  Кринадов        4  4  5 \n",
        "  08  " + groups[7] + "  Ханатов        4  4  4 \n",
        "  09  " + groups[7] + "  Пунатов        2  2  2 \n"
        "  10  " + groups[7] + "  Шикиров        1  2  2 \n"
    };

    QFile file(path);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(this, "ERROR", "Изначальный файл не существует");
        return;
    }

    if(file.readAll() == "") {
        for(int i = 0; i < students.size(); i++) {
            file.write(students[i]);
        }
    }

    file.close();

    ShowFile();
}

void MainWindow::ShowFile() {
    QFile file(globalPath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString data = file.readAll();
    ui->TextEditor->document()->setPlainText(data);
    this->setWindowTitle(file.fileName());

    file.close();
}

void MainWindow::on_ClearFile_triggered()
{
    QFile file(globalPath);
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    while(!file.atEnd()) {
        file.write("");
    }

    file.close();

    ShowFile();
}


void MainWindow::on_Exit_triggered()
{
    auto input = QMessageBox::question(this, "", "Сохранить файл?", QMessageBox::Yes, QMessageBox::No);
    if (input == QMessageBox::Yes) on_SaveFile_triggered();

    qApp->exit();
}


void MainWindow::on_CreateFile_triggered()
{
    QString path = QFileDialog::getExistingDirectory();
    if (path == "") return;

    QString filename = QInputDialog::getText(this, "", "Введите имя нового файла");

    path += "/" + filename;
    auto input = QMessageBox::question(this, "", "Сохранить файл?", QMessageBox::Yes, QMessageBox::No);
    if (input == QMessageBox::Yes) on_SaveFile_triggered();

    globalPath = path;
    QFile file(globalPath);

    file.open(QIODevice::WriteOnly);
    file.close();

    ShowFile();
}


void MainWindow::on_OpenFile_triggered()
{
    QString path = QFileDialog::getOpenFileName();
    if (path == "") return;

    auto input = QMessageBox::question(this, "", "Сохранить файл?", QMessageBox::Yes, QMessageBox::No);
    if (input == QMessageBox::Yes) on_SaveFile_triggered();

    if (path == "") return;
    globalPath = path;

    ShowFile();
}


void MainWindow::on_SaveFile_triggered()
{
    QString data = ui->TextEditor->toPlainText();

    QFile file(globalPath);
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    while(!file.atEnd()) {
        file.write("");
    }

    QByteArray btData = data.toUtf8();
    file.write(btData);

    file.close();
}

QVector<QString> Sort(QVector<QString> text, QVector<double> avrs) {
    bool isSort = true;
    while(isSort) {
        isSort = false;

        for(int i = 0; i < text.size() - 1; i++) {
            double a = avrs[i];
            double b = avrs[i + 1];

            if (a < b) {
                QString strTemp = text[i];
                double digitTemp = avrs[i];

                text[i] = text[i + 1];
                text[i + 1] = strTemp;

                avrs[i] = avrs[i + 1];
                avrs[i + 1] = digitTemp;

                isSort = true;
            }
        }
    }

    return text;
}

void MainWindow::RewriteFile(QString data) {
    QFile file(globalPath);
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    while(!file.atEnd()) {
        file.write("");
    }

    QByteArray btData = data.toUtf8();
    file.write(btData);

    file.close();
}

bool MainWindow::isFileCorrect() {
    QFile file(globalPath);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString data = file.readLine();
    auto list = data.split(' ');

    file.close();

    for(int i = 0; i < list.length(); i++) {
        if (list[i] == ""){
            list.removeAt(i);
            i = 0;
        }
    }

    return (list.length() == 8);
}

void MainWindow::on_Sorting_triggered()
{
    on_SaveFile_triggered();

    QVector<QString> scores;
    QVector<QString> text;
    QVector<double> avrs;

    QFile file(globalPath);

    if(!isFileCorrect()) {
        QMessageBox::warning(this, "Ошибка", "Некорректные данные");
        return;
    }

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while(!file.atEnd()) {
        QString str(file.readLine());

        scores.push_back(str.mid(str.length() - 9, 7));
    }

    file.close();
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while(!file.atEnd()) {
        double avr;
        for(int i = 0; i < scores.size(); i++) {
            QString score = scores[i];
            int sum = 0;

            for(int j = 0; j < score.length(); j++) {
                if (score[j] != " ") {
                    sum += (score[j] + "").toInt();
                }
            }

            avr = sum / 3.0;

            QString str = file.readLine();
            QString newStr = str.mid(0, str.length() - 2);

            text.push_back(newStr + "      " + QString::number(avr) + " \n");
            avrs.push_back(avr);
        }
    }

    file.close();

    text = Sort(text, avrs);

    QString data = "";
    for(int i = 0; i < text.size(); i++) {
        data += text[i];
    }

    on_ClearFile_triggered();
    RewriteFile(data);
    ShowFile();
}

bool MainWindow::IsTwoMan(QString groupMan) {
    auto list = groupMan.split(' ');

    for(int i = 0; i < list.length(); i++) {
        if (list[i] == ""){
            list.removeAt(i);
            i = 0;
        }
    }

    return (list[4].toInt() <= 3 || list[5].toInt() <= 3 || list[6].toInt() <= 3);
}

void MainWindow::on_FindTwoMan_triggered()
{
    QVector<QString> scores;
    QVector<QString> groupMans;

    QString group = QInputDialog::getText(this, "", "Группа");
    if(group == "") return;

    bool isHas = false;
    for(int i = 0; i < groups.length(); i++) {
        if (group == groups[i]) isHas = true;
    }

    if (!isHas) {
        QMessageBox::warning(this, "Ошибка", "Такой группы не существует");
        return;
    }

    QFile file(globalPath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString data = "";
    while(!file.atEnd()) {
        QString str(file.readLine());
        data += str;

        if (group == str.mid(6, 6)) groupMans.push_back(str);
    }

    file.close();

    data += "========= Двоечники в группе " + group + ": =========\n";

    for(int i = 0; i < groupMans.size(); i++) {
        if (IsTwoMan(groupMans[i])) {
            data += groupMans[i];
        }
    }

    RewriteFile(data);
    ShowFile();
}
