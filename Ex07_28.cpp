/*
**  Filename:    Ex07_28.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem   (Palindromic Sentences)
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool testPalindromic(const string& sentence, int start, int end);

int main()
{
  cout <<"\t\t=========Palindromic Sentences=========" <<endl;
  string sentence{"radar"};

  while (true)
  {
    if(sentence[0] == '1')
      break;

    if(testPalindromic(sentence, 0, sentence.size() - 1)){
      cout <<sentence <<": string is Palindrome" <<endl;
    }
    else{
      cout <<sentence <<": string is NOT Palindrome" <<endl;
    }

    cout <<"Enter string (1 to exit): ";
    getline(cin, sentence);
  }
}

bool testPalindromic(const string& sentence, int start, int end){
  
  if (start >= end) {
    return true;
  }

  if (sentence[start] == ' ' || sentence[start] == ',' || sentence[start] == '.' || sentence[start] == '?')
  {
    return testPalindromic(sentence, start + 1, end);
  }

  if (sentence[end] == ' ' || sentence[end] == ',' || sentence[end] == '.' || sentence[end] == '?') 
  {
    return testPalindromic(sentence, start, end - 1);
  }

   if (sentence[start] != sentence[end]) {
    return false;
  }

  return testPalindromic(sentence, start + 1, end - 1);
}