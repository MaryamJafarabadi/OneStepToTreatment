#include "../include/PayMoneyHandler.hpp"

void PayMoneyHandler::PayMoney(Request* req, Patient* patient, int percentage)
{
    if(!patient->checkReqValid(req))
    {
        std::cerr << "request not found!\n";
        return;
    }
    if(!req->CheckStatus("not confirmed"))
    {
        std::cerr << "already paid!\n";
        return;
    }
    int preCost = req->getPackage()->calculatePayment(percentage);
    Bill* bill = patient->getBill();
    bill->setPaid(preCost);
    bill->setDebt(preCost);
    req->changeStatus("confirmed");
}
