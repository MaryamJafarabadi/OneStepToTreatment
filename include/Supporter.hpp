#ifndef SUPPORTER_HPP
#define SUPPORTER_HPP

#include <iostream>
#include <vector>

class Patient;

class Supporter{
private:
    std::string name;
    int rank;
    std::string email;
    std::string phone_number;
    std::string status;
    std::vector<Patient*> patients;

public:
    Supporter();
    //void setSupPatietn();///
    std::string checkStatus();//
    void updateStatus(std::string status_);///
    ///bool CheckSupForPatient();
    void AnnouncePatient(Patient* patient);///
};

#endif