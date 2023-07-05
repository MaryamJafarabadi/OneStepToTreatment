#include "../include/HCD_Service.hpp"


void HCD_Service::assignHCD(Patient* patient)
{
    for(int i = 0; i < HCDs.size(); i++)
    {
        if(HCDs[i]->checkStatus("available"))
        {
            HCDs[i]->sendInfo(patient);
        }
    }
    
}
