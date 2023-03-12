/*
**  Filename:    SavingAccount.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class SavingAccount implementation
*/
#include "SavingAccount.h"

SavingAccount::SavingAccount(std::string_view name, int id, double balance, double interest)
    : Account(name, id, balance), m_interest{interest}
{
    if (interest < 0.0)
    {
        throw std::invalid_argument{"interest is less than 0.0"};
    }
}
SavingAccount::~SavingAccount()
{
}

const double SavingAccount::calculateInterest() const
{
    return getBalance() * m_interest;
}