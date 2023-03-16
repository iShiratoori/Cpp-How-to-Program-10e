/*
**  Filename:    Ex05_20.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Pythagorean Triples)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sideA{0}, sideB{0}, hypotenuse{0};
	for (sideA = 1; sideA <= 500; ++sideA)
    {
		for (sideB = 2; sideB <= 500; ++sideB)
        {
			for (hypotenuse = 1; hypotenuse <= 500; ++hypotenuse)
            {
					if (sideA * sideA + sideB * sideB == hypotenuse * hypotenuse)
                    {
						cout << setw(8) << sideA << setw(8) << sideB << setw(8) << hypotenuse << endl;
                    }
            }
        }
    }

    return 0;
}