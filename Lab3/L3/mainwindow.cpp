#include <QModelIndex>
#include <QDataStream>
#include <QVariant>
#include <QString>
#include <fstream>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QDebug>
#include <QMetaType>
#include <QFile>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), globalPath(""), extreme(0), tempExtreme(0), ROWS(50), COLS(4)
{
    ui->setupUi(this);

    qRegisterMetaTypeStreamOperators<Student::Data>("Student::Data");

    InitTable();
}

MainWindow::~MainWindow()
{
    delete[] students;

    delete model;
    delete ui;
}

void MainWindow::InitTable() {
    const QString PATH = "/home/prefect/Code/C++/Tasks/Lab3/L3/DataBin.bin";
    globalPath = PATH;

    students = new Student::Data[extreme];
    model = new QStandardItemModel(ROWS, COLS, this);

    model->setHeaderData(0, Qt::Horizontal, "Student ID");
    model->setHeaderData(1, Qt::Horizontal, "Group ID");
    model->setHeaderData(2, Qt::Horizontal, "Surname");
    model->setHeaderData(3, Qt::Horizontal, "Scores");

    int st1Scores[3] = { 1, 2, 3 };
    AddStudent(students, 1, "FE-101", "Ivanov", st1Scores);

    int st2Scores[3] = { 4, 4, 4 };
    AddStudent(students, 2, "FE-101", "Petrov", st2Scores);

    int st3Scores[3] = { 5, 5, 5 };
    AddStudent(students, 3, "GR-201", "Lebedev", st3Scores);

    int st4Scores[3] = { 1, 4, 3 };
    AddStudent(students, 4, "ZX-301", "Kivarov", st4Scores);

    int st5Scores[3] = { 4, 2, 4 };
    AddStudent(students, 5, "JF-401", "Limonov", st5Scores);

    ui->Table->setModel(model);

    ClearFile();

    WriteToFile();   
    WriteToTable();

    GetDataFromFile();

    this->setWindowTitle(globalPath);
}

void MainWindow::WriteToTable() {
    for(int row = 0; row < extreme; row++) {
        QModelIndex indexID = model->index(row, 0);
        QModelIndex indexGroup = model->index(row, 1);
        QModelIndex indexSurname = model->index(row, 2);
        QModelIndex indexScores = model->index(row, 3);

        QString scrs = "";
        for(int i = 0; i < 3; i++) {
            scrs += QString::number(students[row].scores[i]) + " ";
        }

        model->setData(indexID, students[row].ID);
        model->setData(indexGroup, students[row].group);
        model->setData(indexSurname, students[row].surname);
        model->setData(indexScores, scrs);
    }
}



void MainWindow::GetDataFromFile() {
    int newStudentsSize = 0;

    Student::Data* newStudents = new Student::Data[newStudentsSize];
    Student::Data temp;
    QFile file(globalPath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while(!file.atEnd()) {
        QDataStream load(&file);
        load.setVersion(QDataStream::Qt_4_6);
        QVariant theVariant;
        load >> theVariant;

        temp = theVariant.value<Student::Data>();
        AddStudent(newStudents, newStudentsSize, temp.ID, temp.group, temp.surname, temp.scores);
        newStudentsSize++;
    }

    file.close();

    delete[] students;

    students = newStudents;
    extreme = newStudentsSize;
}

QDataStream &operator >> (QDataStream &from, Student::Data &student) {
    from >> student.ID;
    from >> student.group;
    from >> student.surname;

    for(int i = 0; i < 3; i++) {
        from >> student.scores[i];
    }

    return from;
}


QDataStream &operator << (QDataStream &in, const Student::Data &student) {
    in << student.ID;
    in << student.group;
    in << student.surname;

    for(int i = 0; i < 3; i++) {
        in << student.scores[i];
    }

    return in;
}

void MainWindow::WriteToFile() {
    QFile file(globalPath);
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    for(int i = 0; i < extreme; i++) {
        QVariant aVariant;
        aVariant.setValue(students[i]);

        QDataStream save(&file);
        save.setVersion(QDataStream::Qt_4_6);

        save << aVariant;
    }

    file.close();
}

void MainWindow::AddStudent(Student::Data* &toAddStudents, int ID, QString group, QString surname, int scores[3]) {
    Student::Data* temp = new Student::Data[extreme + 1];

    for(int i = 0; i < extreme; i++) {
        temp[i] = toAddStudents[i];
    }

    delete[] toAddStudents;
    toAddStudents = temp;

    toAddStudents[extreme].ID = ID;
    toAddStudents[extreme].group = group;
    toAddStudents[extreme].surname = surname;
    memcpy(toAddStudents[extreme].scores, scores, sizeof(int) * 3);

    extreme++;
}

void MainWindow::AddStudent(Student::Data* &toAddStudents, int size, int ID, QString group, QString surname, int scores[3]) {
    Student::Data* temp = new Student::Data[size + 1];

    for(int i = 0; i < size; i++) {
        temp[i] = toAddStudents[i];
    }

    delete[] toAddStudents;
    toAddStudents = temp;

    toAddStudents[size].ID = ID;
    toAddStudents[size].group = group;
    toAddStudents[size].surname = surname;
    memcpy(toAddStudents[size].scores, scores, sizeof(int) * 3);
}

void MainWindow::ClearFile() {
    ofstream file(globalPath.toStdString(), ios_base::binary);
    file.clear();
    file.close();
}

void MainWindow::on_Create_triggered()
{    
    QString path = QFileDialog::getExistingDirectory();
    if (path == "") return;

    QString filename = QInputDialog::getText(this, "", "Введите имя нового файла");

    path += "/" + filename;
    globalPath = path;

    QFile file(globalPath);

    file.open(QIODevice::WriteOnly);
    file.close();

    auto isSave = QMessageBox::question(this, "", "Сохранить файл?", QMessageBox::Yes, QMessageBox::No);
    if (isSave == QMessageBox::Yes) on_SaveAs_triggered();

    on_Clear_triggered();
    this->setWindowTitle(globalPath);
}


void MainWindow::on_Exit_triggered()
{
    qApp->exit();
}


void MainWindow::on_Clear_triggered()
{
    for(int row = 0; row < ROWS; row++) {
        for(int col = 0; col < COLS; col++) {
            model->clearItemData(model->index(row, col));
        }
    }
}


void MainWindow::on_SaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                QString::fromUtf8("Save File"),
                                QDir::currentPath(),
                                "Bin files (*.bin *.dat *.db);;All files (*.*)");
    if (fileName == "") return;
    globalPath = fileName;

    int changeTableSize = 0;
    Student::Data* changeTable = new Student::Data[changeTableSize];

    try{
        for(int row = 0; row < ROWS; row++) {
            int scores[3];

            QModelIndex indexID = model->index(row, 0);
            QModelIndex indexGroup = model->index(row, 1);
            QModelIndex indexSurname = model->index(row, 2);
            QModelIndex indexScores = model->index(row, 3);

            int ID = model->data(indexID).toInt();
            QString group = model->data(indexGroup).toString();
            QString surname = model->data(indexSurname).toString();
            QStringList strScores = model->data(indexScores).toString().split(' ');

            if (ID == 0 ||
                group == "" ||
                surname == "") continue;

            int k = 0;
            foreach(QString num, strScores) {
                if (num != "") {
                    scores[k++] = num.toInt();
                }
            }

            AddStudent(changeTable, changeTableSize, ID, group, surname, scores);
            changeTableSize++;
        }

    } catch(int) {
        QMessageBox::warning(this, "", "Некорректные данные");
        return;
    }

    delete[] students;

    students = changeTable;
    extreme = changeTableSize;

    ClearFile();
    WriteToFile();
}

