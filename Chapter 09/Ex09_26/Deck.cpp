/*
** Filename: Deck.cpp
** Author: Abdirahman Hussein
** Email: shiratoori2022@gmail.com
** Date: 25/12/2022
** Description: Class deckOfCards implementation for Card Shuffling and Dealing.
*/

#include "Deck.h"

// Constructor
deckOfCards::deckOfCards()
    : m_deck(SIZE)
{
    // Initialize the deck of cards
    int cardIndex = 0;
    for (int suit{0}; suit < 4; ++suit)
    {
        for (int face{0}; face < 13; ++face)
        {
            m_deck.at(cardIndex).m_suit = static_cast<Card::cardSuit>(suit);
            m_deck.at(cardIndex).m_face = static_cast<Card::cardFace>(face);
            ++cardIndex;
        }
    }
}

// Destructor
deckOfCards::~deckOfCards() {}

// Shuffle the deck of cards
void deckOfCards::shuffleCard()
{
    // Create a random engine
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    // Shuffle the deck of cards
    std::shuffle(m_deck.begin(), m_deck.end(), engine);
}

// Deal a card from the deck
Card deckOfCards::dealCard()
{
    if (!moreCards())
    {
        throw std::invalid_argument{"The deck is empty"};
    }
    return m_deck[m_currentCard++];
}

Card deckOfCards::draw()
{
    if (m_deck.empty())
    {
        throw std::out_of_range("Deck is empty");
    }
    Card topCard = m_deck.back();
    m_deck.pop_back();
    return topCard;
}

// Check if there are more cards in the deck
const bool deckOfCards::moreCards() const
{
    return m_currentCard < getSize();
}

// Get the size of the deck
const size_t deckOfCards::getSize() const
{
    return SIZE;
}