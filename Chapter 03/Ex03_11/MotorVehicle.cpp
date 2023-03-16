/*
**  Filename:    MotorVehicle.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem  (MotorVehicle class) 
*/

#include <iostream>
#include "MotorVehicle.h"
using namespace std;

int main()
{
    MotorVehicle mv1{"BMW", "Disel", "White", 2007, 1570};
    MotorVehicle mv2{"Toyoto", "Disel", "Black", 2014, 1360};
    MotorVehicle mv3{"Audi", "Disel", "Red", 2020, 1470};

    cout <<"\t ======This Program demonstrates MotorVehicle’s capabilities======" <<endl;
    mv1.displayCarDetails();
    cout <<"\nMotor Vehicle 2\n";
    mv2.displayCarDetails();
    
    cout <<"\nMotor Vehicle 3\n";
    mv3.displayCarDetails();

    return 0;
}
