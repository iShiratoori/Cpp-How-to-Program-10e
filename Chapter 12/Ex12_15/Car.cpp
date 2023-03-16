/*
**  Filename:    Car.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/01/2023
**  Description: class caar implementation
*/
#include "Car.h"

Car::Car()
{
}

Car::~Car()
{
}
const void Car::getCarbonFootPrint()
{
    fmt::print(
        "\t┌{0:─^{2}}┐\n"
        "\t│{1: ^{2}}│\n"
        "\t└{0:─^{2}}┘\n",
        "", "Car carbon footprint calculator", 31);

    std::cout << "\nDistance traveled in km: ";
    setDistanceTravel();
    std::cout << "Fuel type";
    setFuelType();
    std::cout << "Fuel Consumption in liter/100km: ";
    setFuelConsumption();

    std::cout << fmt::format("\t{:.2f} metric tons:	{} km in a {} vehicle doing 12 L/100km\n",
                             calculateEmmission(), getDistanceTravel(), getFuelType(), getFuelConsumption());

    addToTotal(calculateEmmission());
    std::cout << fmt::format("\t===========Total Car Footprint {:.2f} metric tons of CO2e===========\n\n", getTotal());
}

void Car::setDistanceTravel()
{
    std::cin >> m_distanceTravel;
    if (m_distanceTravel < 0.0)
    {
        m_distanceTravel = 0.0;
    }
}
void Car::setFuelType()
{
    int choose;
    std::cout << "\n1.Desiel\n2.Petrol\n.>";
    std::cin >> choose;
    switch (choose)
    {
    case 1:
        m_fuelType = "Desiel";
        break;
    case 2:
        m_fuelType = "Petrol";
        break;
    // case 3:
    //     m_fuelType = "Natural gas";
    //     break;
    default:
        std::cout << "\nInvalid Selection\n";
        break;
    }
}
void Car::setFuelConsumption()
{
    std::cin >> m_fuelConsumption;
    if (m_fuelConsumption < 0.0)
    {
        m_fuelConsumption = 0.0;
    }
}

double Car::getDistanceTravel() const { return m_distanceTravel; }
std::string Car::getFuelType() const { return m_fuelType; }
double Car::getFuelConsumption() const { return m_fuelConsumption; }

double Car::calculateEmmission()
{
    double metricTon{0};
    if (getFuelType() == "Desiel")
    {
        // emissions factor for diesel
        double average{2.68};
        metricTon = (((getFuelConsumption() / 100) * getDistanceTravel()) * average) / 100;
    }
    else if (getFuelType() == "Petrol")
    {
        // emissions factor for patrol
        double average{2.33};
        metricTon = (((getFuelConsumption() / 100) * getDistanceTravel()) * average) / 100;
        return metricTon;
    }
    // else
    // {
    //     // // emissions factor for Natural gas
    //     // double average{2.33};
    //     // double metricTon{(getDistanceTravel() * getFuelConsumption() * average) / 1000};
    //     // std::cout << metricTon;
    // }
    return metricTon;
}
void Car::addToTotal(const double &T)
{
    m_total += T;
}
double Car::getTotal() const { return m_total; }