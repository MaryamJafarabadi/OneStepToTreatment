#ifndef LOGINHANLDER_HPP
#define LOGINHANDLER_HPP

#include <iostream>
#include "PatientService.hpp"


class LoginHandler{
private:
    PatientService* patient_service;

public:
    LoginHandler(PatientService* patient_service_);
    Patient* EnterLoginData(std::string data);
};

#endif