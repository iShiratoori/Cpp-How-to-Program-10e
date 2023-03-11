/*
**  Filename:    Time.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/12/2022

**  Description: Time class modification
*/
#pragma once
#define FMT_HEADER_ONLY
#include <stdexcept>
#include <iostream>
#include <string>
#include <string_view>
#include <fmt/format.h>

class Time
{
public:
    void setTime(int hour, int minute, int second);
    std::string to24HourString() const;
    std::string to12HourString() const;

private:
    int m_seconds{0};
};