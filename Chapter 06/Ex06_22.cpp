/*
**  Filename:    Ex06_22.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Rectangle of Asterisks) 
*/
#include <iostream>
using namespace std;

void displayRectangle(int width, int height);

int main()
{
    int height{0}, width{0};
    cout <<"Enter integer value of traingle width and height: ";
    cin >>width >>height ;
    displayRectangle(width, height);
}

void displayRectangle(int width, int height){
    
    for(int column{1}; column <= height; ++column){
        for(int row{1}; row <= width; ++row){
            cout <<'*';
        }
        cout <<endl;
    }
}