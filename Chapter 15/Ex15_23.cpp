/*
**  Filename:    Ex15_23.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: (Sieve of Eratosthenes with bitset)
*/
#include <iostream>
#include <bitset>
#include <array>

int main()
{
    const size_t SIZE{1023};
    std::bitset<SIZE> Eratosthenes; // false by defualt

    Eratosthenes.flip(); // Set all bitsets to false

    // Set 0 and 1 to be non-prime
    Eratosthenes.reset(0);
    Eratosthenes.reset(1);

    // Loop through the bitsets
    for (int i = 2; i < Eratosthenes.size(); i++)
    {
        // If the current element is prime, then mark all its multiples as non-prime
        if (Eratosthenes.test(i))
        {
            for (int j = i * i; j < SIZE; j += i)
            {
                Eratosthenes.reset(j);
            }
        }
    }
    std::cout << "\nprime Numbers 2 through 1023\n";
    // Print all the prime numbers
    for (int i = 0; i < Eratosthenes.size(); i++)
    {
        if (Eratosthenes.test(i))
        {
            std::cout << i << " ";
        }
    }

    int input;
    std::cout << "\n\nEnter non-negative prime number: ";
    std::cin >> input;
    std::cout << input << (Eratosthenes.test(input) ? " was" : " was not") << " a prime number in the list";
}