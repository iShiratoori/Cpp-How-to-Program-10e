/*
**  Filename:    Ex04_32.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem   (Sides of a Triangle)
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double a{0.0}, b{0.0}, c{0.0};

    cout <<"Enter 3 three nonzero double: ";
    cin >>a >>b >>c;

    if(a < b + c)
        if(b < a + c)
            if( c < a + b)
                cout <<"This values could represent sides of triangle" <<endl;
            else
                cout <<"This values could not represent sides of triangle" <<endl;
        else
            cout <<"This values could not represent sides of triangle" <<endl;
    else
        cout <<"This values could not represent sides of triangle" <<endl;

    return 0;
}