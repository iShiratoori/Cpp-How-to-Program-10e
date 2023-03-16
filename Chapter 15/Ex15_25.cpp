/*
**  Filename:    Ex15_25.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: 5 (Prime Factors)
*/
#include <iostream>
#include <iterator>
#include <bitset>
#include <list>

int main()
{
    const size_t SIZE{1023};
    std::bitset<SIZE> Eratosthenes; // false by defualt
    std::list<int> factors;

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
    int input;
    std::cout << "\n\nEnter non-negative prime number: ";
    std::cin >> input;
    if (Eratosthenes.test(input))
    {
        std::cout << input << " was a prime number in the list\n";
    }
    else
    {
        int temp{input};
        for (int i = 2; i <= input; ++i)
        {
            while (input % i == 0)
            {
                factors.push_back(i);
                input /= i;
            }
        }

        input = temp;
        std::cout << input << " was not prime number but \n The unique prime factorization of "
                  << input << " is: ";
        size_t index{factors.size()};
        for (const auto &f : factors)
        {
            --index;
            std::cout << f << (index > 0 ? " * " : "");
        }
    }
}