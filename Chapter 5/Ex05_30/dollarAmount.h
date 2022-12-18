/*
**  Filename:    dollarAmount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Ex5.30 - Ex5.32

Description of the problem  dollarAmount.h
*/
#ifndef DOLLARAMOUNT_H
#define DOLLARAMOUNT_H

#include <string>
#include <cmath>

class DollarAmount
{
public:
    explicit DollarAmount(int64_t value) : amount(value){ }
    
    //Ex5.30
    DollarAmount(int64_t dollars, int64_t cents){
                
        int64_t addition = (dollars * 100) + cents;
        addition *= 100;
        addition /= 100;
            
        DollarAmount total{addition};

        add(total);
    } // end Ex5.30

    //Ex5.31
    void devide(int d){
        DollarAmount division{ amount / d};

        subtract(division);
    }// end Ex5.31

    void add(DollarAmount right){
        amount += right.amount;
    }

    void subtract(DollarAmount right){
        amount -= right.amount;
    }

    //Ex5.32 banker’s rounding
    void addInterest(int rate, int divisor){
        DollarAmount interest{ (amount * rate + divisor / 2) / divisor};

        add(interest);
        bankersRounding();
    } //endl Ex5.32

    void bankersRounding() {

        int dollar = amount / 100;
        int cents = amount % 100;

        // if it is equally distant from upper and lower integers,
        // then apply banker's rounding
        if (cents > 50)
        {
            // if the lower integer is zero, then round down to zero
            if(dollar == 0){
                amount -= 50;
            }
            // if the lower integer is even, then round down
            else if ( ( dollar % 2 ) == 0){
                amount -= 50;
            }
            // else the lower integer is odd, so round up
            else {
                    amount += 50;
            }
        }
    } //endl Ex5.32

    std::string toString() const{
        std::string dollars{std::to_string(amount/ 100)};
        std::string cents{std::to_string(std::abs(amount % 100))};

        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }
private:
    int64_t amount{0};
};

#endif
