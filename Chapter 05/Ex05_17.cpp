/*
**  Filename:    Ex05_17.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Calculating Sales) 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double totalValue{0.0};
    unsigned int productNumber{0}, product1{0}, product2{0}, product3{0}, product4{0}, product5{0};
    unsigned int quantity{0};

    cout <<"Enter product number or (-1 to display result): ";
    cin >>productNumber;
    while (productNumber != -1)
    {
        cout <<"Enter Quantity been sold: ";
        cin >>quantity;

        if(quantity == -1)
            break;

        switch (productNumber)
        {
        case 1:
            totalValue += 2.98 * quantity;
            product1 += quantity;
            break;
        case 2:
            totalValue += 4.50 * quantity;
            product2 += quantity;
            break;
        case 3:
            totalValue += 9.98 * quantity;  
            product3 += quantity;
            break;
        case 4:
            totalValue += 4.49 * quantity;
            product4 += quantity;
            break;
        case 5:
            totalValue += 6.87 * quantity;
            product5 += quantity;
            break;
        default:
            break;
        }

        cout <<"Enter product number or (-1 to display result): ";
        cin >>productNumber;
    }

    cout <<fixed <<setprecision(2);
    cout <<"Pnumber" <<"\t\tQsold" <<"\t\tRprice Each" <<"\t  Total\n";;
    for(int i{1}; i <=5; ++i){
        cout <<setw(7) <<i <<setw(14);
        if(i == 1)
            cout <<product1 <<setw(22) <<"$2.98" <<setw(8) <<"$" <<product1 * 2.98 <<"\n";
        else if( i == 2)
            cout <<product2 <<setw(22) <<"$4.50" <<setw(8) <<"$" <<product2 * 4.50 <<"\n";
        else if( i == 3)
            cout <<product3 <<setw(22) <<"$9.98" <<setw(8) <<"$" <<product3 * 9.98 <<"\n";
        else if( i == 4)
            cout <<product4 <<setw(22) <<"$4.49" <<setw(8) <<"$" <<product4 * 4.49 <<"\n";
        else
            cout <<product5 <<setw(22) <<"$6.87" <<setw(8) <<"$" <<product5 * 6.87 <<"\n";
    }

    cout <<"\nTotal retail value of all products sold: " <<totalValue <<endl;
    return 0;
}