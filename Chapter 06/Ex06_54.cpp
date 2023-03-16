/*
**  Filename:    Ex06_54.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (C++11 Random Numbers: Modified Craps Game)
*/
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

// function prototypes
int rollDice(default_random_engine& rng, uniform_int_distribution<int>& dist);

int main()
{
    // seed the random number generator
    default_random_engine rng(time(0));
    uniform_int_distribution<int> dist(1, 6);

    int myPoint = 0; // point if no win or loss on first roll
    int gameStatus = 0; // can contain GAME_CONTINUE, GAME_WON or GAME_LOST

    int sumOfDice = rollDice(rng, dist); // first roll of the dice

    // determine game status and point based on first roll
    switch (sumOfDice)
    {
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
            gameStatus = 1; // GAME_WON
            break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll
            gameStatus = 2; // GAME_LOST
            break;
        default: // did not win or lose, so remember point
            gameStatus = 0; // GAME_CONTINUE
            myPoint = sumOfDice; // remember the point
            cout << "Point is " << myPoint << endl;
            break; // optional at end of switch
    }

    // while game is not complete
    while (gameStatus == 0) // not WON or LOST
    {
        sumOfDice = rollDice(rng, dist); // roll dice again

        // determine game status
        if (sumOfDice == myPoint) // win by making point
            gameStatus = 1; // GAME_WON
        else
            if (sumOfDice == 7) // lose by rolling 7 before point
                gameStatus = 2; // GAME_LOST
    }

    // display won or lost message
    if (gameStatus == 1) // did player win?
        cout << "Player wins" << endl;
    else
        cout << "Player loses" << endl;

    return 0; // indicate successful termination
}

// roll dice, calculate sum and display results
int rollDice(default_random_engine& rng, uniform_int_distribution<int>& dist)
{
    // pick random die values
    int die1 = dist(rng);
    int die2 = dist(rng);

    int sum = die1 + die2; // sum die values

    // display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
         << " = " << sum << endl;
    return sum;
}
