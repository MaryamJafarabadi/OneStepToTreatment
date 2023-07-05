#ifndef TREATMENTPACKAGE_HPP
#define TREATMENTPACKAGE_HPP

#include <iostream>
#include <ctime>

class TreatmentPackage{
private:
    int ID;///
    std::string name;//
    int estimatedCost;
    time_t Time;
    int capacity;///

public:
    TreatmentPackage();
    int getID();///
    int check_capacity();//
    void reduce_capacity();//
    int getCost();///
    std::string getName();///
    int calculatePayment(int percentage);
    int prePayment();
};

#endif