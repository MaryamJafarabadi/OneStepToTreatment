#ifndef SIGNUPHANDLER_HPP
#define SIGNUPHANDLER_HPP

#include "PatientService.hpp"
#include <iostream>
#include <sstream>

class SignupHandler{
private:
    PatientService* patient_service;
public:
    SignupHandler(PatientService* patient_service_);
    Patient* EnterSignupData(std::string data, std::string document, std::string bank_card);
};

#endif