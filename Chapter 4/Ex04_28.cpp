/*
**  Filename:    Ex04_28.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  ((Printing the Decimal Equivalent of a Binary Number)
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int inputBinary{0}, decimal{0};

    cout <<"Input an integer containing only 0s and 1s: ";
    cin >>inputBinary;

    while(inputBinary > 0){

        int digitPositional{1};
        int digit{inputBinary % 10};
        decimal  += digit * digitPositional;
		inputBinary /= 10;
		digitPositional *= 2; 
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}