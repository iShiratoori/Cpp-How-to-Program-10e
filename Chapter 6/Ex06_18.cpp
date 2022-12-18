/*
**  Filename:    Ex06_18.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem (Exponentiation)
*/
#include <iostream>
using namespace std;

int Exp(int base, int exp){
    int result{base};

    for(int counter{1}; counter <= exp - 1 ; ++counter){
        result *= base;
    }
    return result;
}

int main()
{
    cout <<Exp(3,3);
}