/*
**  Filename:    ElectricBill.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem  ElectricBill.h 
*/

#ifndef ELECTRICBILL_H
#define ELECTRICBILL_H

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class ElectricBill
{
public:
    ElectricBill(double amount){
        setAmountPaid(amount);
    }

    void setAmountPaid( double amount){
        if(amount < 0)
            amountPaid = 0;
        
        if(amount > 0)
        {
            amountPaid = amount - (getVAT(amount) + getEWURA(amount) + getREA(amount) + getFMSC());
        }
    }
    double getVAT(int amount)     { return amount * 0.18; }
    double getREA(int amount)     { return amount * 0.03; }
    double getEWURA(int amount)   { return amount * 0.01; }
    int getFMSC()                 { return 5000; }
    double getAmounPaid()            { return amountPaid;}
    
    double getUnits(){ 
        int kWh{0}, khrCost{295};
        kWh = getAmounPaid() / khrCost;
        return kWh;
    }
private:
    double amountPaid{0};
};

#endif