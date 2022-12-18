/*
**  Filename:    Ex05_23.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Egg-timer Program)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for(unsigned int hash{1}; hash <= 9; ++hash)
        cout <<"#";

    cout <<endl;

    for(unsigned int row{1}; row <= 4; ++row){
        cout <<'#';
        
        for(unsigned int space{1}; space < row ; ++space)
            cout <<' ';
        
        for(unsigned int Asterics{7}; Asterics >= 2 * row - 1; --Asterics)
            cout <<'*';
        
        for(unsigned int space{1}; space < row ; ++space)
            cout <<' ';
        cout <<'#';
        cout <<endl;
    }
        
    for(unsigned int row{4 - 1}; row >= 1; --row){
        
        cout <<'#';
        for(unsigned int space{1}; space < row ; ++space)
            cout <<' ';
        
        for(unsigned int Asterics{7}; Asterics >= 2 * row - 1; --Asterics)
            cout <<'*';
            
        for(unsigned int space{1}; space < row ; ++space)
            cout <<' ';
        
        cout <<'#';
        cout <<endl;
    }

    for(int hash{1}; hash <= 9; ++hash)
        cout <<"#";
    return 0;
}