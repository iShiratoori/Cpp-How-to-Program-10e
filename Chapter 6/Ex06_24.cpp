/*
**  Filename:    Ex06_24.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Separating Digits)
*/
#include <iostream>
using namespace std;

void printInteger(int n);

int main()
{
    printInteger(123);
}
#include <iostream>
using namespace std;

void printInteger(int n);
int main()
{
    printInteger(4562);
}
void printInteger(int n){
    // Calculate the number of digits in the integer
    int num_digits = 0;
    int temp = n;
    while (temp > 0) {
      num_digits++;
      temp /= 10;
    }

    // Print each digit of the integer, separated by two spaces
    for (int counter{1}; counter <= num_digits; ++counter) {
 
      int quotient{ n / 10 };
      int remainder{ n % 10};
 
      cout << remainder;

 
      if (counter < num_digits ) {
        cout << "  ";
      }

      n = quotient;
    }
}

// void printInteger(int n){
//     // Calculate the number of digits in the integer
//     int num_digits = 0;
//     int temp = n;
//     while (temp > 0) {
//       num_digits++;
//       temp /= 10;
//     }

//     if(num_digits == 2){
//       int a{ n / 10}, b{n % 10};
//       cout <<a <<' ' <<b;
//     }

//     if(num_digits == 3){
//       int a{n / 100}, b{n / 10 % 10}, c{n % 10};
//       cout <<a <<"  " <<b <<"  " <<c;
//     }

//     if(num_digits == 4){
//       int a{n / 1000}, b{n / 100 % 10}, c{n / 10 % 10}, d{n % 10};
//       cout <<a <<"  " <<b <<"  " <<c <<"  " <<d;
//     }
// }