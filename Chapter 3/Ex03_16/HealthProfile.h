/*
**  Filename:     HeathProfile.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem    HeathProfile.h
*/
#ifndef HEALTHPROFILE_H
#define HEALTHPROFILE_H

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class HealthProfile
{
public:
    HealthProfile(string sFirstName, string sLastName, string sGender, int sDay, int sMonth, int sYear, int sWeight, int sHeight)
    : firstName(sFirstName), lastName(sLastName), gender(sGender), day(sDay)
    {
        setWeight(sWeight);
        setHeight(sHeight);
        setMonth(sMonth);
        setYear(sYear);
    };

    void setAge(int sYear ){
            if(sYear < 1950 )
                cout <<"Warning: Age" <<endl;

            if(sYear > 1950 )
            {
                int currDate{2022};
                age = currDate - sYear;
            }
    }
    void setFirstName(string sFirstName){
        firstName = sFirstName;
    }
    void setLastName(string sLastName){
        firstName = sLastName;
    }
    void setDay(int sDay){
        day = sDay;
    }
    void setMonth(int sMonth){
        if(sMonth > 0 && month < 12)
            month = sMonth;
    }
    void setYear(int sYear){
        if( sYear > 0){
            year = sYear;
            setAge(sYear);
        }
        
    }

    void DisplayInfo(HealthProfile hp)
    {
        cout <<"Name: " <<hp.getFirstName() <<" " <<hp.getLastName() <<endl;
        cout <<"Gender: " <<hp.getGender()<<endl;
        cout <<"Date of Birth: " <<hp.getDay() <<"/" <<hp.getMonth() <<"/" <<hp.getYear() <<endl;
        cout <<"Age: " <<hp.getAge() <<endl;
        cout <<"BMI: " <<hp.getBMI() <<endl;
        cout <<"Maximum Heart Rate: " <<hp.getMHR() <<endl;
        cout <<"Target Heart Rate 50-85%: " <<hp.getMinRHR() <<"-" <<hp.getMaxTHR()<<" (bpm)" <<endl;
        cout <<"\n";
    }

    void setWeight(int sWeight){ 
        weight = sWeight;
    }
    void setHeight(int sHeight){
        height = sHeight;
    }
    void setGender(string sGender){
        gender = sGender;
    }

    string getGender()      { return gender;}
    string getFirstName()   { return firstName;}
    string getLastName()    { return lastName;}
    int getDay()            { return day; }
    int getMonth()          { return month;}
    int getYear()           { return year; }
    int getAge()            { return age; }
    int getWeight()         { return weight;}
    int getHeight()         { return height; }
    
    int getBMI(){
        int BMI;
        BMI = (getWeight() * 703) / (getHeight() * getHeight());
        return BMI;
    }
    
    int getMHR(){
        int MHR{0};
        MHR = 220 - getAge();
        return MHR;
    }
    int getMinRHR(){
        int THR{0};
        THR = getMHR() * 0.50;
        return THR;
    }
    int getMaxTHR(){
        int THR{0};
        THR = getMHR() * 0.85;
        return THR;
    }
private:
    string firstName, lastName, gender;
    int age{0}, day{0}, month{0}, year{0}, weight{0}, height{0};
};

#endif