/*
**  Filename:    Ex05_21.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Modified Triangle-Printing Program)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int row{0};
    int space = 10;
    int MAX = 10;
    
 
    for (row = MAX; row> 0; row--)
    {
        // a)
		for (int column = 1; column <= row; column++){
			cout << "*";
        }
		for (int column = row + 1; column <= space; column++){
			cout <<' ';
        }

        // b)       
		for (int column = 1; column <= 11 - row; column++){
			cout << "*";
        }
		for (int column = 11 - row + 1; column <= space; column++){
			cout <<' ';
        }

        // c)       
		for (int column = 1; column <= row; column++){
			cout <<' ';
        }
		for (int column = row; column <= space; column++){
			cout << "*";
        }

         // d)       
		for (int column = 1; column <= 11 - row; column++){
			cout <<' ';
        }
		for (int column = 11 - row; column <= space; column++){
			cout << "*";
        }

        cout<<"\n";
    }
}