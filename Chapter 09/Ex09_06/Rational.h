/*
**  Filename:    Rational.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Rational)
*/

#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <string>
#include <algorithm>
#include <fmt/format.h>

class Rational
{
public:
    // Default constructor, initializes the rational number to 0/1
    Rational(int n = 0, int d = 1);

    // Perform addition on two rational numbers and store the result in this object
    void add(Rational &r1, Rational &r2);

    // Perform subtraction on two rational numbers and store the result in this object
    void subtract(Rational &r1, Rational &r2);

    // Perform multiplication on two rational numbers and store the result in this object
    void multiply(Rational &r1, Rational &r2);

    // Perform division on two rational numbers and store the result in this object
    void divide(Rational &r1, Rational &r2);

    // Return a string representation of the rational number in the form "numerator/denominator"
    std::string toRationalString() const;

    // Return the value of the rational number as a double precision floating-point number
    double toDouble() const;

    // Set the value of the numerator and return a reference to this object
    Rational &setNumerator(int n);

    // Set the value of the denominator and return a reference to this object
    Rational &setDenominator(int d);

    // Return the value of the numerator
    int getNumerator() const;

    // Return the value of the denominator
    int getDenominator() const;

private:
    int m_numerator{0};   // The numerator of the rational number
    int m_denominator{1}; // The denominator of the rational number

    // Reduce the fraction to its simplest form by dividing the numerator and denominator by their greatest common divisor
    void reduce();
};
