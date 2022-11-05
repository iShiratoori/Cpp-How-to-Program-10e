//Ex3.14 Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
public:
    Account(std::string sname, int sbalance)
    :name(sname)
    {
        setBalance(sbalance);
    }

    void withdrawal(int valueWithdrawal){
        if(valueWithdrawal > 0 && valueWithdrawal < balance)
            balance = balance - valueWithdrawal;
    }
    void deposit(int valueDeposit){
        if( valueDeposit > 0)
            balance = balance + valueDeposit;
    }
    void setName(std::string sname){
        name = sname;
    }
    void setBalance(int sbalance){
        if(sbalance > 0)
            balance = balance + sbalance;
    }

    std::string getName()  { return name;}
    int getBalance()       { return balance;}

    void DisplayAccountName(Account account)
    {
        std::cout <<"Account Name: " <<account.getName() <<" Balance is: " <<account.getBalance() <<std::endl;
    }
private:
    std::string name;
    int balance{0};

};

#endif