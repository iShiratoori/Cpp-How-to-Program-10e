/*
**  Filename:    Ex2_23.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Largest and Smallest Integers)

Write a program that reads in five integers and determines
and prints the largest and the smallest integers in the group. 
Use only the programming techniques you learned in this chapter
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    int smallest, largest;

    cout <<"Enter Five integer values: ";
    cin >>num1 >>num2 >>num3 >>num4 >>num5;

    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        smallest = num1;
    if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        smallest = num2; 
    if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        smallest = num3;
    if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) 
        smallest = num4;
    if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4) 
        smallest = num5;

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
        largest = num1;
    if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
        largest = num2; 
    if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
        largest = num3;
    if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) 
        largest = num4;
    if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) 
        largest = num5;

    cout <<"Smallest is: " <<smallest <<endl;
    cout <<"Largest is: " <<largest <<endl;

    return 0;
}