/*
**  Filename:    Ex06_39.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Towers of Hanoi: Iterative Version) 
*/
#include <iostream>
#include <stack>

struct DiskMove {
  int n;
  int source;
  int destination;
  int temp;
};

void moveDisks(int numDisks, int sourcePeg, int destinationPeg, int tempPeg) {
  std::stack<DiskMove> moves; // stack to store the moves

  // push the initial state onto the stack
  moves.push({numDisks, sourcePeg, destinationPeg, tempPeg});

  while (!moves.empty()) {
    DiskMove currentMove = moves.top();
    moves.pop();

    int n = currentMove.n;
    int source = currentMove.source;
    int destination = currentMove.destination;
    int temp = currentMove.temp;

    if (n == 1) {
      // base case: move one disk from source to destination peg
      std::cout << source << " -> " << destination << std::endl;
    } 
    else {
      // move n-1 disks from source to temp, using destination as temp
      moves.push({n-1, temp, destination, source});
      // move the last remaining disk from source to destination
      moves.push({1, source, destination, temp});
      // move n-1 disks from temp to destination, using source as temp
      moves.push({n-1, source, temp, destination});
    }
  }
}

int main() {
  int numDisks{3}; // number of disks to move
  int sourcePeg{1}; // source peg
  int tempPeg{2}; // temporary peg
  int destinationPeg{3}; // destination peg

  // move the disks from sourcePeg to destinationPeg
  moveDisks(numDisks, sourcePeg, destinationPeg, tempPeg);

  return 0;
}