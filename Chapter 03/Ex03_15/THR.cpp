/*
**  Filename:    THR.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem   (Target-Heart-Rate Calculator)
*/

#include "THR.h"

int main()
{
    std::cout <<"\t============Target Heart Calculator============" <<std::endl;
    HeartRates hr1("Abdirahman", "Hussein", 17, 11, 2003);
    HeartRates hr2("Abdullahi", "Hussein", 10, 12, 1985);
    HeartRates hr3("Bilan", "Hussein", 1, 1, 2013);

    hr1.DisplayInfo(hr1);
    hr2.DisplayInfo(hr2);

    hr3.setYear(2012);
    
    hr3.DisplayInfo(hr3);
    return 0;
}
