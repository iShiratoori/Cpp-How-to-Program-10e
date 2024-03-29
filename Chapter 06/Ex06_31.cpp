/*
**  Filename:    Ex06_31.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Greatest Common Divisor) 
*/
#include <iostream>
using namespace std;

int gcd(int num1, int num2){
  if( num2 == 0){
    return num1;
  }
  else{
    return gcd(num2, num1 % num2);
  }
}

int main()
{
  cout <<gcd(10, 45);
}