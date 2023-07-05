#ifndef PAYMONEYHANDLER_HPP
#define PAYMONEYHANDLER_HPP

#include <iostream>
#include "Request.hpp"
#include "Patient.hpp"

class PayMoneyHandler{
private:

public:
    PayMoneyHandler(){}
    void PayMoney(Request* req, Patient* patient, int percentage);
};

#endif