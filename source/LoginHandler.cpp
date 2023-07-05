#include "../include/LoginHandler.hpp"
#include <sstream>

LoginHandler::LoginHandler(PatientService* patient_service_)
{
    patient_service = patient_service_;
}


Patient* LoginHandler::EnterLoginData(std::string data)
{
    std::istringstream ss(data);
    std::string password, email, phone_number;
    bool is_exist = patient_service->PatientExists(email, phone_number);
    if(!is_exist)
    {
        std::cerr << "signup first!\n";
        return NULL;
    }
    Patient* patient = patient_service->getPatient(password, email);
    patient->updateStatus(true);
    if(!patient->check_document_exist())
    {
        std::cerr << "document not available please enter document.\n";
        return NULL;
    }
    if(!patient->check_bank_card_exist())
    {
        std::cerr << "bank card not available please enter the bank card info.\n";
        return NULL;
    }
    return patient;
}
