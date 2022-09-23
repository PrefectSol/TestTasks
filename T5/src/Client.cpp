#include "Client.h"
#include "Headings.h"
#include "Pricing/Profits.cpp"

Client::Client(int money) : money(money), profit(0), spent(0) {};

int Client::GetMoney() { return money; }

void Client::SetMoney(int newMoney) { money = newMoney; }

int Client::GetProfit() { return profit; }

int Client::GetSpent() { return spent; }

void Client::SetSpent(int newSpent) { spent = newSpent; }

void Client::GetSalary() {
    money += Profit::salary;
    profit += Profit::salary;

    printf("You get a salary (+%d)\n", Profit::salary);
}

void Client::GetDebt() {
    money += Profit::debt;
    profit += Profit::debt;

    printf("You get a debt (+%d)\n", Profit::debt);
}

void Client::GetCredit() {
    money += Profit::credit;
    profit += Profit::credit;

    printf("You get a credit (+%d)\n", Profit::credit);
}