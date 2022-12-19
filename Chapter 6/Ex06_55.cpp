/*
**  Filename:    Ex06_55.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (C++11 Scoped enum)
*/
#include <iostream>
using namespace std;

enum class AccountType {
  SAVINGS,
  CHECKING,
  INVESTMENT
};

int main() {
  AccountType myAccount = AccountType::SAVINGS;
  if (myAccount == AccountType::CHECKING || true) {
    cout << "myAccount is a checking account" << endl;
  }
  return 0;
}