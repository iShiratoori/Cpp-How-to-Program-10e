/*
**  Filename:    TwoDayPackage.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class TwoDayPackage implementation
*/
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(Address sender, Address reciept, double weight, double costPerOunce, double flatfee)
    : Package(sender, reciept, weight, costPerOunce), m_flatFee{flatfee}
{
    if (flatfee < 0.0)
    {
        throw std::invalid_argument{"Flat flee is less 0.0"};
    }
}
std::string TwoDayPackage::getAddressInfo() const
{
    return fmt::format("{}", Package::getAddressInfo());
}

double TwoDayPackage::calculateCost() const
{
    return Package::calculateCost() + m_flatFee;
}