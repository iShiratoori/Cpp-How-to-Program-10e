/*
**  Filename:    dollarAmount.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Ex5.30 - Ex5.32

Description of the problem  (DollarAmount Constructor with Two Parameters)
*/
#include <iostream>
#include <iomanip>
#include "DollarAmount.h"
using namespace std;

int main()
{
    DollarAmount d1{12345};
    DollarAmount d2{1576};

    //Ex5.30
    DollarAmount d3{123, 45};
    DollarAmount d4{15, 76};
    
    cout <<"After adding d3 (" <<d3.toString() <<") into a d4 (" <<d4.toString() <<"), d4 = ";
    d4.add(d3);
    cout <<d4.toString() <<"\n";

    cout <<"After Subrtracting d3 (" <<d3.toString() <<") into a d4 (" <<d4.toString() <<"), d4 = ";
    d4.subtract(d3);
    cout <<d4.toString() <<"\n"; //end Ex5.30

    //Ex5.31
    cout <<"After Deviding d3 ( " <<d3.toString() <<") by 2 d3 = ";
    d3.devide(2);
    cout <<d3.toString() <<"\n"; //end Ex5.31

    //Ex5.32    
    cout << "Enter integer interest rate and divisor. For example:\n"
        << "for     2%, enter:    2 100\n"
        << "for   2.3%, enter:   23 1000\n"
        << "for  2.37%, enter:  237 10000\n"
        << "for 2.375%, enter: 2375 100000\n";
    int rate; // whole-number interest rate
    int divisor; // divisor for rate
    cin >> rate >> divisor;

    DollarAmount balance{1000, 0}; // initial principal amount in pennies
    cout << "\nInitial balance: " << balance.toString() << endl;

    // display headers
    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

    // calculate amount on deposit for each of ten years
    for (unsigned int year{1}; year <= 10; year++) {
        // increase balance by rate % (i.e., rate / divisor)
        balance.addInterest(rate, divisor);

        // display the year and the amount
        cout << setw(4) << year << setw(20) << balance.toString() << endl;
    }    
    
    return 0;
}


