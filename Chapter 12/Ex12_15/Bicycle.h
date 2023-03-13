#pragma once
#include "CarbonFootPrint.h"
class Bicycle : public CarbonFootPrint
{
public:
    Bicycle();
    ~Bicycle();

    virtual const void getCarbonFootPrint() override;

    void setDistanceByCar();
    void setDistanceByBicyle();

    double getDistanceByCar() const;
    double getDistanceByBicyle() const;

    double getTotal() const;
    double CalculateEmmission() const;

    double geCarbonSavedByBicycling() const;

private:
    double m_total{0.0};
    double m_carbonSavedByBicycling{0.0}; // initialize carbon saved by bicycling to zero;
    double m_distanceByBicycle{0.0};
    double m_distaneByCar{0.0};

    void addToTotal(const double &T);
};
