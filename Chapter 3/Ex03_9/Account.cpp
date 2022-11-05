//Ex03.9 Modified Account Class
// Modify class Account (Fig. 3.8) to provide a member function
//called withdraw that withdraws money from an Account. Ensure that the withdrawal amount does
//not exceed the Account’s balance. If it does, the balance should be left unchanged and the member
//function should display a message indicating "Withdrawal amount exceeded account balance."
//Modify class AccountTest (Fig. 3.9) to test member function withdraw

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

