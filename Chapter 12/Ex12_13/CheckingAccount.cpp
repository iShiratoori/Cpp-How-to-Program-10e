/*
**  Filename:    CheckingAccount.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class CheckingAccount implementation
*/
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string_view name, int id, double balance, double fee)
    : Account(name, id, balance), m_fee{fee}

{
}

CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::debit(const double &amount)
{
    m_fee *= amount;
    Account::debit(amount - m_fee);
}
void CheckingAccount::credit(const double &amount)
{
    Account::credit(amount + m_fee);
}