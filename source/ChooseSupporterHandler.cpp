#include "../include/ChooseSupporterHandler.hpp"

ChooseSupporterHandler::ChooseSupporterHandler(SupporterService* supporter_service_)
{
    supporter_service = supporter_service_;
}

Supporter* ChooseSupporterHandler::ChooseSupporter(Request* req, Patient* patient)
{
    if(!patient->checkReqValid(req))
    {
        std::cerr << "request not found!\n";
        return NULL;
    }
    if(!req->CheckStatus("confirmed"))
    {
        std::cerr << "not paid yet!\n";
        return NULL;
    }
    Supporter* supporter = supporter_service->setSupporter();
    supporter->updateStatus("busy");
    patient->setSupporter(supporter);
    req->changeStatus("sup assigned");
    return supporter;
}
