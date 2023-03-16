/*
**  Filename:    Ex05_16.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Bar-Chart Printing Program)
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int number{0}, a{0}, b{0}, c{0}, d{0}, e{0};
    cout <<"Enter 5 integer numbers between 1-9 (12345): ";
    cin >>number;

    a = number / 10000;
    b = (number / 1000) % 10;
    c = (number / 100) % 10;
    d = (number / 10 ) % 10;
    e = (number / 1) % 10;
    
    for(unsigned int counter{a}; counter > 0; --counter){
        cout <<a;
        for(unsigned int counter1{a}; counter1 > 0; --counter1){
            cout <<a;
        }
        cout <<endl;
    }

    
    for(unsigned int counter{b}; counter > 0; --counter){
        cout <<b;
        for(unsigned int counter1{b}; counter1 > 0; --counter1){
            cout <<b;
        }
        cout <<endl;
    }
    
    
    for(unsigned int counter{c}; counter > 0; --counter){
        cout <<c;
        for(unsigned int counter1{c}; counter1 > 0; --counter1){
            cout <<c;
        }
        cout <<endl;
    }
    
    
    for(unsigned int counter{d}; counter > 0; --counter){
        cout <<d;
        for(unsigned int counter1{d}; counter1 > 0; --counter1){
            cout <<d;
        }
        cout <<endl;
    }
    
    for(unsigned int counter{e}; counter > 0; --counter){
        cout <<e;
        for(unsigned int counter1{e}; counter1 > 0; --counter1){
            cout <<e;
        }
        cout <<endl;
    }
    return 0;
}