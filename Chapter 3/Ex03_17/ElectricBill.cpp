/*
**  Filename:    ElectricBill.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem    (Automating Electric Energy Purchases) 
*/
#include "ElectricBill.h"

int main()
{
    ElectricBill eb1{10000};

    cout <<"Electric Bill after all deduction: " <<eb1.getAmounPaid() <<endl;
    cout <<"kWh will get: " <<eb1.getUnits() <<endl;
}