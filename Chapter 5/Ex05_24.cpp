/*
**  Filename:    Ex05_24.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Modified Egg-timer Program) 
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int oddNumber{1};

    cout <<"Enter odd number between (1 - 29): ";

    while (cin >>oddNumber)
    {
        for(unsigned int hash{1}; hash <= oddNumber; ++hash)
            cout <<"#";

        cout <<endl;

        for(unsigned int row{1}; row <= (oddNumber - 1) / 2; ++row){
            cout <<'#';
            
            for(unsigned int space{1}; space < row ; ++space)
                cout <<' ';
            
            for(unsigned int Asterics{oddNumber - 2}; Asterics >= 2 * row - 1; --Asterics)
                cout <<'*';
            
            for(unsigned int space{1}; space < row ; ++space)
                cout <<' ';
            cout <<'#';
            cout <<endl;
        }

        
        for(unsigned int row{((oddNumber - 1) / 2) - 1}; row >= 1; --row){
            cout <<'#';
            
            for(unsigned int space{1}; space < row ; ++space)
                cout <<' ';
            
            for(unsigned int Asterics{oddNumber - 2}; Asterics >= 2 * row - 1; --Asterics)
                cout <<'*';
            
            for(unsigned int space{1}; space < row ; ++space)
                cout <<' ';
            cout <<'#';
            cout <<endl;
        }
        
        for(unsigned int hash{1}; hash <= oddNumber; ++hash)
            cout <<"#";

        cout <<"\nEnter odd number between (1 - 29): ";

    }

    return 0;   
}