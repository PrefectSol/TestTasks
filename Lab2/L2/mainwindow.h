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
    void InitEditor();

    void ShowFile();

    void RewriteFile(QString data);

    bool isFileCorrect();

    bool IsTwoMan(QString groupMan);

    void on_ClearFile_triggered();

    void on_Exit_triggered();

    void on_CreateFile_triggered();

    void on_OpenFile_triggered();

    void on_SaveFile_triggered();

    void on_Sorting_triggered();

    void on_FindTwoMan_triggered();

private:
    Ui::MainWindow *ui;
    QString globalPath;

    const QVector<QByteArray> groups {
        "АБ-101",
        "ВН-201",
        "РА-301",
        "ДБ-201",
        "РП-301",
        "УЦ-401",
        "ПУ-401",
        "ПО-101",
    };
};
#endif // MAINWINDOW_H
