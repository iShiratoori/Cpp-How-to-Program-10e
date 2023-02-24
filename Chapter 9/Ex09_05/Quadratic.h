/*
**  Filename:    Quadratic.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

Description of the problem (Quadratic Equations Class)
*/

// This header file defines a class named Quadratic that represents a
// quadratic equation with coefficients a, b, and c.

#pragma once // include guard to ensure the file is only included once

#define FMT_HEADER_ONLY // define to include fmt library as a header-only library

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <fmt/format.h> // include fmt library for string formatting

class Quadratic
{
public:
    // Constructor with default values for coefficients a, b, and c
    Quadratic(double a = 1, double b = 0, double c = 0);

    // Member functions to add and subtract quadratic equations
    Quadratic &add(Quadratic &q);
    Quadratic &subtract(Quadratic &q);

    Quadratic &a(double a);
    Quadratic &b(double b);
    Quadratic &c(double ac);

    // Member function to solve the quadratic equation and print the results
    void solveX();

    // Member function to convert the quadratic equation to a string
    std::string toString() const;

private:
    double m_a;         // coefficient a
    double m_b;         // coefficient b
    double m_c;         // coefficient c
    char variable{'x'}; // variable used in the equation (default: 'x')
};
