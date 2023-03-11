#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include "Hand.h"

enum class HandRank
{
    HighCard,
    OnePair,
    TwoPair,
    ThreeOfAKind,
    Straight,
    Flush,
    // FullHouse,
    FourOfAKind,
    // StraightFlush,
    // RoyalFlush
};

HandRank getHandRank(const Hand &hand);
int compareHands(const Hand &hand1, const Hand &hand2);

int main()
{
    // let program run while and analize the outcome
    while (true)
    {
        {
            deckOfCards deck;
            deck.shuffleCard();

            Hand hand1{deck}, hand2{deck};
            int rank = compareHands(hand1, hand2);
            if (rank == 1)
            {
                std::cout << "==========================>BEGIN<==========================\n";
                std::cout << "\nHand 1 is better\n\n";
                hand1.display();
                std::cout << "\n\nHand 2 \n";
                hand2.display();
                std::cout << "==========================>END<==========================\n";
            }
            else if (rank == -1)
            {
                std::cout << "==========================>BEGIN<==========================\n";
                std::cout << "\nHand 2 is better\n\n";
                hand2.display();
                std::cout << "\n\nHand 1 \n";
                hand1.display();
                std::cout << "==========================>END<==========================\n";
            }
            // else if (rank == 0)
            // {

            //     std::cout << "==========================>END<==========================\n";
            //     std::cout << "\nThe Hands have the same rank\nHand1 \n\n";
            //     hand1.display();
            //     std::cout << "\n\nHand 2 \n";
            //     hand2.display();
            //     std::cout << "==========================>END<==========================\n";
            // }
        }
    }
}

HandRank getHandRank(const Hand &hand)
{

    if (hand.hasFourOfAKind())
    {
        return HandRank::FourOfAKind;
    }
    else if (hand.hasFlush())
    {
        return HandRank::Flush;
    }
    else if (hand.hasStraight())
    {
        return HandRank::Straight;
    }
    else if (hand.hasThreeOfAKind())
    {
        return HandRank::ThreeOfAKind;
    }
    else if (hand.hasTwoPairs())
    {
        return HandRank::TwoPair;
    }
    else if (hand.hasPair())
    {
        return HandRank::OnePair;
    }
    else
    {
        return HandRank::HighCard;
    }
}
int compareHands(const Hand &hand1, const Hand &hand2)
{
    HandRank rank1 = getHandRank(hand1);
    HandRank rank2 = getHandRank(hand2);

    if (rank1 < rank2)
    {
        return -1;
    }
    else if (rank1 > rank2)
    {
        return 1;
    }
    else
    {
        // The hands have the same rank, so compare the high cards
        // Note: this assumes that the hands do not have the same cards
        const std::array<Card, Hand::HSIZE> &cards1 = hand1.getCards();
        const std::array<Card, Hand::HSIZE> &cards2 = hand2.getCards();
        for (int i = cards1.size() - 1; i >= 0; --i)
        {
            if (cards1[i].getFace() < cards2[i].getFace())
            {
                return -1;
            }
            else if (cards1[i].getFace() > cards2[i].getFace())
            {
                return 1;
            }
        }
        // The hands have the same cards
        return 0;
    }
}