#include "OneStepToTreatment.hpp"
#include "Patient.hpp"
#include "SignupHandler.hpp"
#include "PatientService.hpp"

#include "LoginHandler.hpp"

#include "ChoosePackageHandler.hpp"
#include "TreatmentPackageService.hpp"

#include "PayMoneyHandler.hpp"

#include "ChooseSupporterHandler.hpp"
#include "SupporterService.hpp"

#include "SendInfoHandler.hpp"
#include "HCD_Service.hpp"


#include <sstream>

void OneStepToTreatment::run()
{
    PatientService* patient_service = new PatientService();
    SignupHandler* signup_handler = new SignupHandler(patient_service);
    LoginHandler* login_handler = new LoginHandler(patient_service);

    TreatmentPackageService* treatment_package_service = new TreatmentPackageService();
    ChoosePackageHandler* choose_package_handler = new ChoosePackageHandler(treatment_package_service);

    PayMoneyHandler* pay_money_handler = new PayMoneyHandler();

    SupporterService* supporter_service = new SupporterService();
    ChooseSupporterHandler* choose_supporter_handler = new ChooseSupporterHandler(supporter_service);

    HCD_Service* hcd_service = new HCD_Service();
    SendInfoHandler* send_info_handler = new SendInfoHandler(hcd_service);

    while(true)
    {
        std::cout << "********** Welcome to One Step To Treatment website! **********\n";
        std::cout << "signup or login first!\n";
        std::cout << "for signup enter: signup <name password email PhoneNumber>\n";
        std::cout << "for login enter: login <password email>\n";
        std::string input;
        std::cin >> input;
        std::istringstream ss(input);
        std::string token;
        ss >> token;
        Patient* patient;
        if(token == "signup")
        {
            std::string document;
            std::cout << "enter your document including age, health history, or any drug you are taken...\n";
            std::cin >> document;
            std::string bank_card;
            std::cout << "enter your bank card number and the CVV seperating by space:\n";
            std::cin >> bank_card;
            patient = signup_handler->EnterSignupData(input, document, bank_card);

        }
        else if(token == "login")
        {
            patient = login_handler->EnterLoginData(input);
        }

        std::string package;
        std::cout << "choose your ideal package:\n";
        std::cin >> package;
        Request* request = choose_package_handler->ChoosePackageTreatment(patient, stoi(package));
        pay_money_handler->PayMoney(request, patient, PERCENTAGE);
        Supporter* supporter = choose_supporter_handler->ChooseSupporter(request, patient); 
        send_info_handler->SendPatientInfo(supporter, patient, request);
    }

    
}