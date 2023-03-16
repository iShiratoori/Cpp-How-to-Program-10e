/*
**  Filename:    Ex08_08.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/11/2022

Description of the problem  (Write C++ Statements)
*/
#include <iostream>
#include <span>
using namespace std;

int main()
{
    // a) Declare a built-in array of type unsigned int called values with five elements, and
    // initialize the elements to the even integers from 2 to 10. Assume that the constant SIZE
    // has been defined as 5.
    const size_t SIZE = 5;
    unsigned int values[5]{2, 4, 6, 8, 10};

    // b) Declare a pointer vPtr that points to an object of type unsigned int.
    unsigned int *vPtr{nullptr};

    // c) Use a for statement to display the elements of built-in array values using array subscript notation.
    for (size_t i = 0; i < SIZE; ++i)
    {
        cout << values[i] << " ";
    }

    // d) Write two separate statements that assign the starting address of built-in array values
    // to pointer variable vPtr.
    vPtr = &values[0];
    vPtr = &values[1];

    // e) Use a for statement to display the elements of built-in array values using pointer/offset
    // notation.
    vPtr = values;
    cout << "\n\nDisplaying built-in array values using pointer/offset notation: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << *(vPtr + i) << " ";
    }

    // f) Use a for statement to display the elements of built-in array values using pointer/offset
    // notation with the built-in array’s name as the pointer.
    cout << "\nDisplaying built-in array's name as the pointer: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << *(values + i) << " ";
    }

    // g) Use a for statement to display the elements of built-in array values by subscripting the
    // pointer to the built-in array.
    cout << "\nDisplaying build-in array values by subscripting to the pointer: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << vPtr[i] << " ";
    }
    // h) Refer to the fifth element of values using array subscript notation, pointer/offset notation with
    // the built-in array name’s as the pointer, pointer subscript notation and pointer/offset notation.
    cout << "\n\nDisplaying the fifth element of value array using";
    cout << "\n1. array subscript notation: " << values[4];
    cout << "\n2. pointer/offset notation with array name's as the pointer: " << *(values + 4);
    cout << "\n3. pointer subscript notation: " << vPtr[4];
    cout << "\n4. pointer/offset notation: " << *(vPtr + 4);

    // i) What address is referenced by vPtr + 3? What value is stored at that location
    cout << "\n\naddress of vPtr + 3 is (" << (vPtr + 3) << ") values stored : " << *(vPtr + 3);

    // j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4?
    // What value is stored at that location?
    vPtr = &values[4];
    cout << "\naddress of vPtr - 4 is (" << (vPtr - 4) << ") values stored : " << *(vPtr - 4);
    return 0;
}