#include "Headings.h"
#include "Client.h"

#include "Pricing/Prices.cpp"
#include "Pricing/Profits.cpp"

#include "Services/Coloring.cpp"
#include "Services/Haircut.cpp"
#include "Services/Perm.cpp"
#include "Services/Shaving.cpp"

using namespace std;

void ShowInterface() {
    cout << "===========================================" << endl;
    printf("To exit 'any symbol'\n|Select service 1-4| \t |Select earnings 5-7|\n\n");
    printf("1.Coloring (%d) \t 5.Get salary (%d)\n", Prices::coloring, Profit::salary);
    printf("2.Haircut (%d) \t 6.Get debt (%d)\n", Prices::haircut, Profit::debt);
    printf("3.Perm (%d) \t\t 7.Get credit (%d)\n", Prices::perm, Profit::credit);
    printf("4.Shaving (%d) \t 8.View the balance\n", Prices::shaving);
    cout << "===========================================" << endl;
}

int main() {
    const int clientMoney = 10000;

    Client client(clientMoney);

    int input;
    bool isExit = false;

    while(!isExit) {
        ShowInterface();

        cin >> input;
        switch (input) {
        case 1:
            Coloring(client, Prices::coloring);
            break;

        case 2:
            Haircut(client, Prices::haircut);
            break;

        case 3:
            Perm(client, Prices::perm);
            break;

        case 4:
            Shaving(client, Prices::shaving);
            break;

        case 5:
            client.GetSalary();
            break;

        case 6:
            client.GetDebt();
            break;

        case 7:
            client.GetCredit();
            break;

        case 8:
            printf("|Money balance: %d| \t |Profit balance: %d| \t |Spent balance: %d|\n",
                client.GetMoney(),
                client.GetProfit(),
                client.GetSpent());
            break;
        
        default:
            cout << setw(20) << "EXIT" << endl;
            isExit = true;
            break;
        }

        cout << endl << endl << endl;
    }

    return 0;
}