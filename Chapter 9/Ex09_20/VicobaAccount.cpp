/*
**  Filename:    VicobaAccount.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: class VicobaAccount class emplementtion
*/
#include "VicobaAccount.h"

VicobaAccount::VicobaAccount(double loan, int loanD)
{
    setLoanDuration(loanD);
    setAmount(loan);
}
VicobaAccount::~VicobaAccount()
{
}

void VicobaAccount::setAmount(double amount)
{
    if (0 >= amount)
    {
        throw std::invalid_argument{"Amount barrowed must be greater 0"};
    }
    m_amount = amount;
}
void VicobaAccount::setLoanDuration(int loanD)
{
    if (0 >= loanD)
        throw std::invalid_argument{"Loan duration must be greater 0"};
    m_loanDuration = loanD;
}
void VicobaAccount::setInterestRate(double rate)
{
    if (rate < getInterestRate())
    {
        throw std::invalid_argument{"The new interest rate is less than the fixed interest"};
    }
    m_interestRate = rate;
}

const double VicobaAccount::getAmount() const { return m_amount; }
const int VicobaAccount::getLoanDuration() const { return m_loanDuration; }
const double VicobaAccount::getInterestRate() const { return m_interestRate; }

const void VicobaAccount::report() const
{
    std::cout << fmt::format("Amount barrowed {} with \nanual rate interest of {}%\nand loan duration is {} year\n",
                             getAmount(), getInterestRate() * 100, getLoanDuration());

    std::cout << fmt::format("Total interest is: {},\n",
                             (getAmount() * getInterestRate()) * getLoanDuration());
}