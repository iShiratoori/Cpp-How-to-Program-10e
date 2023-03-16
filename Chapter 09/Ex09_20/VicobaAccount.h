/*
**  Filename:    VicobaAccount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: VicobaAccount class
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <fmt/format.h>

class VicobaAccount
{
public:
    VicobaAccount(double loan, int years);
    ~VicobaAccount();

    const void report() const;

    void setAmount(double amount);
    void setLoanDuration(int loanD);
    void setInterestRate(double rate);

    const double getAmount() const;
    const int getLoanDuration() const;
    const double getInterestRate() const;

private:
    double m_amount;
    int m_loanDuration{0};
    static inline double m_interestRate{0.02}; // 2%
};