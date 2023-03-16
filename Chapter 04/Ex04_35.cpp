/*
**  Filename:    Ex04_34.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem   (Factorial)
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int factorial(int n){
    int counter{n}, total{1};

    while (counter > 0)
    {
        total *= counter;
        --counter;
    }

    return total;
}

double estimateE(int e)
{
    double total{1};
    int counter{1};

    while (counter <= e)
    {
        total += 1.0 / factorial(counter);
        counter++;
    }
    return total;
}

int main()
{
    int factNumber{0}, accuracyE{0}, counter{1}, total{1};

    // a)
    cout <<"Enter Factorial number: ";
    cin >>factNumber;
    cout <<factNumber <<"! = " <<factorial(factNumber) <<endl;

    // b)
	cout << "Enter desired accuracy of e: ";
	cin >> accuracyE;
	cout << "Constant e with accuracy " << accuracyE << " is: " << estimateE(accuracyE) << endl;

    // c)

    return 0;
}