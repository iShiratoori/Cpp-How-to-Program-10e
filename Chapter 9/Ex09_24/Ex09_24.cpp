#include "Hand.h"

int main()
{
    deckOfCards deck;
    deck.shuffleCard();

    Hand Player{deck};
    Player.display();
}