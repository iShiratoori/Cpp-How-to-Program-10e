/*
**  Filename:    Ex2_16.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Arithmetic) 

Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, 
and quotient of the two numbers.
*/ 
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    int sum, product, difference;
    cout <<"Enter two Numbers: ";
    cin >>number1 >>number2;

    sum = number1 + number2;
    cout <<"The Sum: " <<sum <<endl;
    
    product = number1 * number2;
    cout <<"The Product: " <<product <<endl;

    difference = number1 / number2;
    cout <<"The difference: " <<difference <<endl;

    return 0;
}