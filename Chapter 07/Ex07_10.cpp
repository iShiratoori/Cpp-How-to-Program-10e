/*
**  Filename:    Ex07_10.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (One-Dimensional array Questions) 
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    constexpr size_t earningSize{9};
    std::array<int, earningSize> salaryRanging{0};

    int hourlyWage{0};
    std::string currency;
    cout <<"Enter hourly wage and currency: ";
    cin >>hourlyWage;
    cin >>currency;

    int numServer{0};
    cout <<"Enter the number of servers: ";
    cin >>numServer;


    for(int counter{0}; counter < numServer; ++counter){
        int hoursWorked{0}, tipsReveived;
        cout <<"Enter the number of hours worked: ";
        cin >>hoursWorked;
        cout <<"Enter the total amount received in tips: ";
        cin >>tipsReveived;

        double salary{static_cast<double>( hourlyWage * hoursWorked + tipsReveived)};
        
        if (salary >= 20 && salary <= 29) {
            salaryRanging[0]++;
        } 
        else if (salary >= 30 && salary <= 39) {
          salaryRanging[1]++;
        } 
        else if (salary >= 40 && salary <= 49) {
          salaryRanging[2]++;
        } 
        else if (salary >= 50 && salary <= 59) {
          salaryRanging[3]++;
        } 
        else if (salary >= 60 && salary <= 69) {
          salaryRanging[4]++;
        } 
        else if (salary >= 70 && salary <= 79) {
          salaryRanging[5]++;
        } 
        else if (salary >= 80 && salary <= 89) {
          salaryRanging[6]++;
        } 
        else if (salary >= 90 && salary <= 99) {
          salaryRanging[7]++;
        } 
        else if (salary >= 100) {
          salaryRanging[8]++;
        }
    }


    // Print the number of servers in each salary range
    cout << "Number of servers in each salary range:" << endl;
    cout << "20-29: " << salaryRanging[0] << " servers" << endl;
    cout << "30-39: " << salaryRanging[1] << " servers" << endl;
    cout << "40-49: " << salaryRanging[2] << " servers" << endl;
    cout << "50-59: " << salaryRanging[3] << " servers" << endl;
    cout << "60-69: " << salaryRanging[4] << " servers" << endl;
    cout << "70-79: " << salaryRanging[5] << " servers" << endl;
    cout << "80-89: " << salaryRanging[6] << " servers" << endl;
    cout << "90-99: " << salaryRanging[7] << " servers" << endl;
    cout << "100 and over: " << salaryRanging[8] << " servers" << endl;
}