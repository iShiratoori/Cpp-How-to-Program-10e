/*
**  Filename:    Building.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/01/2023
**  Description: class Building
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include "CarbonFootPrint.h"
class Building final : public CarbonFootPrint
{
public:
    Building();
    ~Building();

    virtual const void getCarbonFootPrint() override;

    double calculateEL(const double &value);
    double calculateNG(const double &value);
    double calculateHO(const double &value);
    double calculateC(const double &value);
    double calculateLPG(const double &value);
    double calculateLPropane(const double &value);
    double calculateWP(const double &value);

    void setElectricity();
    void setNatualgas();
    void setHeatingOil();
    void setCoal();
    void setLPG();
    void setPropane();
    void setWoodenPellets();

    double getElectricity() const;
    double getNatualgas() const;
    double getHeatingOil() const;
    double getCoal() const;
    double getLPG() const;
    double getPropane() const;
    double getWoodenPellets() const;

    double getTotal() const;

private:
    double m_total{0.0};
    double m_Electricity{0.0};
    double m_Natualgas{0.0};
    double m_heatingOil{0.0};
    double m_Coal{0.0};
    double m_LPG{0.0};
    double m_Propane{0.0};
    double m_WoodenPellets{0.0};

    void addToTotal(const double &T);
};