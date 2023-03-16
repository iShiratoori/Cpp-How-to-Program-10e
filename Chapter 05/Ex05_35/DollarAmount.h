/*
**  Filename:    DollarAmount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  DollarAmount.h
*/

#ifndef DOLLARAMOUNT_H
#define DOLLARAMOUNT_H

#include <string>
#include <cmath>

class DollarAmount
{
public:
    explicit DollarAmount(int64_t value) : amount(value){ }

    void add(DollarAmount right){
        amount += right.amount;
    }

    void subtract(DollarAmount right){
        amount -= right.amount;
    }

    void addInterest(int rate, int divisor){
        //DollarAmount interest{ (amount * rate + divisor / 2) / divisor};
        int64_t interest{ (amount * rate + divisor / 2) / divisor};

        //add(interest)
        amount = interest;

    }

    double getInterest(int rate, int divisor){
        return (amount * rate + divisor / 2) / divisor;
    }

    std::string toString() const{
        std::string dollars{std::to_string(amount/ 100)};
        std::string cents{std::to_string(std::abs(amount % 100))};

        return dollars + "." + cents;
    }
private:
    int64_t amount{0};
};

#endif
