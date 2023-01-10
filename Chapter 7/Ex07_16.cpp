/*
**  Filename:    Ex07_16.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Dice Rolling)
*/
#include <iostream>
#include <array>
#include <iomanip>
#include <random>
using namespace std;

#include <gsl/gsl>

int main()
{
    default_random_engine engine(gsl::narrow_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> randomInt{1,6};

    array<int, 13> dice{};
    
    for(int roll{1}; roll <= 36'000'000; ++roll){

        int dice1{ randomInt(engine) };
        int dice2{ randomInt(engine) };
        int sum{dice1 + dice2};
        
        ++dice[sum];
    }

    cout <<"Sum" <<setw(14) <<"Count" <<endl;
    for(int i = 2; i < dice.size(); ++i){
        cout << i <<setw(16) << dice[i] << endl;
    }
}
