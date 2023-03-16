/*
**  Filename:    Ex06_26.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Celsius and Fahrenheit Temperatures)
*/
#include <iostream>
#include <iomanip>
using namespace std;

//A)
double Celsius(double f){
  return (f - 32) * 5 / 9;
}

//B)
double Fahrenheit( double c){
  return c * 9 / 5 + 32;
}
int main()
{
  //C) printing Celcius Equivalent to Fahreneit
  cout <<"Celcius" <<setw(14) <<"Fahrenheit" <<endl;
  for(int counter = 0; counter <= 100; ++counter){
    cout <<counter <<"°C" <<setw(15) <<Fahrenheit(counter) <<"°F\n";
  }

  
  //C) printing Celcius Equivalent to Fahreneit
  cout <<"\nFahrenheit" <<setw(14) <<"Celcius" <<endl;
  for(int counter = 32; counter <= 212; ++counter){
    cout <<counter <<"°F" <<setw(15) <<Celsius(counter) <<"°C\n";
  }
}