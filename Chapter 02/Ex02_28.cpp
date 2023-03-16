/*
**  Filename:    Ex2_28.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Digits of an Integer) 

Write a program that inputs a four-digit integer, separates the integer
into its digits and prints them in reverse order separated by two spaces each. 
[Hint: Use the integer division and remainder operators.] 
For example, if the user types in 4315, the program should print:
   5   1    3   4
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int degit_integer, number1, number2, number3, number4;

    cout <<"Enter Four Digit Integers: ";
    cin >>degit_integer;

    number4 = degit_integer / 1000;
    number3 = degit_integer / 100 % 10;
    number2 = degit_integer / 10 % 10;
    number1 = degit_integer % 10;

    cout << number1 <<"  "<< number2 <<"  " << number3 <<"  " << number4 <<endl;

    return 0;

}