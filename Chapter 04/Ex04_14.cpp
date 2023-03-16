/*
**  Filename:    Ex04_14.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Credit Limits) 

*/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int accountNumb{0};
    double newBalance, beginingBalance, creditLimit, totalCharges, totalCredit;

    cout <<"Enter account number or (-1 to exit): ";
    cin >>accountNumb;

    cout <<setprecision(2) <<fixed;
    while(accountNumb != -1){
        
        cout <<"Enter beginning balance: ";
        cin >>beginingBalance;
        
        cout <<"Enter total charges: ";
        cin >>totalCharges;
        
        cout <<"Enter total credits: ";
        cin >>totalCredit;
        
        cout <<"Enter credit limit: ";
        cin >>creditLimit;

        newBalance = beginingBalance + totalCharges - totalCredit;
        if(newBalance > creditLimit)
        {
            cout <<"Account: " <<accountNumb <<endl; 
            cout <<"Credit limit: " <<creditLimit <<endl;
            cout <<"Balance: " <<newBalance <<endl;
            cout <<"Credit Limit Exceeded." <<endl;
        }
        if(newBalance < creditLimit)
        {
            cout <<"New balance: " <<newBalance <<endl;
        }
        cout <<"Enter account number or (-1 to exit): ";
        cin >>accountNumb;
    }

    return 0;
}