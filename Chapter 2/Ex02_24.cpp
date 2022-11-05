//Ex2.24 (Odd or Even)
//Write a program that reads in two integers and determines and prints
//whether each integer, as well as the sum of the two integers is an odd number. 
//[Hint: Use the remainder operator (%). An odd number is not a multiple of two. 
//Any odd number has a remainder of one when divided by 2.]
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, sum;
    cout <<"Enter Two Numbers: ";
    cin >>number1 >> number2;

    if((number1 % 2) == 1)
        cout <<number1 <<" is Odd " <<endl;
    if((number2 % 2) == 1)
        cout <<number2 <<" is Odd " <<endl;

    if((number1 % 2) == 0)
        cout <<number1 <<" is Even " <<endl;
    if((number2 % 2) == 0)
        cout <<number2 <<" is Even " <<endl;

    sum = number1 + number2;
    if((sum % 2) == 1)
        cout <<sum <<" The sum of number1 and number2 is Odd " <<endl;
    if((sum % 2) == 0)
        cout <<sum <<" The sum of number1 and number2 is Even " <<endl;

    return 0;
}