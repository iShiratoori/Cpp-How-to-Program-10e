/*
**  Filename:    Ex06_27.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Find the Minimum)
*/
#include <iostream>
using namespace std;

template<typename T>
T minimum(T value1, T value2, T value3){
  T minimumVal = value1;

  if( minimumVal > value2)
    minimumVal = value2;
  
  if(minimumVal > value3)
    minimumVal = value3;

    return minimumVal;
}

int main()
{
  double dvalue1{2.3}, dvalue2{1.7}, dvalue3{3.3};
  float  fvalue1{2.3}, fvalue2{1.3}, fvalue3{0.3};

  cout <<"double-presicion smallest Number is: " <<minimum(dvalue1, dvalue2, dvalue3);
  cout <<"\nfloating-point smallest Number is: " <<minimum(fvalue1, fvalue2, fvalue3);

  return 0;
}