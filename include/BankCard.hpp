#ifndef BANKCARD_HPP
#define BANKCARD_HPP 

#include <iostream>

class BankCard{
private:
    int CardNumber;
    int CVV;
public:
    BankCard(std::string bank_card);
    bool CardExists();
};

#endif