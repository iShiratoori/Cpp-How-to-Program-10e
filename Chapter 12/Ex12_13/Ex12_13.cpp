
#include <iostream>
#include <vector>
#include <variant>

#include "SavingAccount.h"
#include "CheckingAccount.h"
int main()
{
    std::vector<Account *> accounts;

    SavingAccount account1{"Abdirahman", 1, 5000, 0.02};
    CheckingAccount account2{"Abdullahi", 2, 100, 0.01};

    accounts.push_back(&account1);
    accounts.push_back(&account2);

    for (auto account : accounts)
    {
        double amount;
        std::cout << fmt::format("\nBalance is ${:.2f} ({}) ({})\nWithdraw amount $",
                                 account->getBalance(), account->getName(), typeid(*account).name());
        std::cin >> amount;
        account->debit(amount);
        std::cout << fmt::format("Upadted balance is ${:.2f} ({}) ({})\n",
                                 account->getBalance(), account->getName(), typeid(*account).name());
    }
    return 0;
}