/*
**  Filename:    date.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: class Date Emplementation
*/
#include "Date.h"

Date::Date()
{

    // Time-related variables
    time_t rawtime = std::time(nullptr); // Get the current time as the number of seconds since the Unix epoch
    struct tm *tminfo;
    std::asctime(std::localtime(&rawtime)); // Get the current time as a string
    tminfo = localtime(&rawtime);           // Convert the current time to a struct with individual components

    // Set the member variables to the current time
    int day{tminfo->tm_mday};
    int month{tminfo->tm_mon};
    int year{tminfo->tm_year};
    year -= 100;
    year += 2000;

    setDate(day, month, year);
}

Date::Date(int ddd, int year)
{
    if (ddd < 1)
    {
        throw std::invalid_argument{"days in a year cant less 1"};
    }

    int month{1};
    while (ddd > daysPerMonth.at(month))
    {
        ddd -= daysPerMonth.at(month);
        ++month;
    }

    setDate(ddd, month, year);
}
Date::Date(int day, int month, int year)
{
    setDate(day, month, year);
}
void Date::setDate(int day, int month, int year)
{
    if (month < 1 || month > monthsPerYear)
    {
        throw std::invalid_argument{"Months must be 1 - 12"};
    }

    m_month = month;
    m_year = year;

    if (!chechDay(day))
    {
        throw std::invalid_argument{"Invalid days"};
    }

    m_day = day;
}
std::string Date::toString() const
{
    return fmt::format("{}-{:02d}-{:02d}",
                       m_year, m_month, m_day);
}
std::string Date::toYYString() const
{
    int a{m_year / 10 % 10},
        b{m_year % 10};

    return fmt::format("{:02d}/{:02d}/{}{}",
                       m_month, m_day, a, b);
}
std::string Date::toDDDString() const
{
    int ddd{0};
    for (int index{1}; index < m_month; ++index)
    {
        ddd += daysPerMonth.at(index);
    }

    ddd += m_day;

    return fmt::format("{:03d} {}",
                       ddd, m_year);
}
std::string Date::toMonthNameString() const
{
    return fmt::format("{} {}, {}",
                       monthName.at(m_month), m_day, m_year);
}

Date::~Date()
{
}

bool Date::chechDay(int day) const
{
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
