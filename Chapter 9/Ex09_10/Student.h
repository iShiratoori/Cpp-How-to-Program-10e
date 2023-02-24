/*
**  Filename:    Student.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: Enhancing Error Report (class Student)
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

    Student &setFistName(std::string_view fn);
    Student &setLastName(std::string_view ln);
    Student &setMiddleName(std::string_view md);
    Student &setSalutation(std::string_view s);

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

    Date m_dob{1, 1, 1900};
    int m_registrationNumber{0};
};