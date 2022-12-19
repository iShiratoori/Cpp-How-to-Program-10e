/*
**  Filename:    Ex06_38.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Towers of Hanoi)
*/
#include <iostream>
using namespace std;

void moveDisks(int n, int source, int destination, int temp) {
  if (n == 1) {
    // base case: move one disk from source to destination peg
    cout << source << " -> " << destination << endl;
  } 
  else {
    // move n-1 disks from source to temp, using destination as temp
    moveDisks(n-1, source, temp, destination);
    // move the last remaining disk from source to destination
    cout << source << " -> " << destination << endl;
    // move n-1 disks from temp to destination, using source as temp
    moveDisks(n-1, temp, destination, source);
  }
}

int main() {
  int numDisks = 3; // number of disks to move
  int sourcePeg = 1; // source peg
  int tempPeg = 2; // temporary peg
  int destinationPeg = 3; // destination peg

  // move the disks from sourcePeg to destinationPeg
  moveDisks(numDisks, sourcePeg, destinationPeg, tempPeg);

  return 0;
}