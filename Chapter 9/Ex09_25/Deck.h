/*
**  Filename:    Deck.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        25/12/2022
**  Description: (Card Shuffling and Dealing)
*/

#pragma once

#include "Card.h" // include the header file for the `Card` class
#include <algorithm>
#include <array>
#include <random>

class deckOfCards
{
public:
    // Constructor
    deckOfCards();

    // Destructor
    ~deckOfCards();

    // Shuffles the deck of cards using the `std::shuffle()` function from the C++ standard library
    void shuffleCard();

    // Deals one card from the deck, returning a `Card` object
    Card dealCard();

    // Checks whether there are any more cards left in the deck
    const bool moreCards() const;

    // Returns the size of the deck (which is a constant value of 52)
    const size_t getSize() const;

private:
    int m_currentCard{};                 // Index of the next card to be dealt
    static inline const size_t SIZE{52}; // Constant size of the deck
    std::array<Card, SIZE> m_deck;       // Array of `Card` objects representing the deck of cards
};
