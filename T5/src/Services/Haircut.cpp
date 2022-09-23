#include "Headings.h"
#include "Interfaces/IPrice.h"
#include "Client.h"

using namespace std;

class Haircut : private IPrice{
private:
    const int price;

    bool HasMoney(Client &client) {
        return (client.GetMoney() >= price);
    }

    void ToPay(Client &client) override {
        client.SetMoney(client.GetMoney() - price);
        client.SetSpent(client.GetSpent() + price);
        
        printf("Haircut paid for. You spent %d\n", price);
    }

public:
    Haircut(Client &client, const int price) : price(price) {
        if (HasMoney(client)) {
            ToPay(client);
        }
        else {
            printf("Not enough money\n");
        }
    };

    virtual ~Haircut () {};
};