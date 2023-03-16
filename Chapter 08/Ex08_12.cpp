/*
**  Filename:    Ex08_12.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/11/2022

Description of the problem  (Simulation: The Tortoise and the Hare)
*/
#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
using namespace std;
#include <gsl/gsl>

void moveTortoise(int *const tp, const int randomNumber);
void moveHare(int *const hp, const int randomNumber);

int main()
{
    int tortoisePositoin{1};
    int harePositoin{1};
    default_random_engine engine(gsl::narrow_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> randomInt{1, 50};

    int square{1};
    cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!" << endl;
    for (square = 1; square <= 70; ++square)
    {
        int RandomNum{randomInt(engine)};
        moveTortoise(&tortoisePositoin, RandomNum);
        moveHare(&harePositoin, RandomNum);

        if (tortoisePositoin < harePositoin)
            cout << setw(tortoisePositoin) << 'T' << setw(harePositoin - tortoisePositoin) << 'H';
        else if (harePositoin < tortoisePositoin)
            cout << setw(harePositoin) << 'T' << setw(tortoisePositoin - harePositoin) << 'H';
        else
            cout << setw(tortoisePositoin + 6) << "OUCH!!!";

        cout << endl;
    }
    if (tortoisePositoin >= square && harePositoin < square)
        cout << "TORTOISE WINS!!! YAY!!!";
    else if (harePositoin >= square && tortoisePositoin < square)
        cout << "Hare wins. Yuck.";
    else
        cout << "It's a tie.";
    return 0;
}
void moveTortoise(int *const tp, const int randomNumber)
{
    if (randomNumber <= 25)
        *tp += 3;
    else if (randomNumber <= 33)
        *tp -= 6;
    else
        *tp += 1;

    if (*tp < 1)
        *tp = 1;
}
void moveHare(int *const hp, const int randomNumber)
{
    if (randomNumber <= 19)
        return;
    else if (randomNumber <= 27)
        *hp += 11;
    else if (randomNumber <= 35)
        *hp -= 9;
    else if (randomNumber <= 45)
        *hp -= 1;
    else
        *hp -= 2;

    if (*hp < 1)
        *hp = 1;
}