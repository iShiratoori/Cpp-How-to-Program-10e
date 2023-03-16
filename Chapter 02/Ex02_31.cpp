/*
**  Filename:    Ex2_31.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem  (Car-Pool Savings Calculator)

Research several car-pooling websites. Create an application
that calculates your daily driving cost, so that you can estimate 
how much money could be saved by car pooling, 
which also has other advantages such as reducing carbon emissions and reducing traffic congestion. 
The application should input the following information and display the user’s cost per
day of driving to work: 
       a) Total miles driven per day. 
       b) Cost per gallon of gasoline. 
       c) Average miles per gallon.
       d) Parking fees per day. 
       e) Tolls per day

*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int milesPerDay, costPerGallon, milesPerGallon, parkingFeePerDay, tollsPerDay, total;

    cout <<"Enter Total miles driven per day: ";
    cin >>milesPerDay;
    cout <<"Enter Cost per gallon of gasoline: $";
    cin >>costPerGallon;
    cout <<"Enter Average miles per gallon: ";
    cin >>milesPerGallon;
    cout <<"Enter Parking fees per day: $";
    cin >>parkingFeePerDay;
    cout <<"Enter Parking fees per day: $";
    cin >>tollsPerDay;

    total = (milesPerDay/milesPerGallon) * costPerGallon + parkingFeePerDay + tollsPerDay;
    cout <<"Total Cost Per Day: " <<total <<endl;

    return 0;
}