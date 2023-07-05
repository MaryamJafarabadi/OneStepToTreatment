#include "../include/SupporterService.hpp"

Supporter* SupporterService::setSupporter()
{
    for(int i = 0; i < supporter_list.size(); i++)
    {
        if(supporter_list[i]->checkStatus() == "busy")
        {
            continue;
        }
        return supporter_list[i];
    }
    std::cerr << "all supporters busy!\n";
    return NULL;
}
