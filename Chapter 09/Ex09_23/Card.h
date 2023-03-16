/*
**  Filename:    Card.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        25/12/2022
**  Description: (Card Shuffling and Dealing)
*/

#pragma once

#include <iostream>
#include <string>

class Card
{
public:
  // Enumeration types for the possible card faces and suits
  enum cardFace
  {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
  };
  enum cardSuit
  {
    CLUB,
    DIAMOND,
    HEART,
    SPADE
  };

  // Default constructor
  Card();

  // Constructor that takes a card face and suit as arguments
  Card(const cardFace &face, const cardSuit &suit);

  // Destructor
  ~Card();

  // Returns a string representation of the card
  std::string toString() const;

private:
  cardFace m_face; // Stores the face value of the card
  cardSuit m_suit; // Stores the suit of the card

  // Static arrays of string representations of card faces and suits
  static inline const std::string strFace[] = {
      "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
      "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
  static inline const std::string strSuit[] = {"Hearts", "Diamonds", "Clubs",
                                               "Spades"};

  // Allow the `deckOfCards` class to access the private members of `Card`
  friend class deckOfCards;
};
