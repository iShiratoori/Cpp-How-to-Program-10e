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
    Account account1{"Abdirahman Hussein", 203};
    Account account2{"Abdullahi Hussein", 103};

    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

    account1.withdrawal(120);
    account1.withdrawal(190);

    cout <<"account1: " <<account1.getName() <<" And Balance: " <<account1.getBalance() <<endl;
    cout <<"account2: " <<account2.getName() <<" And Balance: " <<account2.getBalance() <<endl;

}

