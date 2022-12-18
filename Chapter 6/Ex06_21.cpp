/*
**  Filename:    Ex06_21.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Multiple of 3) 
*/
#include <iostream>
using namespace std;

bool isMultipleOf3(int n){
    if( n % 3 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    for(int counter{1}; counter <= 10; ++counter)
    {
        if(isMultipleOf3(counter)){
            cout <<counter <<" is   a multiple of 3" <<endl; 
        }
        else{
            cout <<counter <<" is not multiple of 3" <<endl; 
        }
    }

}