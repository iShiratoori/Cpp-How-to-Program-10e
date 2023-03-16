/*
**  Filename:    Ex08_09.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/11/2022

Description of the problem  (Write C++ Statements)
*/
#include <iostream>
using namespace std;

int main()
{
    // a) Declare the variable charPtr to be a pointer to an object of type char.
    char c{'c'};
    char *charPtr{&c};
    // b) Assign the address of variable var2 to pointer variable charPtr.
    char *var2{charPtr};
    // c) Display the value of the object pointed to by charPtr.
    cout << *charPtr << endl;
    // d) Assign the value of the object pointed to by charPtr to variable var1.
    char *var1{var2};
    // e) Display the value of var1.
    cout << "Display the value of var1: " << *var1 << endl;
    // f) Display the address of var2.
    cout << "Display the address of var2: " << &var2 << endl;
    // g) Display the address stored in intPtr. Is the address displayed the same as var1’s
    cout << "Display the address of charPtr: " << &charPtr << endl;

    return 0;
}