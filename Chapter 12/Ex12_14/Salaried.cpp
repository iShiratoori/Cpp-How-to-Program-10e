/*
**  Filename:    Salaried.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class Salaried implementation
*/
#include "Salaried.h"

Salaried::Salaried(double salary)
    : m_salary{salary}
{
    if (salary < 0.0)
    {
        std::invalid_argument{"salay cant be less than 0.0"};
    }
}

std::string Salaried::toString() const
{
    return fmt::format("salary: {:.2f}", m_salary);
}
double Salaried::earning() const
{
    return m_salary;
}