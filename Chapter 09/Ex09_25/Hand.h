/*
**  Filename:    Hand.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        25/12/2022
**  Description: Hand class
*/
#pragma once
#include "Deck.h"

class Hand
{
public:
    static inline const size_t HSIZE{5};
    explicit Hand(deckOfCards &doc);

    // void deal(deckOfCards &);
    void display() const;

    bool hasPair() const;         // a Determine whether the hand contains a pair.
    bool hasTwoPairs() const;     // b Determine whether the hand contains two pairs.
    bool hasThreeOfAKind() const; // c Determine whether the hand contains three of a kind.
    bool hasFourOfAKind() const;  // d Determine whether the hand contains four of a kind.
    bool hasFlush() const;        // e Determine whether the hand contains a flush.
    bool hasStraight() const;     // f Determine whether the hand contains a straight

    const std::array<Card, HSIZE> &getCards() const;

private:
    std::array<Card, HSIZE> m_hand;
};