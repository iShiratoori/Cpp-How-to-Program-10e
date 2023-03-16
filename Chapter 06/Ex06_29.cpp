/*
**  Filename:    Ex06_29.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Prime Numbers)
*/
#include <iostream>
using namespace std;

//A)
bool isPrimeNumber(int n){

  int divisible{0};

  //C)
  //for (int i = 2; i <= sqrt(n); i++) {
  for(int i{1}; i <= n; ++i){
    
    if(n % i == 0){
      ++divisible;
    }
  }

  if(divisible > 2){
    return false;
  }
  else{
    return true;
  }
}

int main()
{
  //B)
  for(int counter{2}; counter <= 100; ++counter){
    if(isPrimeNumber(counter) == true)
      cout <<counter <<'\n';
  }
  
}