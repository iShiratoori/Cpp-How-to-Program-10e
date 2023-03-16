/*
**  Filename:    DollarAmount.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Displaying the Interest Rate in the DollarAmount Example)
*/

#include <iostream>
#include <iomanip>
#include "DollarAmount.h"
using namespace std;

int main()
{
    cout << "\nEnter integer interest rate and divisor:\n>";
    int rate;
    int divisor;
    cin >> rate >> divisor;

    DollarAmount balance{10000};
    cout << "\nInitial balance: " << balance.toString() << endl;

    cout <<"Ammount on Deposit" << endl;

    balance.addInterest(rate, divisor);

    cout << setw(20) << balance.toString()  <<"%" << endl;

    return 0;
}
