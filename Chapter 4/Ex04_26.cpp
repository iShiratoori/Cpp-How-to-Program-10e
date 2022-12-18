/*
**  Filename:    Ex04_26.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  (Square of Asterisks)
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int size{0};
    unsigned int row{1}, column{1};

    cout <<"Enter size of square: ";
    cin >>size;
    while (row <= size)
    {
        while (column <= size)
        {

            if(row == 1 || row == size || column == 1 || column == size)
                cout <<"*";
            else
                cout <<" ";         

            ++column;
        }
        cout <<endl;
        row++;
        column = 1;   
    }

    return 0;
}