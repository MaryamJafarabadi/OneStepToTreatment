#include "HospitalClinicDoctor.hpp"

bool HospitalClinicDoctor::checkStatus(std::string status_)
{
    if(status == status_)
        return true;
    return false;
}

void HospitalClinicDoctor::sendInfo(Patient* patient)
{
    patients.push_back(patient);
}