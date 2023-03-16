/*
**  Filename:    car.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/01/2023
**  Description: class car
*/
#pragma once
#include "CarbonFootPrint.h"
class Car final : public CarbonFootPrint
{
public:
    Car();
    ~Car();
    virtual const void getCarbonFootPrint() override;

    void setDistanceTravel();
    void setFuelType();
    void setFuelConsumption();

    double getDistanceTravel() const;
    std::string getFuelType() const;
    double getFuelConsumption() const;

    double getTotal() const;
    double calculateEmmission();

private:
    double m_total{0.0};
    double m_distanceTravel{0.0};
    std::string m_fuelType;
    double m_fuelConsumption{0};

    void addToTotal(const double &T);
};