/*
**  Filename:    Invoice.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem  (Invoice class) 
*/
#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    Invoice item1{"1", "Lump", 10, 2};
    Invoice item2{"2", "chair", 5, 17, 0.25, 0};
    Invoice item3{"3", "shoes", 3, 6, 0.30, 2};

    cout <<"Parts Number\t Parts Description\tQuantity     Price Per Item\t VAT\t Discount Rate\t Invoice Amount" <<endl;
    cout <<item1.getpNumber() <<"\t\t\t"<<item1.getpDescription()<<"\t\t" <<item1.getQuantityPurchased()
        <<"\t\t" << item1.getPricePerItem() <<"\t\t " <<item1.getVAT() <<"\t\t" <<item1.getDiscountRate()
        <<"\t\t" <<item1.getInvoiceAmount() <<endl;

    cout <<item2.getpNumber() <<"\t\t\t"<<item2.getpDescription()<<"\t\t" <<item2.getQuantityPurchased()
        <<"\t\t" << item2.getPricePerItem() <<"\t\t " <<item2.getVAT() <<"\t\t" <<item2.getDiscountRate()
        <<"\t\t" <<item2.getInvoiceAmount() <<endl;

    cout <<item3.getpNumber() <<"\t\t\t"<<item3.getpDescription()<<"\t\t" <<item3.getQuantityPurchased()
        <<"\t\t" << item3.getPricePerItem() <<"\t\t " <<item3.getVAT() <<"\t\t" <<item3.getDiscountRate()
        <<"\t\t" <<item3.getInvoiceAmount() <<endl;

    item1.setDiscountRate(10);
    item2.setDiscountRate(10);
    item3.setDiscountRate(10);
    
    cout <<"\n\t\t================ AFTER DISCOUNT==================\n\n";
    
    cout <<"Parts Number\t Parts Description\tQuantity     Price Per Item\t VAT\t Discount Rate\t Invoice Amount" <<endl;
    cout <<item1.getpNumber() <<"\t\t\t"<<item1.getpDescription()<<"\t\t" <<item1.getQuantityPurchased()
        <<"\t\t" << item1.getPricePerItem() <<"\t\t " <<item1.getVAT() <<"\t\t" <<item1.getDiscountRate()
        <<"\t\t" <<item1.getInvoiceAmount() <<endl;

    cout <<item2.getpNumber() <<"\t\t\t"<<item2.getpDescription()<<"\t\t" <<item2.getQuantityPurchased()
        <<"\t\t" << item2.getPricePerItem() <<"\t\t " <<item2.getVAT() <<"\t\t" <<item2.getDiscountRate()
        <<"\t\t" <<item2.getInvoiceAmount() <<endl;

    cout <<item3.getpNumber() <<"\t\t\t"<<item3.getpDescription()<<"\t\t" <<item3.getQuantityPurchased()
        <<"\t\t" << item3.getPricePerItem() <<"\t\t " <<item3.getVAT() <<"\t\t" <<item3.getDiscountRate()
        <<"\t\t" <<item3.getInvoiceAmount() <<endl;

    return 0;
}