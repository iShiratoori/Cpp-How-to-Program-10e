/*
**  Filename:    Ex05_25.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Removing break and continue)
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int counter;
    bool breakLoop{false};

    for(counter = 1; counter <= 10 && !breakLoop; ++counter)
    {
        if(counter == 5)
            breakLoop = true;
            
        cout <<counter <<" ";
    }

    cout <<"\nBroke out of Loop counter is " << counter <<endl;

    return 0;
}