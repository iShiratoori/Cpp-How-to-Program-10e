/*
**  Filename:    Account.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class Account Implementation
*/
#include "Account.h"

Account::Account(std::string_view name, int id, double balance)
    : m_name{name}, m_id{id}, m_balance{balance}
{
    if (id < 0)
    {
        throw std::invalid_argument{"Inavlid ID"};
    }

    if (balance < 0.0)
    {
        throw std::invalid_argument{"Balance is less than 0.0"};
    }
}

void Account::debit(const double &amount)
{
    if (amount > m_balance)
    {
        throw std::invalid_argument{"Unsuffient money to withdraw"};
    }
    m_balance -= amount;
}
void Account::credit(const double &amount)
{
    m_balance += amount;
}
double Account::getBalance() const
{
    return m_balance;
}
std::string Account::getName() const
{
    return m_name;
}
int Account::getId() const
{
    return m_id;
}