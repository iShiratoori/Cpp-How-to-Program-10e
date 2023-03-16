/*
**  Filename:    Ex07_30.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Print an array) 
*/
#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{ 15 };

void printArray(array<int, arraySize>Array, int start, int end){

  if(start == end)
    return;

  cout <<Array.at(start) <<" ";  
  printArray(Array, start + 1, end);
}
int main()
{
  array<int, arraySize>arr{1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  printArray(arr, 0, arraySize - 1);

  return 0;
}

