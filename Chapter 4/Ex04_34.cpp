/*
**  Filename:    Ex04_33.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem   (Sides of a Right Triangle)
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a{0}, b{0}, c{0};

    cout <<"Enter 3 three nonzero integer: ";
    cin >>a >>b >>c;

    if(a * a == b * b + c * c)
        if(b * b == a * a + c * c)
            if( c * c == a * a + b * b)
                cout <<"They're the sides of a right triangle." <<endl;
            else
                cout <<"They are not sides of triangle" <<endl;
        else
            cout <<"They are not sides of triangle" <<endl;
    else
        cout <<"They are not sides of triangle" <<endl;

    return 0;
}