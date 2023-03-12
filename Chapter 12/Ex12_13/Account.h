/*
**  Filename:    Account.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: (Polymorphic Banking Program Using Account Hierarchy)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <string>
#include <string_view>

class Account
{
public:
    explicit Account(std::string_view name, int id, double balance);
    virtual ~Account() = default;

    double getBalance() const;
    std::string getName() const;
    int getId() const;

    virtual void debit(const double &amount);
    virtual void credit(const double &amount);

private:
    std::string m_name;
    int m_id{0};
    double m_balance;
};