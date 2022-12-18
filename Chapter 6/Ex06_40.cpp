/*
**  Filename:    Ex06_40.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Visualizing Recursion)
*/
#include <iostream>

using namespace std;

long factorial(long number, int indent = 0);

int main() {
  for (int counter = 0; counter <= 10; ++counter) {
    cout << counter << "! = " << factorial(counter) << endl;
  }

  return 0;
}

long factorial(long number, int indent) {
  // print the current indentation and local variables
  cout << string(indent, ' ') << "factorial(" << number << ")" << endl;

  if (number <= 1) {
    return 1;
  } 
  else {
    // increase the indentation for the recursive call
    long result = number * factorial(number - 1, indent + 2);
    cout << string(indent, ' ') << "result: " << result << endl;
    return result;
  }
}
