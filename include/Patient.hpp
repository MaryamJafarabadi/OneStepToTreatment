#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <iostream>
#include <vector>
#include "Document.hpp"
#include "Bill.hpp"
#include "BankCard.hpp"
#include "Request.hpp"
#include "Supporter.hpp"

class Patient{
private:
    std::string name;
    std::string password;
    std::string email;
    std::string phone_number;///
    bool status;////
    Bill* bill;
    Document* document = NULL;
    BankCard* bank_card = NULL;
    Supporter* supporter = NULL;
    std::vector <Request*> request_list;

public:
    Patient(std::string name_, std::string password_, std::string email_, std::string phone_number_, Document* document_, BankCard* bank_card_);
    bool checkData(std::string email_, std::string phone_number_);////
    bool checkPass(std::string password_, std::string email);///
    bool check_bank_card_exist();//
    bool check_document_exist();//
    void updateStatus(bool status_);///
    void add_request(Request* r);///
    void setBill(Bill* bill_);///
    bool checkReqValid(Request* req);///
    void setSupporter(Supporter* sup);
    Bill* getBill();
    bool checkStatus();
    //Document getDoc();///
};

#endif 