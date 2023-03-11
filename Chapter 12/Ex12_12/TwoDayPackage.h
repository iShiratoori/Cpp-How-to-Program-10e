#pragma once
/*
**  Filename:    TwoDayPackage.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class TwoDayPackage
*/
#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(Address sender, Address reciept, double weight, double costPerOunce, double flatfee);

    std::string getAddressInfo() const override;
    double calculateCost() const override;

private:
    double m_flatFee{0.0};
};