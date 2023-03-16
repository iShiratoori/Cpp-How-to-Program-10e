/*
**  Filename:    Ex06_33.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Coin Tossing)
*/
#include <iostream> 
#include <random>
#include <cstdlib>
using namespace std;

#include <gsl/gsl>

int flip()
{
  return rand() % 2;
}

int main()
{
  srand(gsl::narrow_cast<unsigned int>(time(0)));
  int heads{0}, tails{0};

  for(int counter{1}; counter <= 100; ++counter){

    if( flip() == 0){
      cout <<"Heads!\n";
      ++heads;
    }

    if(flip() == 1){
      cout <<"Tails!\n";
      ++tails;
    }
  }

  cout <<"Number Heads: " <<heads <<endl;
  cout <<"Number Tails: " <<tails <<endl;
}