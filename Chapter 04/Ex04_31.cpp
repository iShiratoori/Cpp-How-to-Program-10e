/*
**  Filename:    Ex04_31.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  (Calculating a Sphere’s Circumference, Area and Volume)
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double radius{0.0}, pi{3.14159}, circuSphere{0.0}, areaSphere{0.0}, volumeSphere{0.0};

    cout <<"Enter radius of Sphere: ";
    cin >>radius;

    areaSphere = 4 * pi *  radius * radius;
    circuSphere = 2 * pi * radius;
    volumeSphere = 1.333 * pi * (radius * radius * radius);

    cout <<"Area of sphere is: " <<areaSphere <<endl;
    cout <<"circumference of sphere is: " <<circuSphere <<endl;
    cout <<"Volume of sphere is: " <<volumeSphere <<endl;

    return 0;
}