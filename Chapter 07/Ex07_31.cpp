/*
**  Filename:    Ex07_31.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Print a String Backward)
*/
#include <iostream>
#include <string>
using namespace std;

void stringReverse(string str, int index){

  if(index < 0){
    return;
  }
  cout <<str.at(index);

  stringReverse(str, index - 1);
}

int main(){

  string str;

  cout <<"Enter string characters: ";
  getline(cin, str);

  stringReverse(str, str.length() - 1);
    
  return 0;
}
