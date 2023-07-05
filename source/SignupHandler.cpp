#include "../include/SignupHandler.hpp"

SignupHandler::SignupHandler(PatientService* patient_service_)
{
    patient_service = patient_service_;
}
Patient* SignupHandler::EnterSignupData(std::string data, std::string document, std::string bank_card)
{
    std::istringstream ss(data);
    std::string name, email, phone_number, password;
    ss >> name;
    ss >> name;
    ss >> password;
    ss >> email;
    ss >> phone_number; 
    bool is_exist = patient_service->PatientExists(email, phone_number);
    if (is_exist)
    {
        std::cerr << "login! you have alredy signed up";
        return  NULL;
    }
    Document* document_ = new Document(document);
    BankCard* bank_card_ = new BankCard(bank_card);
    Patient * patient = new Patient(name, password, email, phone_number, document_, bank_card_);
    patient->updateStatus(true);
    return patient;
}