void MainWindow::on_Open_triggered()
{
    QString path = QFileDialog::getOpenFileName();
    if (path == "") return;
    globalPath = path;

    auto isSave = QMessageBox::question(this, "", "Save File?", QMessageBox::Yes, QMessageBox::No);
    if (isSave == QMessageBox::Yes) on_SaveAs_triggered();

    on_Clear_triggered();

    GetDataFromFile();
    WriteToTable();

    this->setWindowTitle(globalPath);
}

void MainWindow::on_SurnameSort_triggered()
{
    on_Clear_triggered();

    bool isSort = true;
    while(isSort) {
        isSort = false;

        for(int i = 0; i < extreme - 1; i++) {
            if (students[i].surname[0] > students[i + 1].surname[0]) {
                Student::Data temp = students[i];
                students[i] = students[i + 1];
                students[i + 1] = temp;

                isSort = true;
            }
        }
    }

    WriteToTable();
}


void MainWindow::on_FindByMask_triggered()
{
    QString mask = QInputDialog::getText(this, "", "Enter the mask");
    if (mask == "") return;
    if (!mask.contains('*'))  {
        QMessageBox::warning(this, "", "Некорректно введена маска");
        return;
    }

    int size = 0;
    Student::Data* maskStudents = new Student::Data[size];
    QList<QString> surnames;
    QList<int> indexes;

    for(int row = 0; row < ROWS; row++) {
        int k = 0;
        int scores[3];

        QModelIndex indexID = model->index(row, 0);
        QModelIndex indexGroup = model->index(row, 1);
        QModelIndex indexSurname = model->index(row, 2);
        QModelIndex indexScores = model->index(row, 3);

        int ID = model->data(indexID).toInt();
        QString group = model->data(indexGroup).toString();
        QString surname = model->data(indexSurname).toString();
        QStringList strScores = model->data(indexScores).toString().split(' ');

        foreach(QString num, strScores) {
            if (num != "") {
                scores[k++] = num.toInt();
            }
        }

        if (ID == 0 ||
            group == "" ||
            surname == "" ||
            k != 3) continue;

        surnames.push_back(students[row].surname);
        indexes.push_back(row);
    }

    for(int i = 0; i < surnames.length(); i++) {
        QString surname = surnames[i];

        if (mask.indexOf('*') == 0) {
            QString addon = mask.mid(1, mask.length());
            if (surname.replace(0, surname.length() - addon.length(), '*') == mask) {
                AddStudent(maskStudents, size, students[i].ID, students[i].group, students[i].surname, students[i].scores);
                size++;
            }
        }

        else if (mask.indexOf('*') == mask.length() - 1) {
            QString addon = mask.mid(0, mask.length() - 1);
            if (surname.replace(addon.length(), surname.length(), '*') == mask) {
                AddStudent(maskStudents, size, students[i].ID, students[i].group, students[i].surname, students[i].scores);
                size++;
            }

        }

        else {
            QString addon = surname.mid(mask.indexOf('*'), surname.length());
            QString templMask = mask.mid(mask.indexOf('*'), surname.length());
            if (surname.replace(mask.indexOf('*'), surname.length() - (surname.length() - addon.length())
                                - templMask.length() + 1,'*') == mask ) {
                AddStudent(maskStudents, size, students[i].ID, students[i].group, students[i].surname, students[i].scores);
                size++;
            }
        }
    }

    delete[] students;

    students = maskStudents;
    extreme = size;

    on_Clear_triggered();
    WriteToTable();
}
