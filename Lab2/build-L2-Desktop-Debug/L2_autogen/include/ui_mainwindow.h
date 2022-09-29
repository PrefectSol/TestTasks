/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *CreateFile;
    QAction *OpenFile;
    QAction *SaveFile;
    QAction *Sorting;
    QAction *FindTwoMan;
    QAction *ClearFile;
    QAction *Exit;
    QWidget *centralwidget;
    QPlainTextEdit *TextEditor;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        CreateFile = new QAction(MainWindow);
        CreateFile->setObjectName(QString::fromUtf8("CreateFile"));
        OpenFile = new QAction(MainWindow);
        OpenFile->setObjectName(QString::fromUtf8("OpenFile"));
        SaveFile = new QAction(MainWindow);
        SaveFile->setObjectName(QString::fromUtf8("SaveFile"));
        Sorting = new QAction(MainWindow);
        Sorting->setObjectName(QString::fromUtf8("Sorting"));
        FindTwoMan = new QAction(MainWindow);
        FindTwoMan->setObjectName(QString::fromUtf8("FindTwoMan"));
        ClearFile = new QAction(MainWindow);
        ClearFile->setObjectName(QString::fromUtf8("ClearFile"));
        Exit = new QAction(MainWindow);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TextEditor = new QPlainTextEdit(centralwidget);
        TextEditor->setObjectName(QString::fromUtf8("TextEditor"));
        TextEditor->setGeometry(QRect(10, 10, 781, 511));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setFont(font);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(CreateFile);
        menu->addAction(OpenFile);
        menu->addAction(SaveFile);
        menu->addAction(Sorting);
        menu->addAction(FindTwoMan);
        menu->addAction(ClearFile);
        menu->addAction(Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CreateFile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        OpenFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        SaveFile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        Sorting->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \321\201\321\200. \320\261\320\260\320\273\320\273\321\203", nullptr));
        FindTwoMan->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\264\320\262\320\276\320\265\321\207\320\275\320\270\320\272\320\276\320\262", nullptr));
        ClearFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
