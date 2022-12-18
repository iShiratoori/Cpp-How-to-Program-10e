/*
**  Filename:    Ex06_25.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Calculating Number of Minutes)
*/
#include <iostream>
using namespace std;

int minutesSinceCurrenctMonth(int days, int hours, int minutes);

int main()
{
  int t1Day{3};
  int t1Hours{4};
  int t1Minutes{30};

  
  int t2Day{5};
  int t2Hours{2};
  int t2Minutes{45};

  int timeBetweenT1andT2 = minutesSinceCurrenctMonth(t2Day, t2Hours, t2Minutes)
                          - minutesSinceCurrenctMonth(t1Day, t1Hours, t1Minutes);
  cout <<"Time difference in minutes: " <<timeBetweenT1andT2 <<endl;

  return 0;
}

int minutesSinceCurrenctMonth(int days, int hours, int minutes){
  return days * 1440 + hours * 60 + minutes;
}