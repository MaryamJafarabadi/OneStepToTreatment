#include "Supporter.hpp"
#include "Patient.hpp"

Supporter::Supporter()
{

}

std::string Supporter::checkStatus()
{
    return status;
}

void Supporter::updateStatus(std::string status_)
{
    status = status_;
}

void Supporter::AnnouncePatient(Patient* patient)
{
    patients.push_back(patient);
}