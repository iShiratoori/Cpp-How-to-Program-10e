/*
**  Filename:    Ex06_19.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Hypotenuse Calculations)
*/
#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2){
    return sqrt(pow(side1, 2) +  pow(side2, 2));
}
int main()
{
  double h1 = hypotenuse(3.0, 4.0);
  cout << "Hypotenuse of triangle 1: " << h1 << endl;

  double h2 = hypotenuse(5.0, 12.0);
  cout << "Hypotenuse of triangle 2: " << h2 << endl;

  double h3 = hypotenuse(8.0, 15.0);
  cout << "Hypotenuse of triangle 3: " << h3 << endl;
}