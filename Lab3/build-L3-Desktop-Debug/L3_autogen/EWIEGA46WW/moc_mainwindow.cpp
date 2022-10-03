/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../L3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "InitTable"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "WriteToFile"
QT_MOC_LITERAL(4, 34, 12), // "WriteToTable"
QT_MOC_LITERAL(5, 47, 15), // "GetDataFromFile"
QT_MOC_LITERAL(6, 63, 9), // "ClearFile"
QT_MOC_LITERAL(7, 73, 10), // "AddStudent"
QT_MOC_LITERAL(8, 84, 15), // "Student::Data*&"
QT_MOC_LITERAL(9, 100, 13), // "toAddStudents"
QT_MOC_LITERAL(10, 114, 2), // "ID"
QT_MOC_LITERAL(11, 117, 5), // "group"
QT_MOC_LITERAL(12, 123, 7), // "surname"
QT_MOC_LITERAL(13, 131, 6), // "int[3]"
QT_MOC_LITERAL(14, 138, 6), // "scores"
QT_MOC_LITERAL(15, 145, 4), // "size"
QT_MOC_LITERAL(16, 150, 19), // "on_Create_triggered"
QT_MOC_LITERAL(17, 170, 17), // "on_Exit_triggered"
QT_MOC_LITERAL(18, 188, 18), // "on_Clear_triggered"
QT_MOC_LITERAL(19, 207, 19), // "on_SaveAs_triggered"
QT_MOC_LITERAL(20, 227, 17), // "on_Open_triggered"
QT_MOC_LITERAL(21, 245, 24), // "on_SurnameSort_triggered"
QT_MOC_LITERAL(22, 270, 23) // "on_FindByMask_triggered"

    },
    "MainWindow\0InitTable\0\0WriteToFile\0"
    "WriteToTable\0GetDataFromFile\0ClearFile\0"
    "AddStudent\0Student::Data*&\0toAddStudents\0"
    "ID\0group\0surname\0int[3]\0scores\0size\0"
    "on_Create_triggered\0on_Exit_triggered\0"
    "on_Clear_triggered\0on_SaveAs_triggered\0"
    "on_Open_triggered\0on_SurnameSort_triggered\0"
    "on_FindByMask_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    5,   89,    2, 0x08 /* Private */,
       7,    6,  100,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,    9,   10,   11,   12,   14,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,    9,   15,   10,   11,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InitTable(); break;
        case 1: _t->WriteToFile(); break;
        case 2: _t->WriteToTable(); break;
        case 3: _t->GetDataFromFile(); break;
        case 4: _t->ClearFile(); break;
        case 5: _t->AddStudent((*reinterpret_cast< Student::Data*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)[3]>(_a[5]))); break;
        case 6: _t->AddStudent((*reinterpret_cast< Student::Data*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)[3]>(_a[6]))); break;
        case 7: _t->on_Create_triggered(); break;
        case 8: _t->on_Exit_triggered(); break;
        case 9: _t->on_Clear_triggered(); break;
        case 10: _t->on_SaveAs_triggered(); break;
        case 11: _t->on_Open_triggered(); break;
        case 12: _t->on_SurnameSort_triggered(); break;
        case 13: _t->on_FindByMask_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
