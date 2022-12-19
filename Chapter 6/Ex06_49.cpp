/*
**  Filename:    Ex06_49.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Pass-by-Value vs. Pass-by-Reference)
*/
#include <iostream>

// Function prototype for tripleByValue
int tripleByValue(int count);

// Function prototype for tripleByReference
void tripleByReference(int &count);

int main()
{
    // Declare a variable called count and initialize it to 10
    int count = 10;

    // Print the value of count
    std::cout << "count = " << count << std::endl;

    // Triple the value of count using the tripleByValue function
    count = tripleByValue(count);

    // Print the value of count
    std::cout << "count = " << count << std::endl;

    // Triple the value of count using the tripleByReference function
    tripleByReference(count);

    // Print the value of count
    std::cout << "count = " << count << std::endl;

    return 0;
}

// Function definition for tripleByValue
int tripleByValue(int count)
{
    // Multiply count by 3 and return the result
    return count * 3;
}

// Function definition for tripleByReference
void tripleByReference(int &count)
{
    // Multiply count by 3
    count *= 3;
}
