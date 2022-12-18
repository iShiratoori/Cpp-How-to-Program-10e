/*
**  Filename:    Ex06_37.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Fibonacci Series: Iterative Solution)
*/
#include <iostream> 
using namespace std;

int Fibonacci(int n){
  if( n <= 0)
    return 0;
  
  int a{0}, b{1};
  for(int i = 2; i <= n; ++i){
    int c{ a + b};
    a = b;
    b = c;
  }
  return b;
}

int main()
{
  cout <<Fibonacci(12);
}