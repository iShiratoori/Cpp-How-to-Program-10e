/*
**  Filename:    Ex06_14.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Rounding Numbers)
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// function to round a number to the nearest integer
double roundToInteger(double x)
{
    return floor(x + 0.5);
}

// function to round a number to the nearest tenth
double roundToTenths(double x)
{
    return floor(x * 10 + 0.5) / 10;
}

// function to round a number to the nearest hundredth
double roundToHundredths(double x)
{
    return floor(x * 100 + 0.5) / 100;
}

// function to round a number to the nearest thousandth
double roundToThousandths(double x)
{
    return floor(x * 1000 + 0.5) / 1000;
}

int main()
{
    double x; // variable to hold the number entered by the user

    cout << "Enter a number: ";
    cin >> x;

    // round the number in various ways
    double roundedInteger = roundToInteger(x);
    double roundedTenth = roundToTenths(x);
    double roundedHundredth = roundToHundredths(x);
    double roundedThousandth = roundToThousandths(x);

    // print the original and rounded numbers
    cout <<setprecision(10) <<fixed;
    cout << "Original number: " << x << endl;
    cout << "Rounded to nearest integer: " << roundedInteger << endl;
    cout << "Rounded to nearest tenth: " << roundedTenth << endl;
    cout << "Rounded to nearest hundredth: " << roundedHundredth << endl;
    cout << "Rounded to nearest thousandth: " << roundedThousandth << endl;

    return 0;
}
