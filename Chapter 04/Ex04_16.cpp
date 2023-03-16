/*
**  Filename:    Ex04_16.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Description of the problem (Fundraising initiative Calculator)

*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int lapsCompleted{0};
    double totalFundRaised{0.0}, additionRate{0.50}, studentContrubution{0.0};

    cout <<"Enter laps completed(-1 to end): ";
    cin >>lapsCompleted;
    
    cout <<setprecision(2) <<fixed;
    while (lapsCompleted != -1)
    {
        double sponsorshipRate{0.0};
        cout <<"Enter sponsorship rate: ";
        cin >>sponsorshipRate;

        if(lapsCompleted > 40){
            studentContrubution = lapsCompleted * sponsorshipRate + (lapsCompleted * additionRate - sponsorshipRate);
            totalFundRaised += studentContrubution;
        }
        else{
            studentContrubution = lapsCompleted * sponsorshipRate;
            totalFundRaised += studentContrubution;
        }
        cout <<"Student contribution is: " <<studentContrubution <<endl;

        cout <<"\nEnter laps completed(-1 to end): ";
        cin >>lapsCompleted;
    }

    cout <<"Total funds raised: " <<totalFundRaised <<endl;
    return 0;
}