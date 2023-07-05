#include "TreatmentPackage.hpp"

TreatmentPackage::TreatmentPackage()
{

}

int TreatmentPackage::getID()
{
    return ID;
}

int TreatmentPackage::check_capacity()
{
    return capacity;        
}

void TreatmentPackage::reduce_capacity()
{
    capacity--;
}

int TreatmentPackage::getCost()
{
    return estimatedCost;
}

std::string TreatmentPackage::getName()
{
    return name;
}

int TreatmentPackage::calculatePayment(int percentage)
{
    return int(estimatedCost * percentage / 100);
}