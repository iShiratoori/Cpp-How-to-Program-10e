/*
**  Filename:    SavingAccount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class SavingAccount
*/
#include "Account.h"
#pragma once

class SavingAccount final : public Account
{
public:
    explicit SavingAccount(std::string_view name, int id, double balance, double interest);
    ~SavingAccount();
    const double calculateInterest() const;

private:
    double m_interest{0.0};
};