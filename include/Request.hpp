#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <iostream>
#include <ctime>
#include "TreatmentPackage.hpp"

class Patient;

class Request{
private:
    time_t Time;
    TreatmentPackage* treatment_package;
    Patient* patient;
    std::string status;
public:
    Request(time_t t, TreatmentPackage* p);
    bool CheckStatus(std::string status_);///
    TreatmentPackage* getPackage();///
    void changeStatus(std::string status_);
};

#endif