/*
**  Filename:    Ex04_37.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Making a Difference

Description of the problem   (Enforcing Privacy with Cryptography) 
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int encrypt(int n)
{
    int a{ n / 1000};
    int b{ n / 100 % 10};
    int c{ n / 10 % 10};
    int d{ n / 1 % 10};

    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;

    return (c * 1000 + d * 100 + a * 10 + b);
}

int decrypt(int n)
{
    int a{ n / 1000};
    int b{ n / 100 % 10};
    int c{ n / 10 % 10};
    int d{ n / 1 % 10};

    a = (a + 3) % 10;
    b = (b + 3) % 10;
    c = (c + 3) % 10;
    d = (d + 3) % 10;

    return (c * 1000 + d * 100 + a * 10 + b);
}

int main()
{
    int input{0};
    cout <<"Enter 4 integer digits to encrypt: ";
    cin >>input;

    int incrptVAlue = encrypt(input);

    cout <<"encreption: " <<incrptVAlue <<endl;
    cout <<"Decryption: "<<decrypt(incrptVAlue) <<endl;
    return 0;
}