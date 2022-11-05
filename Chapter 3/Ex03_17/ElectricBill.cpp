//Ex3.17 (Automating Electric Energy Purchases) 
#include "ElectricBill.h"

int main()
{
    ElectricBill eb1{10000};

    cout <<"Electric Bill after all deduction: " <<eb1.getAmounPaid() <<endl;
    cout <<"kWh will get: " <<eb1.getUnits() <<endl;
}