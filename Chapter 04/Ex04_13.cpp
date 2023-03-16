/*
**  Filename:    Ex04_13.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Fuel Usage)

*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int kilometersDriven{0}, litterUsed{0};
    
    cout <<"Enter kilometers driven (-1 to quit): ";
    cin >>kilometersDriven;

    cout <<setprecision(2) <<fixed;
    while(kilometersDriven != -1)
    {
        cout <<"Enter litters used: ";
        cin >>litterUsed;

        double eachTrip{static_cast<double>(kilometersDriven) / litterUsed};
        cout <<"Kms per liter this trip: "
            <<eachTrip  <<endl;

        double total{static_cast<double>(kilometersDriven) / litterUsed};
        cout <<"Total kms per liter: " 
            << total <<endl;

        cout <<"Enter kilometers driven (-1 to quit): ";
        cin >>kilometersDriven;
    }

    return 0;
}