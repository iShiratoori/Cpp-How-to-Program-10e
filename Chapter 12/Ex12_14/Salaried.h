/*
**  Filename:    Salaried.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class Salaried
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <stdexcept>
#include <string>
class Salaried
{
public:
    Salaried(double salary);

    std::string toString() const;
    double earning() const;

private:
    double m_salary{0.0};
};