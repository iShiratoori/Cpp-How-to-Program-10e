//Ex2.18 (Comparing Integers) 
//Write a program that asks the user to enter two integers, obtains the
//numbers from the user, then prints the larger number followed by the words "is larger." 
//If the numbers are equal, print the message "These numbers are equal."
#include <iostream>
using namespace std;

int main()
{
    int integer1;
    int integer2;
    cout <<"Enter Two integers: ";
    cin >> integer1 >>integer2;

    if(integer1 > integer2)
    {
        cout <<integer1 <<" is larger." <<endl;
    }
    if(integer2 > integer1)
    {
        cout <<integer2 <<" is larger."<<endl;
    }
    if(integer1 == integer2)
    {
        cout <<"These numbers are equal." <<endl;
    }
    
    return 0;
}
