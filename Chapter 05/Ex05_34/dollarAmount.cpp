/*
**  Filename:    Account.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Account Class That Stores a DollarAmount)
*/
#include "Account.h"
using namespace std;

int main()
{
    Account account1{"Abdirahman Hussein", 203, 45};
    Account account2{"Abdullahi Hussein", 103, 15};

    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

    DollarAmount amountToWithdraw{15, 35};

    account1.withdrawal(amountToWithdraw);
    account2.withdrawal(amountToWithdraw);

    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

}