/*
**  Filename:    Ex06_45.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Math Library Functions)
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  // test sin() function
  cout << "Testing sin() function:\n";
  for (double x = 0; x <= 2 * M_PI; x += M_PI/4) {
    cout << "sin(" << x << ") = " << setprecision(3) << fixed << sin(x) << endl;
  }

  cout << "\n";

  // test cos() function
  cout << "Testing cos() function:\n";
  for (double x = 0; x <= 2 * M_PI; x += M_PI/4) {
    cout << "cos(" << x << ") = " << setprecision(3) << fixed << cos(x) << endl;
  }

  cout << "\n";

  // test tan() function
  cout << "Testing tan() function:\n";
  for (double x = 0; x <= 2*M_PI; x += M_PI/4) {
    cout << "tan(" << x << ") = " << setprecision(3) << fixed << tan(x) << endl;
  }

  cout << "\n";

  // test exp() function
  cout << "Testing exp() function:\n";
  for (double x = -2; x <= 2; x += 0.5) {
    cout << "exp(" << x << ") = " << setprecision(3) << fixed << exp(x) << endl;
  }

  cout << "\n";

  // test log() function
  cout << "Testing log() function:\n";
  for (double x = 0.1; x <= 10; x += 0.5) {
    cout << "log(" << x << ") = " << setprecision(3) << fixed << log(x) << endl;
  }

  cout << "\n";

  // test log10() function
  cout << "Testing log10() function:\n";
  for (double x = 0.1; x <= 10; x += 0.5) {
    cout << "log10(" << x << ") = " << setprecision(3) << fixed << log10(x) << endl;
  }

  cout << "\n";

  // test sqrt() function
  cout << "Testing sqrt() function:\n";
  for (double x = 0; x <= 10; x += 0.5) {
    cout << "sqrt(" << x << ") = " << setprecision(3) << fixed << sqrt(x) << endl;
  }

  return 0;
}
