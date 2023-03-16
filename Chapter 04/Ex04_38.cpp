/*
**  Filename:    Ex04_38.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Making a Difference

Description of the problem    (World Population Growth) 
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    long long int intialPopulation{7998947835}, 
                currentPopulation{intialPopulation}, populationGrowth{0}, doubleyear{0};
    double growthRate{0.009};
    int years{2022};
    
    cout <<"Year" <<"\t\t\tPopulation" <<"\t\t\tIncreased this year" <<endl;

    while (years <= 2100)
    {
        
        if(currentPopulation >= intialPopulation * 2 ){
            doubleyear = years;
            cout <<"*";
        }

        populationGrowth = growthRate * currentPopulation;
        currentPopulation += populationGrowth;

        cout <<years <<"\t\t\t" <<currentPopulation <<"\t\t\t" <<populationGrowth <<endl;
        ++years;
    }

    cout <<"Year, when population would be double: " <<doubleyear <<endl;
    return 0;
}