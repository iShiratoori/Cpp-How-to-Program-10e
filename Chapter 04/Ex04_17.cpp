/*
**  Filename:    Ex04_17.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Find the Largest)  
*/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter{1}, number{0}, largest{0};

    while (counter <= 10)
    {
        cout <<"Enter 10 number to find largest " <<counter <<": ";
        cin >>number;
        
        if(number > largest)
            largest = number;
        
        counter += 1;
    }

    cout <<"The largest Number: " <<largest <<endl;
    return 0;    
}
