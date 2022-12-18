/*
**  Filename:    Ex04_19.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Find the Two Largest Numbers)
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int counter{1}, largest1{0}, largest2{0}, number{0};

    while (counter <= 10)
    {
        cout <<"Enter 10 numbers to display 2 largest " <<counter <<": ";
        cin >>number;
        

       if(number > largest1){
            largest2 = largest1;
            largest1 = number;
       }
        else{
            if(number > largest2)
                largest2 = number;
        }
        counter += 1;
    }

    cout <<"The 2 largest Numbers: " <<largest1 <<" " <<largest2 <<endl;
    return 0;
}
