/*
**  Filename:    Ex04_18.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Tabular Output) 
*/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int counter{1};
    
    cout <<"N" <<"\t5*N" <<"\t10*N" <<"\t15*N" <<endl;
    while( counter <= 12){
        cout <<counter <<"\t" <<5 * counter <<"\t" <<10 * counter <<"\t" <<15 * counter <<endl;
        counter += 1;
    }
    
    return 0;
}
