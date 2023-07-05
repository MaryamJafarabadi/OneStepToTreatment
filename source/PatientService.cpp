#include "PatientService.hpp"

bool PatientService::PatientExists(std::string email, std::string phone_number)
{
    for(int i = 0; i < patient_list.size(); i++)
    {
        if(patient_list[i]->checkData(email, phone_number))
        {
            return true;
        }
    }
    return false;
}

Patient* PatientService::getPatient(std::string password, std::string email)
{
    for(int i = 0; i < patient_list.size(); i++)
    {
        if(patient_list[i]->checkPass(password, email))
            return patient_list[i];
    }
    std::cerr << "password not correct!\n";
    return NULL;
}