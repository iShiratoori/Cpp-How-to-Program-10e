/*
**  Filename:    Ex05_15.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Triangle-Printing Program)
*/
#include <iostream>
using namespace std;

int main()
{
    // a)
    for(int row{1}; row <= 10; ++row){
        for(int col{1}; col <= row; ++col)
            cout <<"*";
        cout << endl;
    }

    // b)
    for(int row{10}; row >= 1; --row){
        for(int col{1}; col <= row; ++col)
            cout <<"*";
        cout << endl;
    }

    // c)
    for(int row{10}; row >= 1; --row)
    {
        for(int space{1}; space <= 10 - row; ++space)
            cout <<' ';
        for(int col{1}; col <= row; ++col)
            cout <<"*";

        cout <<endl;
    }
    
    // d)
    
    for (int row{1}; row <= 10; ++row)
    {
        for(int space{1}; space <= 10 - row; ++space)
            cout <<' ';
        for(int col{1}; col <= row; ++col)
            cout <<"*";
        
        cout <<endl;
    }
}