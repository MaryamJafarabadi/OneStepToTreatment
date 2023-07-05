#include "ChoosePackageHandler.hpp"

#include <ctime>

ChoosePackageHandler::ChoosePackageHandler(TreatmentPackageService* treatment_package_service_)
{
    treatment_package_service = treatment_package_service_;
}

Request* ChoosePackageHandler::ChoosePackageTreatment(Patient* patient, int package_id)
{
    if(!treatment_package_service->ValidPackage(package_id))
    {
        std::cerr << "invalid package!\n";
        return NULL;
    }
    TreatmentPackage* package = treatment_package_service->reservePackage(package_id);
    Request* request = new Request(time(0), package);   
    patient->add_request(request);
    int cost = package->getCost();
    Bill* bill = new Bill(cost, 0, package->getName());
    patient->setBill(bill);
    return request;
}