#include "HugeInteger.h"

int main()
{
    HugeInteger integer1, integer2;
    integer1.input();
    integer2.input();

    std::cout << "Integer1 == integer2: " << integer1.isEqualTo(integer2);
    std::cout << "\nInteger1 > integer2: " << integer1.isGreaterThan(integer2);
    std::cout << "\nInteger1 < integer2: " << integer1.isLessThan(integer2);
    std::cout << "\nInteger1 >= integer2: " << integer1.isGreaterThanOrEqualTo(integer2);
    std::cout << "\nInteger1 <= integer2: " << integer1.isLessThanOrEqualTo(integer2);

    std::cout << "\ntheir Addition: " << integer1.add(integer2).output();
    std::cout << "\ntheir Subtraction: " << integer1.subtract(integer2).output();
    std::cout << "\ntheir Multiplication: " << integer1.multiply(integer2).output();
    // std::cout << "\ntheir division: " << integer1.divide(integer2).output();
}