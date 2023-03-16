/*
**  Filename:    Bicycle.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/01/2023
**  Description: class Bicycle implementation
*/
#include "Bicycle.h"

Bicycle::Bicycle()
{
}

Bicycle::~Bicycle()
{
}
const void Bicycle::getCarbonFootPrint()
{
    fmt::print(
        "\t┌{0:─^{2}}┐\n"
        "\t│{1: ^{2}}│\n"
        "\t└{0:─^{2}}┘\n",
        "", "Bicycle carbon footprint calculator", 35);

    std::cout << "\nEnter distance by bicycle in km: ";
    setDistanceByBicyle();
    std::cout << "Enter distance by car in km: ";
    setDistanceByCar();

    std::cout << fmt::format("\t{:.2f} metric tons:	By bicycling {} km instead of driving a car for {}  you saved {} kg of carbon emissions\n",
                             CalculateEmmission(), getDistanceByBicyle(), getDistanceByCar(), geCarbonSavedByBicycling());

    addToTotal(CalculateEmmission());
    std::cout << fmt::format("\t===========Total Bicyle Footprint saved = {:.2f} metric tons of CO2e===========\n\n", getTotal());
}

void Bicycle::setDistanceByCar()
{
    std::cin >> m_distaneByCar;
    if (m_distaneByCar < 0.0)
    {
        m_distaneByCar = 0;
        std::cout << "\ndistane By Car is setted to 0\n";
    }
}
void Bicycle::setDistanceByBicyle()
{
    std::cin >> m_distanceByBicycle;
    if (m_distanceByBicycle < 0.0)
    {
        m_distanceByBicycle = 0;
        std::cout << "distance By Bicycle is setted to 0";
    }
    // average carbon emissions per kilometer for a car
    double average{0.12};
    m_carbonSavedByBicycling = m_distanceByBicycle * average;
}

double Bicycle::getDistanceByCar() const { return m_distaneByCar; }
double Bicycle::getDistanceByBicyle() const { return m_distanceByBicycle; }
double Bicycle::geCarbonSavedByBicycling() const { return m_carbonSavedByBicycling; }

double Bicycle::CalculateEmmission() const
{
    return geCarbonSavedByBicycling() / 1000;
}

void Bicycle::addToTotal(const double &T)
{
    m_total += T;
}
double Bicycle::getTotal() const { return m_total; }