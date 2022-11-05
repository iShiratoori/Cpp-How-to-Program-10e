/*
**  Filename:    Ex2_25.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Factors) 

Write a program that reads in three integers and determines and prints 
if the first two integers are factors of the second. [Hint: Use the remainder operator (%).]
*/
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;

    cout <<"Enter 3 integers Values: ";
    cin >>number1 >>number2 >>number3;

    if((number1 + number2) % number3 == 0)
        cout <<number1 << " " <<number2 <<" are factors of " <<number3;
        
    if((number1 + number2) % number3 == 1)
        cout <<number1 << " " <<number2 <<" are not factors of " <<number3;

    return 0;
}