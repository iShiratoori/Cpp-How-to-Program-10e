/*
**  Filename:    Ex04_30.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  (Fibonacci Sequence)
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Fibonacci{1}, firstNumb{0}, secondNumb{1}, sum{0};

    cout <<"Fibonacci Sequence: ";
    while (true){

        if(firstNumb == 0)
            cout <<firstNumb <<" ";

        if(firstNumb == 1)
            cout <<secondNumb <<" ";
        
        Fibonacci = firstNumb + secondNumb;
        firstNumb = secondNumb;
        secondNumb = Fibonacci;
   
        cout <<Fibonacci <<" ";
    }
    
}