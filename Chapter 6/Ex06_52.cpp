/*
**  Filename:    Ex06_52.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Function Template maximum)
*/
#include <iostream>
using namespace std;

template<typename T>
T maximum(T arg1, T arg2){
    T maximumValue{arg1};

    if( maximumValue < arg2){
        maximumValue = arg2;
    }

    return maximumValue;
}

int main()
{
    int int1{7}, int2{4};
    char ch1{'F'}, ch2{'G'};
    float float1{2.5}, float2{2.2};

    cout <<"Smallest integer: " <<maximum(int1,int2) <<endl;
    cout <<"Smallest Character: " <<maximum(ch1, ch2) <<endl;
    cout <<"Smallest Floating-point: " <<maximum(float1, float2) <<endl;
}