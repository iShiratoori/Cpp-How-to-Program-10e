/*
**  Filename:    Ex05_36.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem (Showing That double Values Are Approximate)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignValue{123.02};

    for(int count = 0; count <= 50; ++count)
    {
        cout <<setprecision(count) <<fixed;
        cout <<count <<":" <<assignValue <<endl;
    }
    return 0;
}