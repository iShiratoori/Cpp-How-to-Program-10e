/*
**  Filename:    Ex07_14.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Duplicate Elimination with vector) 
*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    constexpr size_t valueSize{20};
    vector<int> duplicateValues{};
    array<int, valueSize> values{};

    int input{0};
    cout <<"Enter values between 10-100: ";
    for(int i{0}; i < values.size(); ++i){
        cin >>input;

        if(input >= 10 && input <= 100){
            bool isDuplicate = false;

            for(int j = 0; j <= i; ++j){
                if(values.at(j) == input){
                    isDuplicate = true;
                    break;
                }
            }
            
            if(isDuplicate){
                duplicateValues.push_back(input);
            }
            
            values.at(i) = input;
        }
    }

    cout <<"array values contains: ";
    for(const int& value : values){
        cout <<value <<" ";
    }

    cout <<"\narray values contains duplicated values: ";
    for(const int& value : duplicateValues){
        cout <<value <<" ";
    }
}