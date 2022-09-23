#pragma once

#include "Interfaces/IProfit.h"

class Client : private IProfit{
private:
    int money;
    int profit;
    int spent;

public:
    Client(int money);

    int GetMoney();
    void SetMoney(int newMoney);

    int GetProfit();

    int GetSpent();
    void SetSpent(int newSpent);

    void GetSalary() override;
    void GetDebt() override;
    void GetCredit() override;
};