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