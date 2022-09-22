#pragma once

#include "Prisoner.h"

class Department {
private:   
    int profit;
    int extreme;
    int released;

    Prisoner::Data* prisoners; 
    Prisoner::Data* releasedPrisoners; 

public:
    Department();
    ~Department();

    void AddPrisoner(Prisoner::Data &p);
    void ReleasePrisoner(Prisoner::Data &p);
    void ShowDepartInfo();
    void ShowAllReleased();
    void ShowProfit();
};