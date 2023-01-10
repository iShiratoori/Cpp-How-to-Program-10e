/*
**  Filename:    Ex07_18.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Craps Game Modification)
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <gsl/gsl>
#include <array>
#include <numeric>
using namespace std;

int rollDice();

int main()
{
    enum class Status{keepRolling, won, lost};

    srand(gsl::narrow_cast<unsigned int>(time(0)));
    unsigned int myPoint{0};
    Status gameStatus;
    array<int, 1000> gamesWon{}, gamesLost{};

    for(int roll{0}; roll < 1000; ++roll){
        switch (const int sumOfDice{rollDice()}; sumOfDice){
            case 7:
            case 11:
                gameStatus = Status::won;
                gamesWon[roll]++;
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = Status::lost;
                gamesLost[roll]++;
                break;
            default:
                gameStatus = Status::keepRolling;
                myPoint = sumOfDice;
                break;
        }

        while (Status::keepRolling == gameStatus)
        {
            if(const int sumOfDice{rollDice()}; sumOfDice == myPoint){
                gameStatus = Status::won;
                gamesWon[roll]++;
            }
            else{
                if(sumOfDice == 7){
                    gameStatus = Status::lost;
                    gamesLost[roll]++;
                }
            }
        }
    }

    cout << "Roll" << "\t" << "WON" << "\t" << "LOST" << endl;
    cout << "===========================================\n";
    for(int i = 0; i < 20; ++i){
        cout << i + 1 << "\t" << gamesWon[i] << "\t" << gamesLost[i] << endl;
    }

    double chancesWining = accumulate(begin(gamesWon), end(gamesWon), 0);
    chancesWining *= 0.1;
    double chancesLosing = accumulate(begin(gamesLost), end(gamesLost), 0);
    chancesLosing *= 0.1;
    cout << "Chances of winning at craps: " << chancesWining << "%" << endl;
    cout << "hances of losing at craps: " << chancesLosing << "%" << endl;

    return 0;
}
int rollDice(){
    const int dice1{1 + rand() % 6};
    const int dice2{1 + rand() % 6};
    const int sum{dice1 + dice2};

    return sum;
}
