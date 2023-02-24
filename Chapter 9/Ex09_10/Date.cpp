/*
**  Filename:    Date.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Emplementation of class Date
*/
#include <string>
#include <fmt/format.h> // In C++20, this will be #include <format>
#include "Date.h"       // include definition of class Date from Date.h
using namespace std;

#include "Date.h"

Date::Date(int day, int month, int year)
    : m_year{year}
{
    setMonth(month);
    setDay(day);
}

Date::~Date()
{
}

bool Date::chechDay(int day) const
{
    static const std::array daysPerMonth{
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (1 <= day && day <= daysPerMonth.at(m_month))
    {
        return true;
    }

    if (m_month == 2 && day == 29 &&
        (m_year % 400 == 0 || (m_year % 4 == 0 && m_year % 100 != 0)))
    {
        return true;
    }

    return false;
}

void Date::setDay(int day)
{
    if (!chechDay(day))
    {
        throw std::invalid_argument{"Invalid days"};
    }
    m_day = day;
}
void Date::setMonth(int month)
{
    if (month < 1 || month > monthsPerYear)
    {
        throw std::invalid_argument{"Months must be 1 - 12"};
    }

    m_month = month;
}
void Date::setYear(int year)
{
    m_year = year;
}

// return string representation of a Date in the format yyyy-mm-dd
string Date::toString() const
{
    return fmt::format("{}-{:02d}-{:02d}", m_year, m_month, m_day);
}
