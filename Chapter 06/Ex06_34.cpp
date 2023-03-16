/*
**  Filename:    Ex06_34.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Guess-the-Number Game)
*/
#include <iostream> 
#include <random>
#include <random>
using namespace std;

#include <gsl/gsl>

int randomNumber()
{
  default_random_engine engine{gsl::narrow_cast<unsigned int>(time(0))};
  uniform_int_distribution<int> randomInt{1, 1000};
  
  return randomInt(engine);
}

int main()
{
  char again;
  int input{0};

  cout <<"I have a number between 1 and 1000.\n";
  cout <<"Can you guess my number?\n";
  cout <<"Please type your first guess.\n";
  cin >>input;

  do{
    int random{ randomNumber()}, exit{0}, attemp{1};

    while (exit != 1)
    {   
      if(input == random){
        cout <<"Excellent! You guessed the number!" <<endl;
        exit = 1;
      }
  
      if(random != input){
        if(random > input){
          cout <<++attemp <<". Too low, try again\n";
          cin >>input;
        }
        else{
          cout <<++attemp <<". Too High, try again\n";
          cin >>input;
        }
      }
    }
  
    cout <<"Would you like to play again (y or n)?\n>";
    cin >>input;
  }while(again != 'n');

  return 0;
}