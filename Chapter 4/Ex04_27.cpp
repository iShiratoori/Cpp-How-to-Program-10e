/*
**  Filename:    Ex04_27.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  (Palindromes)
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int pNumbers{0}, a, b, c, d, e, count{1};
    cout <<"Enter five Palindrome numbers: ";
    cin >>pNumbers;

    
    a = pNumbers / 10000;
    b = pNumbers / 1000 % 10;
    c = pNumbers / 100 % 10;
    d = pNumbers / 10 % 10;
    e = pNumbers / 1 % 10;
    
    if(a == e)
        if(b == d)
            cout <<a <<" " <<b <<" " <<c <<" " <<d <<" " <<e <<" is Palindrome" <<endl;
        else
            cout <<"numbers you entered is not palindome";
    else
        cout <<"numbers you entered is not palindome";

}