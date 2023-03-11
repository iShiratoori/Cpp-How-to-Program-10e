/*
**  Filename:    OvernightPackage.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class OvernightPackage
*/
#pragma once
#include "Package.h"
class OvernightPackage : public Package
{
public:
    OvernightPackage(Address sender, Address reciept, double weight, double costPerOunce, double extraCost);

    std::string getAddressInfo() const override;
    double calculateCost() const override;

private:
    double m_extraCostPerOunce{0.0};
    double m_wieght{0.0};
};