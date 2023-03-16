/*
**  Filename:    Ex07_19.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Craps Game Modification)
*/
#include <iostream>
#include <array>
#include <stdexcept>
using namespace std;

const size_t sizeInteger1{7};
const size_t sizeInteger2{10};

void outputIntegers(const array<int, sizeInteger1> items);
void inputIntegers(array<int, sizeInteger1>& items);

int main()
{
    array<int, sizeInteger1> integer1{};
    array<int, sizeInteger2> integer2{};

    cout <<"Size of vector integer1 is " <<integer1.size()
        <<"\nVector after initialization: ";
    outputIntegers(integer1);

    cout <<"Size of vector integer1 is " <<integer2.size()
        <<"\nVector after initialization: ";
    outputIntegers(integer2);

    cout <<"Input 17 integers: ";
    inputIntegers(integer1);
    inputIntegers(integer2);

    cout <<"\nInteger1 values: ";
    outputIntegers(integer1);
    cout <<"Integer2 values: ";
    outputIntegers(integer2);

    cout <<"\nEvaluating: integer1 != integer2" <<endl;
    if(integer1 != integer2){
        cout <<"integer1 and integer2 does not equal" <<endl; 
    }

    array<int, sizeInteger1> integer3{integer1};    
    cout <<"\nSize of vector integer3 is " <<integer3.size()
        <<"\nVector after initialization: ";
    outputIntegers(integer3);

    cout <<"\nAssigning integer2 to integer1" <<endl;
    integer1 = integer2;
    if(integer1 == integer2){
        cout <<"integer1 and integer2 are equal" <<endl;
    }

    cout <<"\ninteger1: ";
    outputIntegers(integer1);
    cout <<"integer2: ";
    outputIntegers(integer2);

    cout <<"\ninteger1.at(5): " <<integer1.at(5) <<endl;

    cout <<"\nAssigning value 1000 integer1.at(5): " <<endl;
    integer1.at(5) = 1000;
    outputIntegers(integer1);

    if(integer1 != integer2){
        cout <<"integers and integer2 are not equal" <<endl;
    }

    try
    {
        cout <<"\nAttempting to display integer1.at(15): " <<endl;
        cout <<integer1.at(15) <<endl;
    }
    catch(const out_of_range& ex)
    {
        cerr <<"An Exception occured: " << ex.what() << '\n';
    }

    cout <<"\nCurrent size of integer3: " <<integer3.size() <<endl;
    integer3.push_back(1000);
    cout <<"New integer3 size: " <<integer3.size() <<endl;
    cout <<"integer3 now contains: ";
    outputIntegers(integer3);
    
    return 0;
}

void outputIntegers(const array<int, sizeInteger1> items){
    for(const auto item : items){
        cout <<item <<" ";
    }
    cout <<endl;
}

void inputIntegers(array<int, sizeInteger1>& items){
    for(auto& item : items){
        cin >>item;
    }
}
