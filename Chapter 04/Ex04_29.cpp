/*
**  Filename:    Ex04_29.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem  (Checkerboard Pattern of Asterisks)
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int row{1}, column{1};

    while (row <= 8)
    {
        while(column <= 16){
           cout <<((row + column) % 2 ? " " : "*");
            column++;
        }
        
		cout << endl;
		row++;
		column = 1;
    }
    
}