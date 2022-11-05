//Ex3.16 (Computerization of Health Records)

#include "HealthProfile.h"

int main()
{
    cout <<"\t============HEALTH PROFILE============" <<endl;

    HealthProfile hp1("Abdirahman", "Hussein", "male", 17, 11, 2003, 121, 68);
    HealthProfile hp2("Abdullahi", "Hussein", "male", 10, 12, 1987, 140, 68);
    HealthProfile hp3("Bilan", "Hussein", "female", 1, 1, 2013, 101, 58);

    hp1.DisplayInfo(hp1);
    hp2.DisplayInfo(hp2);

    hp3.setYear(2012);
    
    hp3.DisplayInfo(hp3);
        
    cout <<"\nBMI VALUES" <<endl;
    cout <<"Underweight: less than 18.5" <<endl;
    cout <<"Normal: between 18.5 and 24.9" <<endl;
    cout <<"Overweight: between 25 and 29.9" <<endl;
    cout <<"Obese: 30 or greater" <<endl;

    return 0;
}