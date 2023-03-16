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
class Account
{
public:
    Account(std::string theName, int intialValue)
    :name(theName){

        if(intialValue > 0)
            balance = intialValue;
    }

    void withdrawal(int valueToWithdrawal){           
        if(valueToWithdrawal > balance )
            std::cout <<"Withdrawal amount exceeded account balance." << std::endl;
        if(valueToWithdrawal < balance)
            balance = balance - valueToWithdrawal;
    }

    void deposit(int depositValue){
        if(depositValue > 0)
            balance = balance + depositValue;
    }
    void setName(std::string theName) {
        name = theName;
    }

    int getBalance(){
        return balance;
    }
    std::string getName(){
        return name;
    }

private:
    std::string name;
    int balance;
};
#endif