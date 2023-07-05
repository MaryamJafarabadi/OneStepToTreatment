#ifndef SENDINFOHANDLER_HPP
#define SENDINFOHANDLER_HPP

#include <iostream>
#include "Supporter.hpp"
#include "Patient.hpp"
#include "HCD_Service.hpp"

class SendInfoHandler{
private:
    HCD_Service* hcd_service;
public:
    SendInfoHandler(HCD_Service* hcd_service_);
    void SendPatientInfo(Supporter* supporter, Patient* patient, Request* req);

};

#endif