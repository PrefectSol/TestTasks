#pragma once

class IPrice {
private:
    virtual void ToPay(Client &client) = 0;
};