#pragma once 

class IProfit {
private:
    virtual void GetSalary() = 0;
    virtual void GetDebt() = 0;
    virtual void GetCredit() = 0;
};