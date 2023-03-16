/*
**  Filename:    Ex06_32.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Quality Points for Numeric Grades) 
*/
#include <iostream>
using namespace std;

int qualityPoints(int average);

int main()
{
  int inputGadre{0};
  cout <<"Enter Student grade: ";
  cin >>inputGadre;
  cout <<qualityPoints(inputGadre) <<endl;
}

int qualityPoints(int average){
if (average >= 90 && average <= 100) {
    return 4;
  } 
  else if (average >= 80 && average <= 89) {
    return 3;
  } 
  else if (average >= 70 && average <= 79) {
    return 2;
  } 
  else if (average >= 60 && average <= 69) {
    return 1;
  } 
  else {
    return 0;
  }
}