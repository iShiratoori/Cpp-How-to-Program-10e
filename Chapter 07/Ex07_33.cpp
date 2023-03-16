/*
**  Filename:    Ex07_33.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Maze Traversal) 
*/
#include <iostream>
#include <array>
using namespace std;

constexpr int ROW = 12;
constexpr int COLUMN = 12;

// These arrays specify the possible movements from a given location in the maze.
constexpr int dx[] = {1, 0, -1, 0};
constexpr int dy[] = {0, 1, 0, 1};

void mazeTraverse(array<array<char, COLUMN>, ROW>& maze, int x, int y, bool& mazeCompleted);

int main() {
  array<array<char, COLUMN>, ROW> maze = {{
    {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}},
    {{'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'}},
    {{'.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '#', '#'}},
    {{'#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '#'}},
    {{'#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '#'}},
    {{'#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '#'}},
    {{'#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '#'}},
    {{'#', '#', '#', '#', '#', '.', '#', '#', '#', '#', '.', '#'}},
    {{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'}},
    {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#'}}
  }};

  int startX = 2;
  int startY = 0;
  bool mazeCompleted = false;
  mazeTraverse(maze, startX, startY, mazeCompleted);

  return 0;
}

void mazeTraverse(array<array<char, COLUMN>, ROW>& maze, int x, int y, bool& mazeCompleted) {
  // If we have reached the exit of the maze, then we can stop.
  if (mazeCompleted || x < 0 || x >= ROW || y < 0 || y >= COLUMN || maze[x][y] == '#') {
    return;
  }

  // Check if the current position is the exit of the maze.
  if (x == ROW - 1 || y == COLUMN - 1) {
    mazeCompleted = true;
    return;
  }

  // Mark the current location as part of the path.
  maze[x][y] = 'X';

  // Display the maze after each move.
  for (const auto& row : maze) {
    for (const auto& cell : row) {
      std::cout << cell << ' ';
    }
    std::cout << '\n';
  }
  std::cout << '\n';

  // Try to move in each possible direction.
  for (int i = 0; i < 4; i++) {
    int newX = x + dx[i];
    int newY = y + dy[i];
    mazeTraverse(maze, newX, newY, mazeCompleted);
  }

  // Backtrack by marking the current location as part of the path.
  maze[x][y] = '.';
}