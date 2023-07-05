#ifndef CHOOSEPACKAGEHANDLER_HPP
#define CHOOSEPACKAGEHANDLER_HPP

#include <iostream>
#include "Patient.hpp"
#include "TreatmentPackageService.hpp"
#include "Request.hpp"

class ChoosePackageHandler{
private:
    TreatmentPackageService* treatment_package_service;
public:
    ChoosePackageHandler(TreatmentPackageService* treatment_package_service_);
    Request* ChoosePackageTreatment(Patient* patient, int package_id);

};

#endif