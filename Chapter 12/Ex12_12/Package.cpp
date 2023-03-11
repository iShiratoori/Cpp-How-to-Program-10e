/*
**  Filename:    package.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: package class implementaion
*/
#include "Package.h"

Package::Package(Address sender, Address reciept, double wieght, double costPerOunce)
    : m_sender{sender}, m_reciept{reciept}, m_weight{wieght}, m_costPerOunce{costPerOunce}
{
    if (wieght < 0.0)
    {
        throw std::invalid_argument{"Weight is less than 0.0"};
    }
    if (costPerOunce < 0.0)
    {
        throw std::invalid_argument{"Cost per ounce is less than 0.0"};
    }
}

std::string Package::getAddressInfo() const
{
    return fmt::format("From: {}, \nAddress: {}, {}, {}, {}\nTo: {}, \nAddress: {}, {}, {}, {}\n",
                       m_sender.getName(), m_sender.getAddress(), m_sender.getCity(), m_sender.getpostCode(), m_sender.getState(),
                       m_reciept.getName(), m_reciept.getAddress(), m_reciept.getCity(), m_reciept.getpostCode(), m_reciept.getState());
}

double Package::calculateCost() const
{
    return m_weight * m_costPerOunce;
}