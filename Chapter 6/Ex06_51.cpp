/*
**  Filename:    Ex06_51.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Function Template minimum)
*/
#include <iostream>
using namespace std;

template<typename T>
T minimum(T arg1, T arg2){
    T minimumValue{arg1};

    if( minimumValue > arg2){
        minimumValue = arg2;
    }

    return minimumValue;
}

int main()
{
    int int1{7}, int2{4};
    char ch1{'F'}, ch2{'G'};
    float float1{2.5}, float2{2.2};

    cout <<"Smallest integer: " <<minimum(int1,int2) <<endl;
    cout <<"Smallest Character: " <<minimum(ch1, ch2) <<endl;
    cout <<"Smallest Floating-point: " <<minimum(float1, float2) <<endl;
}
