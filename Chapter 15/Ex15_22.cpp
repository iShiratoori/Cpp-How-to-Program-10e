/*
**  Filename:    Ex15_22.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: (Palindromes)
*/
#include <vector>
#include <iostream>
template <typename T>
bool Palindromes(const T &array)
{
    if (array.size() < 2)
    {
        std::cout << "\nempty or one-element array is not considered a Palindromes";
        return false;
    }
    auto j{array.size() - 1};
    for (int i = 0; i<array.size(), j> 0; ++i, --j)
    {
        if (array.at(i) != array.at(j))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::vector<int> numbers{1, 2, 3, 2, 1};
    if (Palindromes(numbers))
    {
        std::cout << "\nnumbers are Palindromes";
    }
    else
    {
        std::cout << "\nnumbers are not Palindromes";
    }
}