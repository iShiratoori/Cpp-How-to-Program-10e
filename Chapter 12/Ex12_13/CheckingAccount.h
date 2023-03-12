/*
**  Filename:    CheckingAccount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class CheckingAccount
*/
#pragma once
#include "account.h"
class CheckingAccount final : public Account
{
public:
    CheckingAccount(std::string_view name, int id, double balance, double fee);
    ~CheckingAccount();

    virtual void debit(const double &amount) override;
    virtual void credit(const double &amount) override;

private:
    double m_fee;
};