/*
**  Filename:    Student.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Student)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>
#include <string>
#include <string_view>

class Student
{
public:
    Student();
    Student(std::string_view firstName,
            std::string_view middleName,
            std::string_view lastName,
            std::string_view email,
            std::string_view gender,
            int yearofBirth, int registrationN);

    Student &seFirstName(std::string_view firstName);
    Student &setMiddleName(std::string_view middleName);
    Student &setLastName(std::string_view lasName);
    Student &setEmail(std::string_view email);
    Student &setGender(std::string_view gender);
    Student &setYearofBirth(int yearofBirth);
    Student &setRegistrationN(int registrationN);

    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    std::string getEmail() const;
    std::string getGender() const;
    int getYearofBirth() const;
    int getRegistrationN() const;

    std::string display() const;

private:
    std::string m_firstName{""};
    std::string m_middleName{""};
    std::string m_lastName{""};
    std::string m_email{""};
    std::string m_sex{""};

    int m_yearOfBirth{0};
    int m_registrationNumber{0};
};