/*
**  Filename:    Ex07_22.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Knight’s Tour)
*/

#include <iostream>
#include <array>
#include <vector>
using namespace std;

constexpr size_t rows{8};
constexpr size_t columns{8};

array<array<int, columns>, rows> board{};
vector<int> horizental{2, 1, -1, -2, -2, -1, 1, 2};
vector<int> vertical{1, 2, 2, 1, -1, -2, -2, -1};

bool possibleMove(int x, int y);
bool solveKnightTour(int x, int y, int move);

int main() {

    // start from the first square (0, 0)
    board[0][0] = 1;

    cout <<endl;
    if (solveKnightTour(0, 0, 1)) {
        // print the solution
        for(const auto& rows : board){
            for(const auto& columns : rows){
                cout <<columns <<" ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution found" << endl;
    }

    cout <<endl;
    return 0;
}

bool possibleMove(int x, int y){
    if( x >= 0){
        if(x < rows){
            if(y >= 0){
                if(y < columns){
                    if(board[x][y] == 0){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool solveKnightTour(int x, int y, int move){
    if (move == columns * rows) 
        return true;

    // try all possible moves
    for (int i = 0; i < 8; i++) {

        int newX = x + horizental[i];
        int newY = y + vertical[i];

        if (possibleMove(newX, newY)) {
            // move the knight to (newX, newY)
            board[newX][newY] = move + 1;
            // try to solve the Knight's Tour problem from this position
            if (solveKnightTour(newX, newY, move + 1)) 
                return true;

            // backtrack
            board[newX][newY] = 0;
        }
    }

    return false;
}