/*
**  Filename:    Hand.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        25/12/2022
**  Description: Hand class implementtion
*/
#define FMT_HEADER_ONLY
#include "Hand.h"
#include <map>
#include <sstream>
#include <fmt/format.h>
Hand::Hand(deckOfCards &doc)
{
    for (auto &card : m_hand)
    {
        card = doc.dealCard();
    }

    // The above should comment in order to become usefull this testcode
    // m_hand[0] = Card{Card::THREE, Card::SPADE};
    // m_hand[1] = Card{Card::FOUR, Card::DIAMOND};
    // m_hand[2] = Card{Card::FIVE, Card::HEART};
    // m_hand[3] = Card{Card::SIX, Card::SPADE};
    // m_hand[4] = Card{Card::SEVEN, Card::CLUB};
}
void Hand::display() const
{
    for (const auto &card : m_hand)
        std::cout << card.toString() << std::endl;

    std::cout << fmt::format("\nThe hand has high card{}{}{}{}{}{}\n",
                             (hasPair() ? "\nThe hand has pair" : ""),
                             (hasTwoPairs() ? "\nThe hand has two pair" : ""),
                             (hasThreeOfAKind() ? "\nThe hand has three of a kind" : ""),
                             (hasFourOfAKind() ? "\nThe hand has four of a kind" : ""),
                             (hasFlush() ? "\nThe hand has flush" : ""),
                             (hasStraight() ? "\nThe hand has straight" : ""));
}

bool Hand::hasPair() const
{
    for (int i = 0; i < m_hand.size() - 1; ++i)
    {
        for (int j = i + 1; j < m_hand.size(); ++j)
        {
            if (m_hand[i].getFace() == m_hand[j].getFace())
            {
                return true;
            }
        }
    }
    return false;
}
bool Hand::hasTwoPairs() const
{
    std::map<Card::cardFace, int> faceCount;
    for (const auto &card : m_hand)
    {
        ++faceCount[card.getFace()];
    }
    int pairs = 0;
    for (const auto &[face, count] : faceCount)
    {
        if (count == 2)
        {
            ++pairs;
        }
    }
    return (pairs == 2);
}
bool Hand::hasThreeOfAKind() const
{
    // Count the number of cards with the same face value
    std::array<int, Card::faceCount> faceCount{};
    for (const Card &card : m_hand)
    {
        ++faceCount[card.getFace()];
    }

    // Check if there are three cards with the same face value
    for (int count : faceCount)
    {
        if (count == 3)
        {
            return true;
        }
    }

    return false;
}
bool Hand::hasFourOfAKind() const
{
    // Count the number of cards with the same face value
    std::array<int, Card::faceCount> faceCount{};
    for (const Card &card : m_hand)
    {
        ++faceCount[card.getFace()];
    }

    // Check if there are three cards with the same face value
    for (int count : faceCount)
    {
        if (count == 4)
        {
            return true;
        }
    }

    return false;
}
bool Hand::hasFlush() const
{
    for (int card{0}; card < HSIZE - 1; ++card)
    {
        if (m_hand.at(card).getSuit() == m_hand.at(card + 1).getSuit())
        {
            return true;
        }
    }
    return false;
}
bool Hand::hasStraight() const
{
    std::array<bool, Card::faceCount> f{};
    for (size_t card{}; card < HSIZE; ++card)
        f[m_hand[card].getFace()] = true;

    // Find the first face value that appears in the hand
    size_t start = 0;
    while (!f[start] && start < Card::faceCount)
    {
        ++start;
    }

    // Use a sliding window to check for a straight
    size_t count = 1;
    for (size_t end = start + 1; end < Card::faceCount; ++end)
    {
        if (f[end])
        {
            ++count;
            if (count == HSIZE)
            {
                return true;
            }
        }
        else
        {
            count = 1;
            while (!f[++start] && start < end)
            {
            }
        }
    }

    return false;
}
const std::array<Card, Hand::HSIZE> &Hand::getCards() const
{
    return m_hand;
}

void Hand::addCard(const Card &card)
{
    if (m_numCards < Hand::HSIZE)
    {
        m_hand[m_numCards] = card;
        ++m_numCards;
    }
    else if (m_numCards == Hand::HSIZE)
    {
        replaceCard(m_numCards - 1, card);
    }
    else
    {
        throw std::out_of_range("Hand is full");
    }
}
void Hand::replaceCard(const int &i, const Card &card)
{
    if (i < 0 || i >= m_hand.size())
    {
        // index out of range, handle error
        throw std::out_of_range("Index out of range in Hand::replaceCard()");
    }
    m_hand[i] = card;
}

std::string Hand::toString() const
{
    std::string str{" "};
    for (const Card &card : getCards())
        str += card.toString() + "\n";
    return str;
}
const int Hand::getSize() const
{
    return m_numCards;
}