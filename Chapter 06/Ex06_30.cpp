/*
**  Filename:    Ex06_30.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Reverse Digits)
*/
#include <iostream>
using namespace std;

void reverseDegits(int digits);

int main()
{
  reverseDegits(7631);
}

void reverseDegits(int digits){

  int num_degits{0}, temp{digits};
  while (temp > 0)
  {
    ++num_degits;
    temp /= 10;
  }

  for( int i = 0; i < num_degits; ++i){
    int quotient{ digits / 10 };
    int remainder{ digits % 10};

    cout << remainder;
    digits = quotient;
  }
}
