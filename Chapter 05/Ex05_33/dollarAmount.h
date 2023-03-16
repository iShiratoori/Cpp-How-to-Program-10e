/*
**  Filename:    dollarAmount.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  dollarAmount.h
*/
#ifndef DOLLARAMOUNT_H
#define DOLLARAMOUNT_H

#include <string>
#include <cmath>

class DollarAmount
{
public:
    DollarAmount(int64_t sDollars, int64_t sCents)  {
        setDollars(sDollars);
        setCents(sCents);
    }
    
    void devide(int d){
        DollarAmount division{getDollars() / 2, getCents() / 2};

        subtract(division);
    }

    void add(DollarAmount value){
        dollars += value.getDollars();
        if(value.getCents() >= 100){
            dollars += 1;
            cents += value.getCents() - 100;
        }
        else
            cents = value.getCents();
    }

    void subtract(DollarAmount value){
        dollars -= value.getDollars();
 
        if(cents < value.getCents()){
            dollars = dollars + (static_cast<double>(cents) - value.getCents()) / 100;
            cents -= value.getCents() - 100;
        }
        else{
            cents -= value.getCents();
        }
    }

    void setDollars(int64_t sDollar){
            dollars = sDollar;
    }
    void setCents(int64_t sCents){
        cents = sCents;
    }

    int64_t getDollars() { return dollars; }
    int64_t getCents()  { return cents; }

    void addInterest(int rate, int divisor){
        DollarAmount interest{((getDollars() * rate + divisor / 2 ) / divisor),
                                getCents() * rate};
        
        add(interest);
        bankersRounding();
    }
    
    void bankersRounding() {

        // if it is equally distant from upper and lower integers,
        // then apply banker's rounding
        if (getCents() > 50)
        {
            dollars += 1;
            cents -= 50;
        }
    }

    std::string toString() const{
        std::string gDollars{std::to_string(dollars)};
        std::string gCents{std::to_string(cents)};
        
        return gDollars + "." + (gCents.size()  == 1 ? "0" : "") + gCents;
    }
private:
    int64_t dollars{0};
    int64_t cents{0};
};

#endif
