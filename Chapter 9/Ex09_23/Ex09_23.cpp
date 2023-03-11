#define FMT_HEADER_ONLY
#include "Deck.h"
#include <iomanip>
int main()
{

    deckOfCards deck;

    size_t nameWidth{10};
    size_t valWidth{7};
    std::cout << std::left;
    for (int index{1}; index <= deck.getSize(); ++index)
    {
        deck.shuffleCard();
        std::cout << std::setw(20) << deck.dealCard().toString()
                  << ((index % 4 == 0) ? "\n" : "");
    }
}