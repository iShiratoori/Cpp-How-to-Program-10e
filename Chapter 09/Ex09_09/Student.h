/*
**  Filename:    Student.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Student)
*/
#pragma once

#include "Date.h"
#include "Name.h"

class Student
{
    friend class Date;

public:
    Student();
    // Student(std::string_view firstName,
    //         std::string_view middleName,
    //         std::string_view lastName,
    //         std::string_view email,
    //         std::string_view gender,
    //         int yearofBirth, int registrationN);

    Student(Name &person,
            std::string_view email,
            std::string_view gender,
            int registrationN);

    Student &setBOB(int d, int m, int y);
    Student &setEmail(std::string_view email);
    Student &setGender(std::string_view gender);
    Student &setRegistrationN(int registrationN);

    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    std::string getSalutation() const;
    std::string getEmail() const;
    std::string getGender() const;
    std::string getDOB() const;
    int getRegistrationN() const;

    std::string display() const;

private:
    Name m_person{};
    std::string m_email{""};
    std::string m_sex{""};

    Date m_dob{0, 0, 0};
    int m_registrationNumber{0};
};