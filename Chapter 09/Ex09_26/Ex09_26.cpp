
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
    StraightFlush,
    // RoyalFlush
};
/**
 * Returns the hand rank of a given hand.
 * @param hand The hand to evaluate.
 * @return The hand rank of the hand.
 */
HandRank getHandRank(const Hand &hand);

/**
 * Compares two hands and returns the result of the comparison.
 * @param hand1 The first hand to compare.
 * @param hand2 The second hand to compare.
 * @return An integer representing the result of the comparison.
 *         Returns 1 if hand1 wins, -1 if hand2 wins, and 0 if it's a tie.
 */
int compareHands(const Hand &hand1, const Hand &hand2);

/**
 * Simulates the dealer's turn in a game of poker.
 * Deals cards from a deck to the dealer's hand until the hand has a rank of at least one pair.
 * @param deck The deck of cards to deal from.
 * @param playerHand The hand of the player.
 * @param dealerHand The hand of the dealer.
 */
void simulateDealer(deckOfCards &deck, Hand &playerHand, Hand &dealerHand);

/**
 * Evaluates the rank of a given hand.
 * @param hand The hand to evaluate.
 * @return The hand rank of the hand.
 */
HandRank evaluate(const Hand &hand);

/**
 * Counts the number of pairs in a given hand.
 * @param hand The hand to count pairs in.
 * @return The number of pairs in the hand.
 */
int countPairs(const Hand &hand);

int main()
{

    deckOfCards deck;
    deck.shuffleCard();
    Hand playerHand{deck}, dealerHand{deck};

    int loop{52};
    while (loop > 0)
    {
        simulateDealer(deck, playerHand, dealerHand);
        loop -= 4;

        std::cout << "===========Remaining Decks " << loop << "\n";
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
void simulateDealer(deckOfCards &deck, Hand &playerHand, Hand &dealerHand)
{
    // Shuffle the deck
    deck.shuffleCard();

    // Deal two cards to the player and dealer
    playerHand.addCard(deck.draw());
    playerHand.addCard(deck.draw());
    dealerHand.addCard(deck.draw());
    dealerHand.addCard(deck.draw());

    // Dealer's hand is "face down"
    // Evaluate player's hand
    HandRank playerRank = evaluate(playerHand);
    std::cout << "Player's hand: " << playerHand.toString() << std::endl;

    // Dealer draws additional cards based on the quality of their hand
    int numCardsToReplace = 5 - dealerHand.getSize(); // number of cards to replace
    if (numCardsToReplace > 0)
    {
        // Evaluate dealer's hand
        HandRank dealerRank = evaluate(dealerHand);

        if (dealerRank >= HandRank::OnePair)
        {
            // Draw one card
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
        }
        else if (dealerRank >= HandRank::HighCard)
        {
            // Draw two cards
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
        }
        else
        {
            // Draw three cards
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
            for (int i = 0; i < numCardsToReplace; i++)
            {
                dealerHand.replaceCard(i, deck.draw());
            }
        }

        // Reevaluate dealer's hand
        dealerRank = evaluate(dealerHand);
        std::cout << "Dealer's hand: " << dealerHand.toString() << std::endl;
    }
}
HandRank evaluate(const Hand &hand)
{
    if (hand.getSize() != 5)
    {
        throw std::invalid_argument("Hand must have exactly 5 cards");
    }

    // Sort the cards in descending order of face value
    Hand sortedHand = hand;
    // std::sort(sortedHand.getCards().begin(), sortedHand.getCards().end(),
    //           [](const Card &a, const Card &b)
    //           { return a.getFace() > b.getFace(); });

    bool isFlush = sortedHand.hasFlush();
    bool isStraight = sortedHand.hasStraight();
    bool isStraightFlush = sortedHand.hasStraight() && sortedHand.hasFlush();

    int numPairs = countPairs(sortedHand);

    if (isStraightFlush)
    {
        return getHandRank(sortedHand);
    }
    else if (numPairs == 1)
    {
        return getHandRank(sortedHand);
    }
    else if (numPairs == 2)
    {
        return getHandRank(sortedHand);
    }
    else if (numPairs == 3)
    {
        return getHandRank(sortedHand);
    }
    else if (isFlush)
    {
        return getHandRank(sortedHand);
    }
    else if (isStraight)
    {
        return getHandRank(sortedHand);
    }
    else if (numPairs == 4)
    {
        return getHandRank(sortedHand);
    }
    else
    {
        return getHandRank(sortedHand);
    }
}
int countPairs(const Hand &hand)
{
    int numPairs = 0;
    std::array<Card, Hand::HSIZE> sortedHand = hand.getCards();
    // std::sort(sortedHand.begin(), sortedHand.end());
    for (size_t i = 0; i < sortedHand.size() - 1; i++)
    {
        if (sortedHand[i].getFace() == sortedHand[i + 1].getFace())
        {
            // found a pair of cards with the same face value
            numPairs++;
            // skip the next card since it's already part of a pair
            i++;
        }
    }
    return numPairs;
}
