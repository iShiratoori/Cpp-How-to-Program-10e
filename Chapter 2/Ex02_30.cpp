/*
**  Filename:    Ex2_30.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Making a Difference
Description of the problem  (Body Mass Index Calculator)  

We introduced the body mass index (BMI) calculator in Exercise 1.9.
Create a BMI calculator application that reads the user’s weight in pounds 
and height in inches (or, if you prefer, the user’s weight in kilograms 
and height in meters), then calculates and displays the user’s body mass index. 
Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health 
so the user can evaluate his/her BMI:
//////////////////////////////////////////////////////
// BMI VALUES                                       //
// Underweight: less than 18.5                      //
// Normal: between 18.5 and 24.9                    //
// Overweight: between 25 and 29.9                  //
// Obese: 30 or greater                             //
//////////////////////////////////////////////////////
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int weightInPounds, hieghtInInches, BMI;

    cout <<"Enter Your Weight in Pounds: ";
    cin >>weightInPounds;
    cout <<"Enter Your Height in Inches: ";
    cin >>hieghtInInches;

    BMI = weightInPounds * 703 / (hieghtInInches * hieghtInInches);

    cout <<"BMI: " << BMI <<endl;
    cout <<"\nBMI VALUES" <<endl;
    cout <<"Underweight: less than 18.5" <<endl;
    cout <<"Normal: between 18.5 and 24.9" <<endl;
    cout <<"Overweight: between 25 and 29.9" <<endl;
    cout <<"Obese: 30 or greater" <<endl;

    return 0;
}