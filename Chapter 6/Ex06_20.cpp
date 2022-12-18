/*
**  Filename:    Ex06_20.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Factors) 
*/
#include <iostream>
using namespace std;

bool isFactor(int numb1, int numb2){
    if(numb1 % numb2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    bool result = isFactor(num1, num2);
    if (result){
        cout << num2 << " is a factor of " << num1 << endl;
    }
    else{
        cout << num2 << " is not a factor of " << num1 << endl;
    }

    return 0;
}