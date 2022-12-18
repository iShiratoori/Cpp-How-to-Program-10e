/*
**  Filename:    Ex06_12.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Parking Charges)
*/
#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharges(double hours)
{
    double charge = 20.0;

    if (hours > 3.0)
        charge += (hours - 3.0) * 5.0;

    if (charge > 50.0)
        charge = 50.0;

    return charge;
}

int main()
{
    double hours1, hours2, hours3;
    double totalHours = 0.0;
    double totalCharges = 0.0;

    cout <<setprecision(2) <<fixed;
    cout << "Enter hours parked for car 1: ";
    cin >> hours1;
    cout << "Enter hours parked for car 2: ";
    cin >> hours2;
    cout << "Enter hours parked for car 3: ";
    cin >> hours3;

    totalHours = hours1 + hours2 + hours3;
    totalCharges = calculateCharges(hours1) + calculateCharges(hours2) + calculateCharges(hours3);
    
    cout << "Car\tHours\tCharge" << endl;
    cout << "1\t" << hours1 << "\t" << calculateCharges(hours1) << endl;
    cout << "2\t" << hours2 << "\t" << calculateCharges(hours2) << endl;
    cout << "3\t" << hours3 << "\t" << calculateCharges(hours3) << endl;
    cout << "TOTAL\t" << totalHours << "\t" << totalCharges << endl;

    return 0;
}
