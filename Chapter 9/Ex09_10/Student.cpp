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
Student::Student(Name &person,
                 std::string_view email,
                 std::string_view gender,
                 int registrationN)
    : m_sex{gender}, m_email{email}, m_registrationNumber{registrationN}
{
    setFistName(person.getFirstName());
    setMiddleName(person.getMiddeName());
    setLastName(person.getLastName());
    setSalutation(person.getSalutation());
}

Student &Student::setFistName(std::string_view fn)
{
    if (fn.empty())
    {
        throw std::invalid_argument{"First name cannot be empty"};
    }

    m_person.setFirstName(fn);
    return *this;
}
Student &Student::setLastName(std::string_view ln)
{
    if (ln.empty())
    {
        throw std::invalid_argument{"Last name cannot be empty"};
    }

    m_person.setLastName(ln);
    return *this;
}
Student &Student::setMiddleName(std::string_view md)
{
    if (md.empty())
    {
        throw std::invalid_argument{"Middle name cannot be empty"};
    }

    m_person.setMiddeName(md);
    return *this;
}

Student &Student::setSalutation(std::string_view s)
{
    if (s.empty())
    {
        throw std::invalid_argument{"First name cannot be empty"};
    }

    m_person.setSalutation(s);
    return *this;
}

Student &Student::setBOB(int d, int m, int y)
{
    m_dob.setDay(d);
    m_dob.setMonth(m);
    m_dob.setYear(y);
    return *this;
}

Student &Student::setEmail(std::string_view email)
{
    m_email = email;
    return *this;
}
Student &Student::setGender(std::string_view gender)
{
    if (gender.empty())
    {
        throw std::invalid_argument{"plese assign gender"};
    }

    m_sex = gender;
    return *this;
}
Student &Student::setRegistrationN(int registrationN)
{
    m_registrationNumber = registrationN;
    return *this;
}

std::string Student::getFirstName() const { return m_person.getFirstName(); }
std::string Student::getMiddleName() const { return m_person.getMiddeName(); }
std::string Student::getLastName() const { return m_person.getLastName(); }
std::string Student::getSalutation() const { return m_person.getSalutation(); }
std::string Student::getEmail() const { return m_email; }
std::string Student::getGender() const { return m_sex; }
std::string Student::getDOB() const { return m_dob.toString(); }
int Student::getRegistrationN() const { return m_registrationNumber; }

std::string Student::display() const
{

    return fmt::format("Student ID: {}\nFull name: {} {}, {} {}\nEmail: {}\nGender: {}\nDOB: {}\n",
                       getRegistrationN(), getSalutation(), getLastName(),
                       getFirstName(), getMiddleName(), getEmail(), getGender(), getDOB());
}
