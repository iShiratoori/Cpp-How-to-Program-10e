/*
**  Filename:    Ex06_48.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Circle Area)
*/
#include <iostream>
#include <cmath>

// inline function to calculate the area of a circle
inline double circleArea(double radius)
{
  return M_PI * radius * radius;
}

int main()
{
  std::cout << "Enter the radius of the circle: ";
  double radius;
  std::cin >> radius;

  std::cout << "The area of the circle is " << circleArea(radius) << std::endl;

  return 0;
}
