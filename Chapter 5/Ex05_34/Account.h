/*
**  Filename:    Account.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem Account headerfile
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "dollarAmount.h"

class Account
{
public:
    Account(std::string theName, int dollars, int cents)
    :name(theName){
        if(dollars > 0){
            balance.setDollars(dollars);
            balance.setCents( cents );
        }
    }

    void withdrawal(DollarAmount valueToWithdrawal){           
        if(valueToWithdrawal.getDollars() > balance.getDollars() )
            std::cout <<"Withdrawal amount exceeded account balance." << std::endl;
        if(valueToWithdrawal.getDollars() < balance.getDollars())
            balance.subtract(valueToWithdrawal);
    }

    void deposit(DollarAmount depositValue){
        if(depositValue.getDollars() and depositValue.getCents() > 0){
            balance.add(depositValue);
        }
    }
    void setName(std::string theName) {
        name = theName;
    }

    std::string getBalance(){
        std::string gDollars{std::to_string(balance.getDollars())};
        std::string gCents{std::to_string(balance.getCents())};
        
        return gDollars + "." + gCents;
    }
    std::string getName(){
        return name;
    }

private:
    std::string name;
    DollarAmount balance{0, 0};
};
#endif