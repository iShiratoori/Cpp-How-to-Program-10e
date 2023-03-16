/*
**  Filename:    Ex06_28.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Dudeney Numbers)
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isDudeney(int n){

  int root = cbrt(n);
  if(pow(root, 3) != n)
    return false;

  int sum{0};
  while (n > 0){
    sum += n % 10;
    n /= 10;
  }  

  return sum == root;
}

int main()
{
  int dudeneyN{1};
  for(int counter{1}; dudeneyN <= 7; ++counter)
  {
    if(isDudeney(counter)){
      cout <<counter <<"\n";
      ++dudeneyN;
    }
  }
}