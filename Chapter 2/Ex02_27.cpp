/*
**  Filename:    Ex2_27.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem (Integer Equivalent of a Character) 

Here is a peek ahead. In this chapter you learned about integers and the type int.
C++ can also represent uppercase letters, lowercase letters and a 
considerable variety of special symbols. C++ uses small integers internally to represent each different character. The set of characters a computer uses and the corresponding integer representations for those
characters are called that computer’s character set.
You can print a character by enclosing that character in single quotes, as with
             cout << 'A'; // print an uppercase A
You can print the integer equivalent of a character using static_cast as follows: 
             cout << static_cast<int>('A'); // print 'A' as an integer
This is called a cast operation (we formally introduce casts in Chapter 4). 
When the preceding statement executes, it prints 
the value 65 (on systems that use the ASCII character set). 
Write a program that prints the integer equivalent of a character typed at the keyboard. 
Store the input in a variable of type char. 
Test your program several times using uppercase letters, lowercase letters, 
digits and special characters (such as $).
*/
#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

int main()
{
    char lowercaseInput,uppercaseInput, specialChar;
    int digits;
    cout <<"Enter Lowercase character: ";
    cin >>lowercaseInput;

    cout <<"Enter Uppercase character: ";
    cin >>uppercaseInput;

    cout <<"Enter Digits: ";
    cin >>digits;
    
    cout <<"Enter Special Character: ";
    cin >>specialChar;

    cout <<lowercaseInput <<" "<< static_cast<int>(lowercaseInput) <<endl;
    cout <<uppercaseInput <<" "<< static_cast<int>(uppercaseInput) <<endl;
    cout <<digits <<" "<< static_cast<char>(digits) <<endl;
    cout <<specialChar <<" "<< static_cast<int>(specialChar) <<endl;
    return 0;
}

