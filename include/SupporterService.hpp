#ifndef SUPPORTERSERVICE_HPP
#define SUPPORTERSERVICE_HPP

#include <iostream>
#include <vector>
#include "Supporter.hpp"

class SupporterService{
private:
    std::vector<Supporter*> supporter_list;
public:
    SupporterService(){}
    Supporter* setSupporter();
};

#endif