//Ex03.10 (Invoice class) 
//Create a class called Invoice that a hardware store might use to represent an invoice 
//for an item sold at the store.  An Invoice should include six data members-a part number (type string), 
//a part description (type string), a quantity of the item being purchased (type int),
//a price per item (type int) a value-added tax (VAT) rate as a decimal (type double) and a discount
//rate as a decimal(type double).  Your class should have a constructor that initializes 
//the six data members. The constructor should initialize the first four data members with values 
//from parameters and the last two data members to default values of 0.20 per cent 
//and zero respectively. Provide a set and a get functions for each data member. In addition, 
//provide a member function named getInvoiceAmount that calculates 
//the invoice amount (i.e., multiplies the quantity by the price per item and applies 
//the tax and discount amounts), then returns the amount. Have the set data members 
//perform validity checks on their parameters—if a parameter value is not positive, it should be
//left unchanged. Write a driver program to demonstrate Invoice’s capabilities
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