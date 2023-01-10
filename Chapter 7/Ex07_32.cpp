/*
**  Filename:    Ex07_32.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Find the Maximum Value in an array) 
*/
#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{10};
int maximum{0};

int recursiveMaximum(array<int, arraySize>arr, int start, int end){

    if(start == end){
        return maximum;
    }

    if(maximum < arr.at(start))
        maximum = arr.at(start);
    
    return recursiveMaximum(arr, start + 1, end);
}
int main()
{
    array<int, arraySize> arr{1, 2, 13, 4, 15, 45, 21, 11, 5, 8};

    cout <<"Maximum value in arr: " <<recursiveMaximum(arr, 0, arraySize - 1);

    return 0;
}