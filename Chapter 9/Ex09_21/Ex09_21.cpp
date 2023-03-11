#include "IntegerSet.h"

int main()
{
    IntegerSet set1{};
    IntegerSet set2{};

    for (int i = 0; i <= 20; ++i)
    {
        set1.insertElement(i);
        set2.insertElement(i);
    }
    std::cout << "set1 == set2: " << set1.isEqual(set2);
    set2.deleteElement(10);
    std::cout << "\nAfter deleteElement set1 == set2: " << set1.isEqual(set2);
    std::cout << "\nset1 contains 0: " << set1.contains(0);
    for (int i{10}; i <= 20; ++i)
    {
        set2.deleteElement(i);
    }
    std::cout << "\nset1 contains " << set1.toString();
    std::cout << "\nset2 contains " << set2.toString();

    std::vector<int> array1{10, 11, 12, 13, 15, 15, 16, 17, 18, 19, 20};
    IntegerSet set3{array1};
    std::cout << "\nset3 contains " << set3.toString();

    // set3.insertElement(101);
    // set3.deleteElement(-1);
    return 0;
}