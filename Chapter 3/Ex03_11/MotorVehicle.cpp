//Ex3.11 (MotorVehicle class) 
//Create a class called MotorVehicle that represents a motor vehicle
//using: make (type string), fuelType (type string), yearOfManufacture (type int), 
//color (type string) and engineCapacity (type int). Your class should have a constructor that initializes the three
//data members. Provide a set and a get function for each data member. Add a member function
//called displayCarDetails that displays the five data members in five separate lines in the form
//"member name: member value". Write a test program to demonstrate MotorVehicle’s capabilities.

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
