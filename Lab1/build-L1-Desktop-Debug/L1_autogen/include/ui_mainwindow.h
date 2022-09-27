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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ExitButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QPushButton *CalculateButton;
    QSpacerItem *verticalSpacer_5;
    QLabel *result;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *func;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLineEdit *upLimit;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *downLimit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *parts;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *accuracy;
    QCheckBox *isAcc;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rectangleMethod;
    QRadioButton *trapezoidMethod;
    QRadioButton *parabolaMethod;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 541);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(10, 420, 141, 61));
        QFont font;
        font.setPointSize(16);
        ExitButton->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 4, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        CalculateButton = new QPushButton(layoutWidget);
        CalculateButton->setObjectName(QString::fromUtf8("CalculateButton"));
        CalculateButton->setFont(font);

        verticalLayout_2->addWidget(CalculateButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        result = new QLabel(layoutWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setFont(font);

        verticalLayout_2->addWidget(result);


        gridLayout->addLayout(verticalLayout_2, 3, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        func = new QLineEdit(layoutWidget);
        func->setObjectName(QString::fromUtf8("func"));
        func->setFont(font);

        verticalLayout->addWidget(func);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        upLimit = new QLineEdit(layoutWidget);
        upLimit->setObjectName(QString::fromUtf8("upLimit"));
        upLimit->setFont(font);

        verticalLayout->addWidget(upLimit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        downLimit = new QLineEdit(layoutWidget);
        downLimit->setObjectName(QString::fromUtf8("downLimit"));
        downLimit->setFont(font);

        verticalLayout->addWidget(downLimit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        parts = new QLineEdit(layoutWidget);
        parts->setObjectName(QString::fromUtf8("parts"));
        parts->setFont(font);

        verticalLayout->addWidget(parts);


        gridLayout->addLayout(verticalLayout, 0, 0, 4, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        accuracy = new QLineEdit(layoutWidget);
        accuracy->setObjectName(QString::fromUtf8("accuracy"));
        accuracy->setFont(font);

        horizontalLayout->addWidget(accuracy);

        isAcc = new QCheckBox(layoutWidget);
        isAcc->setObjectName(QString::fromUtf8("isAcc"));
        isAcc->setFont(font);

        horizontalLayout->addWidget(isAcc);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rectangleMethod = new QRadioButton(groupBox);
        rectangleMethod->setObjectName(QString::fromUtf8("rectangleMethod"));

        verticalLayout_4->addWidget(rectangleMethod);

        trapezoidMethod = new QRadioButton(groupBox);
        trapezoidMethod->setObjectName(QString::fromUtf8("trapezoidMethod"));

        verticalLayout_4->addWidget(trapezoidMethod);

        parabolaMethod = new QRadioButton(groupBox);
        parabolaMethod->setObjectName(QString::fromUtf8("parabolaMethod"));

        verticalLayout_4->addWidget(parabolaMethod);


        verticalLayout_5->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout_5, 0, 2, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 832, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        CalculateButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\277\320\276\320\264\321\213\320\275\321\202\320\265\320\263\321\200\320\260\320\273\321\214\320\275\321\203\321\216 \321\204\321\203\320\275\320\272\321\206\320\270\321\216", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202: ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\205\320\275\320\270\320\271 \320\277\321\200\320\265\320\264\320\265\320\273 \320\270\320\275\321\202\320\265\320\263\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\270\320\266\320\275\320\270\320\271  \320\277\321\200\320\265\320\264\320\265\320\273 \320\270\320\275\321\202\320\265\320\263\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\260\320\267\320\261\320\270\320\265\320\275\320\270\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214", nullptr));
        isAcc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \321\201 \321\202\320\276\321\207\320\275\320\276\321\201\321\202\321\214\321\216", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217    ", nullptr));
        rectangleMethod->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273 \320\274\320\265\321\202\320\276\320\264\320\276\320\274 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\276\320\262", nullptr));
        trapezoidMethod->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273 \320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\271", nullptr));
        parabolaMethod->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273 \320\274\320\265\321\202\320\276\320\264\320\276\320\274 \320\277\320\260\321\200\320\260\320\261\320\276\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
