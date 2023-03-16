/*
**  Filename:    TicTacTeo.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (TicTacTeo Emplementation)
*/
#include "TicTacTeo.h"
#include <iostream>

// Constructor
TicTacTeo::TicTacTeo()
{
    // Initialize the board with 0s
    for (auto &row : board)
        for (auto &column : row)
            column = 0;
}

// Print the TicTacTeo board
void TicTacTeo::drawBoard() const
{
    std::cout << "-------------" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl;
        std::cout << "-------------" << std::endl;
    }
}

// Play a move on the TicTacTeo board
bool TicTacTeo::playMove(int move)
{
    int row, col;
    row = (move - 1) / 3;
    col = (move - 1) % 3;

    // Check if the spot is already taken
    if (board[row][col] == 1 || board[row][col] == 2)
    {
        std::cout << "Invalid move! That spot is already taken." << std::endl;
        return false;
    }

    // Set the player's mark on the board
    board.at(row).at(col) = currentPlayer;

    return true;
}

// Check if a player has won the game
bool TicTacTeo::checkWin() const
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true;
        }
    }

    // Check diagonals
    if (board[1][1] != 0 && ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
                             (board[0][2] == board[1][1] && board[1][1] == board[2][0])))
    {
        return true;
    }

    // No winning sequence found
    return false;
}

// Get the current player
int TicTacTeo::getCurrentPlayer() const
{
    return currentPlayer;
}

// Set the current player
void TicTacTeo::setCurrentPlayer(int p)
{
    currentPlayer = p;
}

// Run the TicTacTeo game
void TicTacTeo::run()
{
    int mode;

    std::cout << fmt::format("\t\t{:*^30}\n", " Tic-Tac-Teo ");
    std::cout << fmt::format("\t\t{}\n", "Welcome to the game please choose which mode you want");
    std::cout << fmt::format("\t\t{}\n\t\t{}\n?.", "1: Player",
                             "2: Computer ");
    std::cin >> mode;
    if (mode == 1)
    {
        playerMode();
    }
    else if (mode == 2)
    {
        computerMode();
    }
}

void TicTacTeo::playerMode()
{
    int player;
    std::cout << fmt::format("\t\t{}\n\t\t{}\n\t\t{}\n?.", "Which one starts", "1: Player 1",
                             "2: Player 2 ");
    std::cin >> player;
    setCurrentPlayer(player);

    int move;
    bool gameOver = false;
    while (!gameOver)
    {
        // Draw the board
        drawBoard();

        // Get the player's move
        std::cout << "Player " << getCurrentPlayer() << "'s turn. Enter a move (1-9): ";
        std::cin >> move;

        if (playMove(move))
        {
            if (checkWin())
            {
                drawBoard();
                std::cout << "Player " << getCurrentPlayer() << " wins!" << std::endl;
                gameOver = true;
            }
            else if (board[0][0] != 0 && board[0][1] != 0 && board[0][2] != 0 &&
                     board[1][0] != 0 && board[1][1] != 0 && board[1][2] != 0 &&
                     board[2][0] != 0 && board[2][1] != 0 && board[2][2] != 0)
            {
                drawBoard();
                std::cout << "It's a tie!" << std::endl;
                gameOver = true;
            }
            // Switch to the other player's turn
            if (getCurrentPlayer() == 1)
                setCurrentPlayer(2);
            else
                setCurrentPlayer(1);
        }
    }
}

void TicTacTeo::computerMode()
{
    int player;
    std::cout << fmt::format("\t\t{}\n\t\t{}\n\t\t{}\n?.", "Which one starts",
                             "1: Player",
                             "2: Computer ");
    std::cin >> player;
    setCurrentPlayer(player);

    std::default_random_engine engine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<int> randomInt{1, 9};

    int move;
    bool gameOver = false;
    while (!gameOver)
    {
        // Draw the board
        drawBoard();

        // Get the player's move
        std::cout << fmt::format("{}'s turn. {}\n",
                                 (getCurrentPlayer() == 2 ? "Computer" : "Player"),
                                 (getCurrentPlayer() == 2 ? "" : "Enter a move (1-9): "));
        if (getCurrentPlayer() == 2)
            move = randomInt(engine);
        else
            std::cin >> move;

        if (playMove(move))
        {
            if (checkWin())
            {
                drawBoard();
                std::cout << (getCurrentPlayer() == 1 ? "Player" : "Computer") << " wins!" << std::endl;
                gameOver = true;
            }
            else if (board[0][0] != 0 && board[0][1] != 0 && board[0][2] != 0 &&
                     board[1][0] != 0 && board[1][1] != 0 && board[1][2] != 0 &&
                     board[2][0] != 0 && board[2][1] != 0 && board[2][2] != 0)
            {
                drawBoard();
                std::cout << "It's a tie!" << std::endl;
                gameOver = true;
            }
            // Switch to the other player's turn
            if (getCurrentPlayer() == 1)
                setCurrentPlayer(2);
            else
                setCurrentPlayer(1);
        }
    }
}