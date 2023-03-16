/*
**  Filename:    Ex05_11.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Find the Smallest Value) 
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int input{0};
    unsigned int counter{1};
    unsigned int smallest{0};
    
    cout <<"Enter Several integers to find Smallest: ";
    while (cin >> input)
    {
        if(counter == 1)
            smallest = input;
        
        if(input < smallest)
            smallest = input;

        ++counter;
    }

    cout <<"Smallest is: " <<smallest <<endl;

    return 0;
}