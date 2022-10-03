#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

#include "Student.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, private Student
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void InitTable();

    void WriteToFile();

    void WriteToTable();

    void GetDataFromFile();

    void ClearFile();

    void AddStudent(Student::Data* &toAddStudents, int ID, QString group, QString surname, int scores[3]);

    void AddStudent(Student::Data* &toAddStudents, int size, int ID, QString group, QString surname, int scores[3]);

    void on_Create_triggered();

    void on_Exit_triggered();

    void on_Clear_triggered();

    void on_SaveAs_triggered();

    void on_Open_triggered();

    void on_SurnameSort_triggered();

    void on_FindByMask_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    Student::Data* students;


    QString globalPath;
    int extreme;
    int tempExtreme;

    const int ROWS;
    const int COLS;
};
#endif // MAINWINDOW_H
