/*
**  Filename:    OvernightPackage.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class OvernightPackage implementaion
*/
#include "OverNightPackage.h"

OvernightPackage::OvernightPackage(Address sender, Address reciept, double weight, double costPerOunce, double extraCost)
    : Package(sender, reciept, weight, costPerOunce), m_extraCostPerOunce{extraCost}, m_wieght{weight}
{
}

std::string OvernightPackage::getAddressInfo() const
{
    return fmt::format("{}", Package::getAddressInfo());
}
double OvernightPackage::calculateCost() const
{
    return Package::calculateCost() + m_extraCostPerOunce * m_wieght;
}
