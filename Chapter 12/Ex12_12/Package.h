/*
**  Filename:    package.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: (Package Inheritance Hierarchy)
*/

#pragma once

#include "Address.h"

class Package
{
public:
    explicit Package(Address sender, Address reciept, double wieght, double costPerOunce);
    virtual ~Package() = default;
    virtual std::string getAddressInfo() const;
    virtual double calculateCost() const;

private:
    Address m_sender;
    Address m_reciept;
    double m_weight;
    double m_costPerOunce;
};
