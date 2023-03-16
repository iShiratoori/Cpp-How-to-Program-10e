/*
**  Filename:    Account.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem  (Modified Account Class)
*/
#include "Account.h"
using namespace std;

int main()
{
    Account account1{"Abdirahman Hussein", 203.6};
    Account account2{"Abdullahi Hussein", 103.4};

    cout <<setprecision(2) <<fixed;
    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

    account1.withdrawal(120.78);
    account1.withdrawal(190.32);

    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

}

