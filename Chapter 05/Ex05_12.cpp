/*
**  Filename:    Ex05_12.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem (Calculating the Product of the Multiples of 3)
*/
#include <iostream>
using namespace std;

int main()
{
    int product{3};

    for(unsigned int counter{1}; counter <= 50; ++counter)
    {
        if(counter < 3 )
            continue;
            
        cout <<product  <<" x " <<counter  <<" = " <<product * counter <<"\n";
    }
}