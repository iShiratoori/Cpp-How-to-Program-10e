/*
**  Filename:    Ex2_20.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Diameter, Circumference and Area of a Circle) 

Write a program that reads in the radius of a circle as an integer 
and prints the circle’s diameter, circumference and area. 
Use the constant value 3.14159 for π. Do all calculations in output statements.
*/
#include <iostream>
using namespace std;

int main()
{
    
    double const pi = 3.14159;
    int radius = 3;
    double diameter, circuference, area;

    diameter = 2 * radius;
    circuference = 2 * pi * radius;
    area = pi * (radius * radius);

    cout << "diameter of Circle is: " <<diameter <<endl;
    cout << "circumference of Circle is: " <<circuference <<endl;
    cout << "Area of Circle is: " <<area <<endl;
}