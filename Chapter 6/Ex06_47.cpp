/*
**  Filename:    Ex06_47.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Craps Game Modification) 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <gsl/gsl>

// function to roll the dice
int rollDice();

// function to run a game of craps
void playCraps(unsigned int& bankBalance);

int main()
{
  unsigned int bankBalance{ 1000 };

  // play craps until player runs out of money
  while (bankBalance > 0)
  {
    playCraps(bankBalance);
  }

  return 0;
}

void playCraps(unsigned int& bankBalance)
{
  enum class Status { keepRolling, won, lost };

  // initialize random number generator
  srand(gsl::narrow_cast<unsigned int>(time(0)));

  unsigned int myPoint{ 0 };
  Status gameStatus;

  // get wager from player
  int wager;
  do
  {
    std::cout << "Enter wager (must be less than or equal to " << bankBalance << "): ";
    std::cin >> wager;

    if (wager > bankBalance)
    {
      std::cout << "Wager must be less than or equal to your current bank balance. ";
    }
  } while (wager > bankBalance);

  // roll the dice and determine the game status
  switch (const int sumOfDice{ rollDice() }; sumOfDice)
  {
    case 7:
    case 11:
      gameStatus = Status::lost;
      break;
    case 2:
    case 3:
    case 12:
      gameStatus = Status::won;
      break;
    default:
      gameStatus = Status::keepRolling;
      myPoint = sumOfDice;
      std::cout << "Point is " << myPoint << std::endl;
      break;
  }

  // keep rolling until game is won or lost
  while (Status::keepRolling == gameStatus)
  {
    // roll the dice and check if player wins or loses
    if (const int sumOfDice{ rollDice() }; sumOfDice == myPoint)
    {
      gameStatus = Status::won;
    }
    else
    {
      if (sumOfDice == 7)
      {
        gameStatus = Status::lost;
      }
    }
  }

  // update bank balance based on game result
  if (Status::won == gameStatus)
  {
    std::cout << "Player won!" << std::endl;
    bankBalance += wager;
    std::cout << "New bank balance: " << bankBalance << std::endl;
  }
  else
  {
    std::cout << "Player loses." << std::endl;
    bankBalance -= wager;
    std::cout << "New bank balance: " << bankBalance << std::endl;

    // check if bank balance has become zero
    if (bankBalance == 0)
    {
      std::cout << "Sorry. You busted!" << std::endl;
    }
  }
}

int rollDice(){

    const int dice1{1 + rand() % 6};
    const int dice2{1 + rand() % 6};
    const int sum{dice1 + dice2};

    std::cout <<"Player Rolled " <<dice1 <<" + " <<dice1 
        <<" = " <<sum <<std::endl;
    return sum;
}
