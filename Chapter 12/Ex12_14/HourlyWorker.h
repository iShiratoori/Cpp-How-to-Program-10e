/*
**  Filename:    HourlyWorker.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class HourlyWorker
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <string>

class HourlyWorker
{
public:
    HourlyWorker(double wage, int hours);
    ~HourlyWorker();

    double earning() const;
    std::string toString() const;

private:
    double m_wage{0.0};
    int m_hours{0};
    double overpay{1.5};
};