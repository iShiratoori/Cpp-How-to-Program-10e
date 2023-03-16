/*
**  Filename:    Ex06_13.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Rounding Numbers)
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // variable to hold the number entered by the user
    double y; // variable to hold the rounded number

    cout << "Enter a number: ";
    cin >> x;

    // round the number to the nearest integer
    y = floor(x + 0.5);

    // print the original and rounded numbers
    cout << "Original number: " << x << endl;
    cout << "Rounded number: " << y << endl;

    return 0;
}
