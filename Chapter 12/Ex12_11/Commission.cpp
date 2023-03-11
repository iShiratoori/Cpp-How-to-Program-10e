#include "Commission.h"

Commission::Commission(double grossSales, double commissionRate)
    : m_grossSales{grossSales}, m_commissionRate{commissionRate}
{
    if (grossSales < 0.0)
    {
        throw std::invalid_argument{"gross sale must be >= 0.0"};
    }

    if (commissionRate <= 0.0 || commissionRate >= 1.0)
    {
        throw std::invalid_argument{"commission rate must be 0.0 - 1.0"};
    }
}
std::string Commission::toString() const
{
    return fmt::format("gross sales: {:.2f} \ncommission rate: {:.2f}", m_grossSales, m_commissionRate);
}
double Commission::earning() const
{
    return m_grossSales * m_commissionRate;
}