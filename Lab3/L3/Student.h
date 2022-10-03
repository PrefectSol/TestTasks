#pragma once

#ifndef STUDENTS_H
#define STUDENTS_H

#endif // STUDENTS_H

#include <QApplication>

class Student {
public:
    typedef struct {
        int ID;
        QString group;
        QString surname;
        int scores[3];
    } Data;
};

Q_DECLARE_METATYPE(Student::Data);
