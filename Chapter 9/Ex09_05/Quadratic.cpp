
/*
**  Filename:    Quadratic.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

Emplementation of class Quadratic.h
*/
#include "Quadratic.h" // include the Quadratic header file

Quadratic::Quadratic(double A, double B, double C)
{
    // Constructor that initializes the coefficients a, b, and c
    // initializes if a is equal to 0

    // A B C are vairiables while a b c are functions
    a(A);
    b(B);
    c(C);
}

Quadratic &Quadratic::add(Quadratic &q)
{
    // Member function to add two quadratic equations
    // Modifies the current object and returns a reference to it
    m_a += q.m_a;
    m_b += q.m_b;
    m_c += q.m_c;

    return *this;
}

Quadratic &Quadratic::subtract(Quadratic &q)
{
    // Member function to subtract two quadratic equations
    // Modifies the current object and returns a reference to it
    m_a -= q.m_a;
    m_b -= q.m_b;
    m_c -= q.m_c;

    return *this;
}

Quadratic &Quadratic::a(double a)
{
    if (a > 0.0)
    {
        m_a = a;
        return *this;
    }
    else
    {
        a = 1.0;
        return *this;
    }
}
Quadratic &Quadratic::b(double b)
{
    m_b = b;
    return *this;
}
Quadratic &Quadratic::c(double c)
{
    m_c = c;
    return *this;
}

void Quadratic::solveX()
{
    // Member function to solve the quadratic equation and print the results
    // Calculates the two possible solutions for the equation and prints them
    double s1{(-(m_b) + std::sqrt((m_b * m_b) - (4 * m_a * m_c))) / (2 * m_a)},
        s2{(-(m_b)-std::sqrt((m_b * m_b) - (4 * m_a * m_c))) / (2 * m_a)};

    std::cout << fmt::format("solving x = (-b + sqr(b^2 - 4ac))/(2a)\n");
    std::cout << fmt::format("\tx = ({} + sqr({}^2 - 4 * {} * {})) / 2 * {}\t",
                             -(m_b), m_b, m_a, m_c, m_a);

    if ((m_b - (4 * m_a * m_c)) > 0)
    {
        std::cout << fmt::format("\n\tx = {:.2f}\n \tor x = {:.2f}\n",
                                 s1, s2);
    }
    else
    {
        std::cout << fmt::format("\n\tx = No Real Roots.\n");
    }
}

std::string Quadratic::toString() const
{
    // Member function to convert the quadratic equation to a string
    // Returns a string in the format "ax^2 + bx + c"
    return fmt::format("{}{}^2 + {}{} + {}",
                       m_a, variable, m_b, variable, m_c);
}
