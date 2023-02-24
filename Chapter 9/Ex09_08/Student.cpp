/*
**  Filename:    Student.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Emplementation of class Student
*/

#include "Student.h"

Student::Student()
{
}
Student::Student(std::string_view firstName,
                 std::string_view middleName,
                 std::string_view lastName,
                 std::string_view email,
                 std::string_view gender,
                 int yearofBirth, int registrationN)
{
    seFirstName(firstName);
    setMiddleName(middleName);
    setLastName(lastName);
    setEmail(email);
    setGender(gender);
    setYearofBirth(yearofBirth);
    setRegistrationN(registrationN);
}

Student &Student::seFirstName(std::string_view firstName)
{
    m_firstName = firstName;
    return *this;
}
Student &Student::setMiddleName(std::string_view middleName)
{
    m_middleName = middleName;
    return *this;
}
Student &Student::setLastName(std::string_view lasName)
{
    m_lastName = lasName;
    return *this;
}
Student &Student::setEmail(std::string_view email)
{
    m_email = email;
    return *this;
}
Student &Student::setGender(std::string_view gender)
{
    m_sex = gender;
    return *this;
}
Student &Student::setYearofBirth(int yearofBirth)
{
    m_yearOfBirth = yearofBirth;
    return *this;
}
Student &Student::setRegistrationN(int registrationN)
{
    m_registrationNumber = registrationN;
    return *this;
}

std::string Student::getFirstName() const { return m_firstName; }
std::string Student::getMiddleName() const { return m_middleName; }
std::string Student::getLastName() const { return m_lastName; }
std::string Student::getEmail() const { return m_email; }
std::string Student::getGender() const { return m_sex; }
int Student::getYearofBirth() const { return m_yearOfBirth; }
int Student::getRegistrationN() const { return m_registrationNumber; }

std::string Student::display() const
{
    return fmt::format("Student ID: {}\nFull name: {}, {} {} \nEmail: {}\nGender: {}\nYear of birth: {}\n",
                       getRegistrationN(), getLastName(),
                       getFirstName(), getMiddleName(), getEmail(), getGender(), getYearofBirth());
}
