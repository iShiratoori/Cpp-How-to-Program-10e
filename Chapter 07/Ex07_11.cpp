/*
**  Filename:    Ex07_11.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Server Income Ranges)
*/
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    //a) Initialize the 10 elements of double array values to 0.5.
    array<double, 10> values{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5};


    //b) Add 1 to every second element of double array values.
    for(double& element : values){
        element += 1;
    }

    //c) Read 5 values from the user and store in the double array values.
    double input{0};
    cout <<"Enter 5 floating-point values: ";
    for(int i{0}; i < 5; ++i){
        cin >>input;
        values.at(i) = input;
    }

    //d) Print the 10 values of double array values in column format (2 decimal places) with
    //   the first 5 values in one row and the last five directly underneath on the next row
    cout <<setprecision(2) <<fixed;
    cout <<"Double array values contains: ";
    
    for(int i{0}; i < values.size(); ++i){
        cout << values.at(i) << " ";
        if (i == 4) 
            cout << endl;
    }

    return 0;
}