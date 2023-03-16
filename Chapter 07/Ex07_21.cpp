/*
**  Filename:    Ex07_21.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Workshop Summary) 
*/
#include <iostream>
#include <array>
#include <iomanip>
#include <random>
#include <gsl/gsl>
using namespace std;

int main()
{
    constexpr size_t numCraft{3};
    constexpr size_t numProduct{4};

    array<array<int, numProduct>, numCraft> stocks{0};
    bool exit = false;

    default_random_engine engine(gsl::narrow_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> ranCraft{1, 3}, ranProd{1, 4}, ranQual{1, 100};

    for(int eachMonth{1}; eachMonth <= 31; ++eachMonth){
        int productN{ranProd(engine)}, crafsPerson{ranCraft(engine)}, quality{ranQual(engine)};

        stocks.at(crafsPerson - 1).at(productN - 1) += quality;
    }
    //you can uncoment if u want to manually enter values but comment the above one
/*
    while (!exit)
    {        
        cout <<"Enter crafts person (1 to 3) or (-1 to exit): ";
        int craftsperson{0};
        cin >>craftsperson;

        if(craftsperson == -1)
            break;

        cout <<"Enter product number (1 to 4) or (-1 to exit): ";
        int  productNumber{0};
        cin >>productNumber;

        if(productNumber == -1)
            break;


        cout <<"Enter item Quantity: ";
        int itemQuantity{0};
        cin >>itemQuantity;

        
        // Update the appropriate element of the stock array
        stocks.at(craftsperson - 1).at(productNumber - 1) += itemQuantity;
    }
*/
    cout <<"\n";
    cout <<setw(26) << "Product 1" <<setw(12) <<" Product 2" <<setw(12) <<" Product 3" 
       <<setw(12) <<" Product 4"  <<setw(12) << "Total" << endl;

    int total{0}, i{0};
    for(const auto& row : stocks){
        cout <<"Craftsperson " <<++i;
        for(const auto& element : row){
            total += element;
            cout <<setw(12) <<element;
        }
        cout <<setw(12) <<total;
        cout <<endl;
    }

    cout <<setw(26) <<"=" <<setw(11) <<"="  <<setw(12) <<"=" <<setw(12) <<"=\n";;
    cout <<setw(14) << "Total";
    for (int j = 0; j < numProduct; j++)
    {
        int total = 0;
        for (const auto &row : stocks)
        {
            total += row[j];
        }
        cout <<setw(12) << total ;
  }

  return 0;

    return 0;
}