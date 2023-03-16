/*
**  Filename:    Ex2_09.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem

Write a single C++ statement or line that accomplishes each of the following:
  a) Print the message "Welcome to the maximal heart rate calculator".
  b) Assign the product of variables b and c to variable a.
  c) State that a program calculates the maximal heart rate of an individual, (i.e., use text
     that helps to document a program).
  d) Input three integer values from the keyboard into integer variables a, b and c.
*/
#include <iostream>

int main()
{
    int b;
    int c;
    int a;
    std::cout <<"Welcome to the maximal heart rate calculator\n";
    std::cout <<"Please enter 3 integers values: ";
    std::cin >> a >> b >> c;
    return 0;
}