/*
**  Filename:    Ex06_42.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem   (Distance Between Points)
*/
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
  double d = distance(1.0, 2.0, 4.0, 6.0);

  cout <<d <<endl;
}
