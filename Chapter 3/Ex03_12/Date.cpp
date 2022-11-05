/*
**  Filename:    Date.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem (Date Class) 
*/
#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date{1990, 11, 30};

    cout <<"Date is: " <<date.getDay() <<"/" <<date.getMonth() <<"/" <<date.getYear();
}