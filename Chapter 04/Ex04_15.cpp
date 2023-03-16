/*
**  Filename:    Ex04_15.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Employee Leave Calculator) 
*/ 

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
  double hoursWorked{0.0}, accruedLeave{0.0};
  cout <<"Enter number of hours worked (-1 to end): ";
  cin >>hoursWorked;

  cout <<setprecision(2) <<fixed;
  while (hoursWorked != -1)
  {
    accruedLeave = 2 + (hoursWorked * 0.1);
    cout <<"Accrued leave: 3.05 hours: " <<accruedLeave <<endl;

    
    cout <<"Enter number of hours worked (-1 to end: ";
    cin >>hoursWorked;
  }

  return 0;
}