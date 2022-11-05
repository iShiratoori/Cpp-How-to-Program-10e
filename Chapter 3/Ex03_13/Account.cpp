//Ex3.13 (Removing Duplicated Code in the main Function)

#include "Account.h"

int main()
{
    Account account1{"Abdirahman Hussein", 150};
    Account account2{"Abdullahi Hussein", 320};

    account1.DisplayAccountName(account1);
    account2.DisplayAccountName(account2);

    account1.withdrawal(100);
    account2.deposit(100);

    std::cout <<"\nAfter Deposit and Withdrawal\n" <<std::endl;
    account1.DisplayAccountName(account1);
    account2.DisplayAccountName(account2);

}
