/*
**  Filename:    Invoice.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem  Invoice.h
*/
#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice
{
public:
    Invoice(std::string setpNumber, std::string spDescrition, int sQuantity, int sppItem, double sVAT = 0.20, double sDiscountRate = 0.0)
    :pNumber(setpNumber), pDescription(spDescrition), quantityPurchased(sQuantity), pricePerItem(sppItem)
    {
        if (sVAT >= 0.20)
        {
            VAT = sVAT;
            discountRate = sDiscountRate;
        }
    }

    void setpNumber(std::string setpNumber) {
        pNumber = setpNumber;
    }
    void setpDescription(std::string setpDescription){
        pDescription = setpDescription;
    }
    void setQuantityPurchased(int sQuantity){
        if(sQuantity > 0)
            quantityPurchased = sQuantity;
    }
    void setPricePerItem(int sppItem){
        if(sppItem > 0)
            pricePerItem = sppItem;
    }
    void setVAT(double sVAT){
        if(sVAT > 0)
            VAT = sVAT;
    }
    void setDiscountRate(double sDiscountRate){
        if(sDiscountRate > 0)
            discountRate = sDiscountRate;
    }
    
    std::string getpNumber()               { return pNumber; }
    std::string getpDescription()          { return pDescription; }
    int getPricePerItem()                  { return pricePerItem;}
    int getQuantityPurchased()             { return quantityPurchased;}
    double getVAT()                        { return VAT;}
    double getDiscountRate()               { return pricePerItem;}

    double getInvoiceAmount(){
        double invoiceAmount = (quantityPurchased * pricePerItem ) + VAT - discountRate;            
        return invoiceAmount;
    }
private:
    std::string pNumber, pDescription;
    int quantityPurchased{0}, pricePerItem{0};
    double VAT{0.20}, discountRate{0.0};
};

#endif