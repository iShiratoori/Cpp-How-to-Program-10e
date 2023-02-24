/*
**  Filename:    Date.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Date)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <string>
#include <fmt/format.h>

// class Date definition
class Date
{
public:
    Date(int year, int month, int day);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    std::string toString() const;

private:
    int m_year;
    int m_month;
    int m_day;
};