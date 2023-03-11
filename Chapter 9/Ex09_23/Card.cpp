/*
**  Filename:    Card.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        25/12/2022

**  Description: This file provides the implementation of the Card class.
*/

#include "Card.h"

Card::Card() : m_face{}, m_suit{}
{
}

Card::Card(const cardFace &face, const cardSuit &suit)
    : m_face{face}, m_suit{suit} {}

Card::~Card() {}

// Returns a string representation of the card
std::string Card::toString() const
{
    return strFace[m_face] + " of " + strSuit[m_suit];
}
