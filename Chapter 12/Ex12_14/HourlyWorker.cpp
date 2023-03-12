/*
**  Filename:    HourlyWorker.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class HourlyWorker Implemetation
*/
#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(double wage, int hours)
    : m_wage{wage}, m_hours{hours}
{
    if (hours < 0.0)
    {
        std::invalid_argument{"Hours can be less than 0.0"};
    }
    if (wage < 0.0)
    {
        std::invalid_argument{"wage can be less than 0.0"};
    }
}

HourlyWorker::~HourlyWorker()
{
}

double HourlyWorker::earning() const
{
    if (m_hours > 40)
        return overpay * (m_wage * m_hours);

    return m_wage * m_hours;
}
std::string HourlyWorker::toString() const
{
    return fmt::format("wage: {} \nnumber of hours worked: {}", m_wage, m_hours);
}