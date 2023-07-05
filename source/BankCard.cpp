#include "../include/BankCard.hpp"
#include <sstream>

BankCard::BankCard(std::string bank_card)
{
    std::istringstream ss(bank_card);
    std::string card_number, cvv;
    ss >> card_number >> cvv;
    CardNumber = stoi(card_number);
    CVV = stoi(cvv);
}
