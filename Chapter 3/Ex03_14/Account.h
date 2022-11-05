//Ex3.14 Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
public:
    Account( unsigned int sAccountNumber, std::string sFirstName, std::string sLastName, double balance)
    :accountNumber(sAccountNumber),firstName(sFirstName), lastName(sLastName)
    {
        setBalance(balance);        
    }
    void withdrawal(int valueWithdrawal){
        if(valueWithdrawal > 0 && valueWithdrawal < balance)
            balance = balance - valueWithdrawal;
    }
    void deposit(int valueDeposit){
        if( valueDeposit > 0)
            balance = balance + valueDeposit;
    }
    void setFirstName(std::string sname){
        firstName = sname;
    }
    void setLastName(std::string sname){
        lastName = sname;
    }
    void setBalance(int sbalance){
        if(sbalance > 0)
            balance = balance + sbalance;
    }

    std::string getFirstName()  { return firstName;}
    std::string getLasName()    { return lastName;}
    int getAcccountNumber()     { return accountNumber;}
    int getBalance()            { return balance;}

    void DisplayAccountName(Account account)
    {
        std::cout <<"Account Number: " <<account.getAcccountNumber() <<std::endl;
        std::cout <<"Account Name: " <<account.getFirstName() <<" " <<getLasName() <<std::endl;
        std::cout <<"Balance is: " <<account.getBalance() <<std::endl;
        std::cout <<"\n";
    }
private:
     unsigned int accountNumber;
     std::string firstName, lastName;
     double balance;
};

#endif