/*
**  Filename:    Ex06_36.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Recursive Exponentiation)
*/
#include <iostream>
using namespace std;

int power(int base, int exponent) {
  
  if (exponent == 0)
    return 1; // base case

  return base * power(base, exponent - 1); // recursive case
}

int main()
{
  cout <<power(5, 3);
}