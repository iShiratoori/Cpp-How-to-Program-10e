/*
**  Filename:    Commission.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: (Payroll-System Modification)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <stdexcept>
#include <string>
class Commission
{
public:
    Commission(double grossSales, double commissionRate);
    std::string toString() const;
    double earning() const;

private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};
};