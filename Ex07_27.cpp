/*
**  Filename:    Ex07_27.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (The Array of Eratosthenes) 
*/
#include <iostream>
#include <array>
using namespace std;


int main() {
    
   const int sizeOfArray{1000};
   // Create an array of size sizeOfArray to store the Array
   array<int, sizeOfArray> Array;

    // Initialize all elements of the Array to 1
    for(int i{0}; i < Array.size(); ++i)
        Array.at(i) = {1};
    
    // Set 0 and 1 to be non-prime
    Array.at(0) = 0;
    Array.at(1) = 0;

    // Loop through the Array
    for (int i = 2; i < Array.size(); i++) {
        // If the current element is prime, then mark all its multiples as non-prime
        if (Array[i] == 1) {
            for (int j = i * i; j < Array.size(); j += i) {
                Array.at(j) = 0;
      }
    }
  }

  // Print all the prime numbers
  for (int i = 0; i < Array.size(); i++) {
    if (Array.at(i) == 1) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
