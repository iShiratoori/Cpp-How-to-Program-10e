/*
**  Filename:    Account.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem Account headerfile
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
class Account
{
public:
    Account(std::string theName, double intialValue)
    :name(theName){

        if(intialValue > 0)
            balance = intialValue;
    }

    void withdrawal(double valueToWithdrawal){           
        if(valueToWithdrawal > balance )
            std::cout <<"Withdrawal amount exceeded account balance." << std::endl;
        if(valueToWithdrawal < balance)
            balance = balance - valueToWithdrawal;
    }

    void deposit(double depositValue){
        if(depositValue > 0)
            balance = balance + depositValue;
    }
    void setName(std::string theName) {
        name = theName;
    }

    double getBalance(){
        return balance;
    }
    std::string getName(){
        return name;
    }

private:
    std::string name;
    double balance;
};
#endif