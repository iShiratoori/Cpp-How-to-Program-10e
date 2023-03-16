/*
**  Filename:    Ex05_19.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Calculating the Value of π)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi{0};
    bool sign{true}, firstTerm{true};
    int odd{1};

    int terms{0};
    
    cout << setw(16) << "Term" << setw(16) << fixed << setprecision (5) << "PI" << endl;
    for(unsigned int counter{1}; counter <= 200000; ++counter)
    {
        if(counter > 1)
            odd += 2;
        
        if(sign)
            pi += (4.0 / odd);
        else
            pi -= (4.0 / odd);
        
        sign = !sign;
        cout << setw(16) << counter << setw(16) << pi << endl;
        
        int tr = pi * 100000;
        double tr2 = static_cast<double>(tr) / 100000;
        if(tr2 == 3.14159){
            if(firstTerm == true){
                terms = counter;
                firstTerm = false;
            }
        }
    }

    cout <<terms <<": terms you have to use before you first get a value that begins with 3.14159" <<endl;

}