/*
**  Filename:    Rational.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022
**
**  Implementation of class Rational.h
*/

#include "Rational.h"

Rational::Rational(int n, int d)
{
    setNumerator(n);
    setDenominator(d);
}

void Rational::reduce()
{
    // Find the greatest common divisor between the numerator and denominator
    int n = getNumerator(), d = getDenominator();
    int factor = std::__gcd(n, d);

    // Reduce the fraction by dividing both numerator and denominator by the greatest common divisor
    while (factor > 1)
    {
        n /= factor;
        d /= factor;
        factor = std::__gcd(n, d);
    }

    // Update the numerator and denominator of the reduced fraction
    setNumerator(n);
    setDenominator(d);
}

void Rational::add(Rational &r1, Rational &r2)
{
    // Find the least common multiple of the denominators
    int lcm = (r1.getDenominator() * r2.getDenominator()) / std::__gcd(r1.getDenominator(), r2.getDenominator());

    // Convert the numerators so that they have the least common multiple as the denominator
    int n1 = r1.getNumerator() * (lcm / r1.getDenominator());
    int n2 = r2.getNumerator() * (lcm / r2.getDenominator());

    // Add the numerators and update the numerator and denominator of the result
    setNumerator(n1 + n2);
    setDenominator(lcm);

    // Reduce the result
    reduce();
}

void Rational::subtract(Rational &r1, Rational &r2)
{
    // Find the least common multiple of the denominators
    int lcm = (r1.getDenominator() * r2.getDenominator()) / std::__gcd(r1.getDenominator(), r2.getDenominator());

    // Convert the numerators so that they have the least common multiple as the denominator
    int n1 = r1.getNumerator() * (lcm / r1.getDenominator());
    int n2 = r2.getNumerator() * (lcm / r2.getDenominator());

    // Subtract the numerators and update the numerator and denominator of the result
    setNumerator(n1 - n2);
    setDenominator(lcm);

    // Reduce the result
    reduce();
}

void Rational::multiply(Rational &r1, Rational &r2)
{
    // Multiply the numerators and denominators separately
    setNumerator(r1.getNumerator() * r2.getNumerator());
    setDenominator(r1.getDenominator() * r2.getDenominator());

    // Reduce the result
    reduce();
}

void Rational::divide(Rational &r1, Rational &r2)
{
    // Invert the second fraction and multiply the two fractions
    int fN{r2.getDenominator()}, fD{r2.getNumerator()};
    setNumerator(r1.getNumerator() * fN);
    setDenominator(r1.getDenominator() * fD);

    // Reduce the result
    reduce();
}

std::string Rational::toRationalString() const
{
    // Convert the fraction to a string in the format "numerator/denominator" or just "numerator" if the denominator is 1 or the numerator is 0
    if (getNumerator() != 0)
        return fmt::format("{}/{}", getNumerator(), getDenominator());
    else
        return fmt::format("{}", getNumerator());
}

double Rational::toDouble() const
{
    // Return the value of the rational number as a double precision floating-point number
    return static_cast<double>(getNumerator()) / getDenominator();
}

Rational &Rational::setNumerator(int n)
{
    // Set the value of the numerator and return a reference to this object
    m_numerator = n;
    return *this;
}
Rational &Rational::setDenominator(int d)
{
    // Set the value of the denominator and return a reference to this object
    if (d != 0)
        m_denominator = d;

    return *this;
}

int Rational::getNumerator() const
{
    // Return the value of the numerator
    return m_numerator;
}
int Rational::getDenominator() const
{
    // Return the value of the denominator
    return m_denominator;
}