#include "../include/SendInfoHandler.hpp"

SendInfoHandler::SendInfoHandler(HCD_Service* hcd_service_)
{
    hcd_service = hcd_service_;
}

void SendInfoHandler::SendPatientInfo(Supporter* supporter, Patient* patient, Request* req)
{
    if(!patient->checkReqValid(req))
    {
        std::cerr << "request not found!\n";
        return;
    }
    if(!req->CheckStatus("sup assigned"))
    {
        std::cerr << "already paid!\n";
        return;
    }
    hcd_service->assignHCD(patient);
    supporter->AnnouncePatient(patient);
}
