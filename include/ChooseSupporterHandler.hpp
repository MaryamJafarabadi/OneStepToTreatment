#ifndef CHOOSESUPPORTERHANDLER_HPP
#define CHOOSESUPPORTERHANDLER_HPP

#include <iostream>
#include "Request.hpp"
#include "Patient.hpp"
#include "SupporterService.hpp"

class ChooseSupporterHandler{
private:
    SupporterService* supporter_service;
public:
    ChooseSupporterHandler(SupporterService* supporter_service_);
    Supporter* ChooseSupporter(Request* req, Patient* patient);
};

#endif