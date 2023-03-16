/*
**  Filename:    Date.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: class Date modification
*/
#pragma once
#define FMT_HEADER_ONLY
#include <stdexcept>
#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <fmt/format.h>

class Date
{
public:
    static const int monthsPerYear{12};
    Date();
    explicit Date(int ddd, int year);
    explicit Date(int day, int month, int year);
    ~Date();

    void setDate(int day, int month, int year);
    // void setDay(int day);
    // void setMonth(int month);
    // void setYear(int year);

    // void getDay() const;
    // void getMonth() const;
    // void getYear() const;

    std::string toString() const;
    std::string toYYString() const;
    std::string toDDDString() const;
    std::string toMonthNameString() const;

private:
    int m_year{0};
    int m_month{0};
    int m_day{0};

    const std::array<int, 13> daysPerMonth{
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const std::array<std::string, 13> monthName{"", "January", "February", "March", "April", "May", "June", "July",
                                                "August", "September", "October", "November", "December"};
    bool chechDay(int day) const;
};