/*
**  Filename:    Ex04_20.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Validating User Input)
*/ 

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int userInput{0}, validated{0};

    while (validated != 1)
    {
        cout <<"Enter 1 or 2: ";
        cin >>userInput;

        if(userInput == 1)
            validated = 1;
        else if( userInput == 2)
            validated = 1;
        else
            validated = 0;
    }
        
}
