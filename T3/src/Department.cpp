#include "Headings.h"
#include "Department.h"
#include "Prisoner.h"

Department::Department() : extreme(0), profit(0), released(0) {
    prisoners = new Prisoner::Data[extreme];
    releasedPrisoners = new Prisoner::Data[released];
};

Department::~Department() {
    delete[] releasedPrisoners;
    delete[] prisoners;
};

void Department::AddPrisoner(Prisoner::Data &p) {
    Prisoner::Data* temp = new Prisoner::Data[extreme + 1];

    for(int i = 0; i < extreme; i++) {
        temp[i] = prisoners[i];
    }

    delete[] prisoners;
    prisoners = temp;

    prisoners[extreme].article = p.article;
    prisoners[extreme].fine = p.fine;
    prisoners[extreme].fullName = p.fullName;
    prisoners[extreme].time = p.time;
    prisoners[extreme].id = p.id;

    extreme++;
}

void Department::ReleasePrisoner(Prisoner::Data &p) {
    Prisoner::Data* temp = new Prisoner::Data[released + 1];

    for(int i = 0; i < released; i++) {
        if (releasedPrisoners[i].id != p.id) continue;
        temp[i] = releasedPrisoners[i];
    }

    delete[] releasedPrisoners;
    releasedPrisoners = temp;

    releasedPrisoners[released].article = p.article;
    releasedPrisoners[released].fine = p.fine;
    releasedPrisoners[released].fullName = p.fullName;
    releasedPrisoners[released].time = p.time;
    releasedPrisoners[released].id = p.id;

    temp = new Prisoner::Data[extreme - 1];

    int k = 0;
    for(int i = 0; i < extreme; i++, k++) {
        if (p.id == prisoners[i].id){
            k--;
            continue;
        }

        temp[k] = prisoners[i];
    }

    delete[] prisoners;
    prisoners = temp;

    extreme--;
    released++;
}

void Department::ShowAllReleased() {
    cout << "Released prisoners for all time:" << endl;
    for(int i = 0; i < released; i++) {
        cout << "Name: " << releasedPrisoners[i].fullName << "\tArticle: " << releasedPrisoners[i].article << "\t";
        cout << "Time: " << releasedPrisoners[i].time << "\tFine: " << releasedPrisoners[i].fine << "\tID: " << releasedPrisoners[i].id << endl;
    }

    cout << endl;
}

void Department::ShowDepartInfo() {
    cout << "All current prisoners:" << endl;
    for(int i = 0; i < extreme; i++) {
        cout << "Name: " << prisoners[i].fullName << "\tArticle: " << prisoners[i].article << "\t";
        cout << "Time: " << prisoners[i].time << "\tFine: " << prisoners[i].fine << "\tID: " << prisoners[i].id << endl;
    }

    cout << endl;
}

void Department::ShowProfit() {
    for(int i = 0; i < extreme; i++) {
        profit += prisoners[i].fine;
    }

    printf("Profit for the all time: %d\n", profit);
    cout << endl;
}