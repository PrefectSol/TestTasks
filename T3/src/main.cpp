#include "Headings.h"
#include "Prisoner.h"
#include "Department.h"

using namespace std;

int main() {
    unsigned int ID = 0;

    Prisoner::Data prisoner1;

    prisoner1.article = "131.1";
    prisoner1.fine = 1000;
    prisoner1.fullName = "Ivan Ivanovich";
    prisoner1.time = 100;
    prisoner1.id = ++ID;

    Prisoner::Data prisoner2;

    prisoner2.article = "101.5";
    prisoner2.fine = 1500;
    prisoner2.fullName = "Petr Petrovich";
    prisoner2.time = 15;
    prisoner2.id = ++ID;

    Prisoner::Data prisoner3;

    prisoner3.article = "157.2";
    prisoner3.fine = 3600;
    prisoner3.fullName = "Dmitry Haske I";
    prisoner3.time = 90;
    prisoner3.id = ++ID;

    Department dep;
    dep.AddPrisoner(prisoner1);
    dep.AddPrisoner(prisoner2);
    dep.AddPrisoner(prisoner3);

    dep.ShowDepartInfo();
    dep.ReleasePrisoner(prisoner2);
    dep.ShowDepartInfo();
    dep.ShowAllReleased();
    dep.ShowProfit();
}