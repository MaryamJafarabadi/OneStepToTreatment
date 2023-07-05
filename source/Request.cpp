#include "../include/Request.hpp"

Request::Request(time_t t, TreatmentPackage* p)
{
    Time = t;
    treatment_package = p;
    status = "not confirmed";
}

bool Request::CheckStatus(std::string status_)
{
    if(status == status_)
        return true;
    return false;
}

void Request::changeStatus(std::string status_)
{
    status = status_;
}

TreatmentPackage* Request::getPackage()
{
    return treatment_package;
}
