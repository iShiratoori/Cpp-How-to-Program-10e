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

// Date constructor (should do range checking)
Date::Date(int year, int month, int day)
    : m_year{year}, m_month{month}, m_day{day} {}

void Date::setDay(int day)
{
    m_day = day;
}
void Date::setMonth(int month)
{
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
