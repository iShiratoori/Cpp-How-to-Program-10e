/*
**  Filename:    Ex06_23.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Rectangle of Any Character)
*/
#include <iostream>
using namespace std;

void displayRectangle(int width, int height, char ch = '%');

int main()
{
    char fillChacter = ' ';
    int height{0}, width{0};
    cout <<"Enter integer value of traingle width and height\n Enter Width: ";
    cin >>width;
    cout <<"Enter Hieght: ";
    cin>>height;
    cout <<"Enter Chactracter to be filled: ";
    cin >>fillChacter;

    displayRectangle(width, height, fillChacter);
}

void displayRectangle(int width, int height, char ch = '%'){
    
    for(int column{1}; column <= height; ++column){
        for(int row{1}; row <= width; ++row){
            cout <<'*';
        }
        cout <<endl;
    }
}