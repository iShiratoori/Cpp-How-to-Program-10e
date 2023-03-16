/*
**  Filename:    TicTacTeo.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (TicTacTeo Class)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <array>
#include <random>
#include <fmt/format.h>
class TicTacTeo
{
public:
    // Constructor initializes the board to all zeros
    TicTacTeo();

    void drawBoard() const;  // Draws the current state of the board to the console
    bool playMove(int move); // Attempts to place a mark for the current player at the given position
    bool checkWin() const;   // Checks whether the current player has won the game

    int getCurrentPlayer() const; // Returns the number of the current player
    void setCurrentPlayer(int p); // Sets the number of the current player

    void run(); // Runs the game loop

    void playerMode();
    void computerMode();

private:
    std::array<std::array<int, 3>, 3> board;
    // The current player (1 or 2)
    int currentPlayer{};
};