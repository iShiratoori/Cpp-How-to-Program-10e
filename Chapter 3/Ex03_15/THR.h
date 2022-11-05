/*
**  Filename:    THR.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem   THR.hs
*/
#ifndef THR_H
#define THR_H

#include <iostream>
#include <string>

class HeartRates
{
public:
    HeartRates(std::string sFirstName, std::string sLastName, int sDay, int sMonth, int sYear)
    : firstName(sFirstName), lastName(sLastName), day(sDay), month(sMonth)
    {
        setYear(sYear);
    }
    void setAge(int sYear ){
            if(sYear < 1950 )
                std::cout <<"Warning: Age" <<std::endl;

            if(sYear > 1950 )
            {
                int currDate{2022};
                age = currDate - sYear;
            }
    }
    void setFirstName(std::string sFirstName){
        firstName = sFirstName;
    }
    void setLastName(std::string sLastName){
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

    void DisplayInfo(HeartRates hr)
    {
        std::cout <<"Name: " <<hr.getFirstName() <<" " <<hr.getLastName() <<std::endl;
        std::cout <<"Date of Birth: " <<hr.getDay() <<"/" <<hr.getMonth() <<"/" <<hr.getYear() <<std::endl;
        std::cout <<"Maximum Heart Rate: " <<hr.getMHR() <<std::endl;
        std::cout <<"Target Heart Rate 50-85%: " <<hr.getMinRHR() <<"-" <<hr.getMaxTHR()<<" (bpm)" <<std::endl;
        std::cout <<"\n";
    }

    std::string getFirstName()   { return firstName;}
    std::string getLastName()    { return lastName;}
    int getDay()                 { return day; }
    int getMonth()               { return month;}
    int getYear()                { return year; }
    int getAge()                 { return age; }
    
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
    std::string firstName, lastName;
    int age{0}, day{0}, month{0}, year{0};
};

#endif