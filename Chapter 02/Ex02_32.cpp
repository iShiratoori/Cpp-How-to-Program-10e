/*
**  Filename:    Ex2_29.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        02/11/2022

Description of the problem  (Maximal Heart Rate Calculator) 

Doctors suggest individuals exercise to stay healthy and
that they monitor their heart rate while exercising to ensure 
that they are not doing too much or too little. 
The Maximal Heart rate (MHR) is a guideline that is used to indicate when an individual
should ease off a little. The equation that is commonly used is 
          220 − age = Maximum Heart Rate (MHR)
This formula was empirically derived from young athletes. A broader age distribution in a study by
/Tanaka in 2001 showed that this formula often underestimated the MHR in older subjects. 
Hence the formula MHR = 208 − 0.7(age) was suggested. 
Gellish in 2007 showed good correlation to stress-testing results using MHR = 207 − 0.7(age)
and a later study by Nes et al in 2012 suggested that the equation be MHR = 211 − 0.64(age).
Write a program that requests the user to enter their age and then displays the suggested
MHR values using each of these equations. 
As a conclusion, suggest the range of values that the user should consider by 
displaying the smallest and largest MHR values calculated. Test your program by entering 
several ages that are a few decades apart. (Take a look at “Age-predicted maximal
heart rate in healthy subjects: The HUNT Fitness Study” published in the Scandinavian Journal of
Medicine and Science in Sports for a discussion about these MHR equations).
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int smallest, largest, age, athletesFormula, badFormula, GellishForumal, nes_et_alForumala;
    cout <<"Enter your Age: ";
    cin >>age;

    athletesFormula = 220 - age;
    badFormula = 208 - (0.7 * age);
    GellishForumal = 207 - (0.7 * age);
    nes_et_alForumala = 211 - (0.64 * age);
    
    cout <<"Young Athletes Suggestion MHR: " <<athletesFormula <<endl;
    cout <<"broader age distribution Suggestion MHR: " <<badFormula <<endl;
    cout <<"Gellish Suggestion MHR: " <<badFormula <<endl;
    cout <<"Nes Et Al Suggestion MHR: " <<badFormula <<endl;

    if(athletesFormula < badFormula && athletesFormula < GellishForumal && athletesFormula < nes_et_alForumala)
        smallest = athletesFormula;
    if(badFormula < athletesFormula && badFormula < GellishForumal && badFormula < nes_et_alForumala)
        smallest = badFormula;
    if(GellishForumal < athletesFormula && GellishForumal < badFormula && GellishForumal < nes_et_alForumala)
        smallest = GellishForumal;
    if(nes_et_alForumala < athletesFormula && nes_et_alForumala < badFormula && nes_et_alForumala < GellishForumal)
        smallest = nes_et_alForumala;
    
    if(athletesFormula > badFormula && athletesFormula > GellishForumal && athletesFormula > nes_et_alForumala)
        largest = athletesFormula;
    if(badFormula > athletesFormula && badFormula > GellishForumal && badFormula > nes_et_alForumala)
        largest = badFormula;
    if(GellishForumal > athletesFormula && GellishForumal > badFormula && GellishForumal > nes_et_alForumala)
        largest = GellishForumal;
    if(nes_et_alForumala > athletesFormula && nes_et_alForumala > badFormula && nes_et_alForumala > GellishForumal)
        largest = nes_et_alForumala;

    cout <<"Smallest MHR: " <<smallest <<endl;
    cout <<"Largest MHR: " <<largest <<endl;

    return 0;
}