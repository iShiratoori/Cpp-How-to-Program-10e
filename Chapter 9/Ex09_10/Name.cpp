/*
**  Filename:    Name.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Emplementation of class Name.h
*/
#include "Name.h"

Name::Name(std::string_view firstName,
           std::string_view middeName,
           std::string_view lastName,
           std::string_view salution)
{
    setFirstName(firstName);
    setMiddeName(middeName);
    setLastName(lastName);
    setSalutation(salution);
}

Name &Name::setFirstName(std::string_view firstName)
{
    m_firstName = firstName;
    return *this;
}
Name &Name::setMiddeName(std::string_view middleName)
{
    m_middeName = middleName;
    return *this;
}
Name &Name::setLastName(std::string_view lastName)
{
    m_lastName = lastName;
    return *this;
}
Name &Name::setSalutation(std::string_view salution)
{
    m_salutation = salution;
    return *this;
}

std::string Name::getFirstName() const { return m_firstName; }
std::string Name::getMiddeName() const { return m_middeName; }
std::string Name::getLastName() const { return m_lastName; }
std::string Name::getSalutation() const { return m_salutation; }

std::string Name::toString() const
{
    return fmt::format("{}. {}, {} {}",
                       getSalutation(), getLastName(), getFirstName(), getMiddeName());
}