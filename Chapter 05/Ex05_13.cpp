/*
**  Filename:    Ex05_13.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem (Factorials)
*/
#include <iostream>
using namespace std;

void factorial(int n){
    long long counter{n}, total{1};

    while (counter > 0){
        if(counter != 1) 
            cout <<counter <<" . ";
        else
            cout <<counter <<" = ";

        total *= counter;
        --counter;
    }
    cout <<total <<endl;
}


void toHunderFactorial(int n){
    int counter{n};
    unsigned long long int total{1};

    while (counter > 0){
        total *= counter;
        --counter;
    }
    cout <<"factorial of " <<n <<": " << total <<endl;
}

int main()
{

    for(int counter{1}; counter <= 100; ++counter)
    {
        if(counter <= 20){ // this prints factorial of 5 like this 5 : 5 . 4 . 3 . 2 . 1 = 120
            cout << counter <<": " ;
            factorial(counter);
        }
        else{ // beyond factorial 20 and only prints the result
            //toHunderFactorial(counter);
        }
    }


}