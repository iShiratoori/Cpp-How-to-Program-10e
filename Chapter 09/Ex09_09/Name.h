/*
**  Filename:    Name.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Name)
*/
#pragma once

// Include only the header of the FMT library
#define FMT_HEADER_ONLY
#include <fmt/format.h>

#include <iostream>
#include <string>
#include <string_view>

// Class representing a person's name
class Name
{
public:
    // defualt constructor
    Name() {}
    /**
     * Constructor for the Name class.
     *
     * @param firstName The first name of the person.
     * @param middeName The middle name of the person.
     * @param lastName The last name of the person.
     * @param salutation The title or salutation of the person (e.g. Mr., Ms., Dr.).
     */
    Name(std::string_view firstName,
         std::string_view middeName,
         std::string_view lastName,
         std::string_view salutation);

    /**
     * Set the first name of the person.
     *
     * @param firstName The first name to set.
     * @return A reference to the Name object.
     */
    Name &setFirstName(std::string_view firstName);

    /**
     * Set the middle name of the person.
     *
     * @param middleName The middle name to set.
     * @return A reference to the Name object.
     */
    Name &setMiddeName(std::string_view middleName);

    /**
     * Set the last name of the person.
     *
     * @param lastName The last name to set.
     * @return A reference to the Name object.
     */
    Name &setLastName(std::string_view lastName);

    /**
     * Set the salutation or title of the person.
     *
     * @param salutation The salutation or title to set.
     * @return A reference to the Name object.
     */
    Name &setSalutation(std::string_view salutation);

    /**
     * Get the first name of the person.
     *
     * @return The first name of the person as a string.
     */
    std::string getFirstName() const;

    /**
     * Get the middle name of the person.
     *
     * @return The middle name of the person as a string.
     */
    std::string getMiddeName() const;

    /**
     * Get the last name of the person.
     *
     * @return The last name of the person as a string.
     */
    std::string getLastName() const;

    /**
     * Get the salutation or title of the person.
     *
     * @return The salutation or title of the person as a string.
     */
    std::string getSalutation() const;

    /**
     * Get the full name of the person as a formatted string.
     *
     * @return The full name of the person as a formatted string (e.g. Mr. Doe, John A).
     */
    std::string toString() const;

private:
    std::string m_firstName{};  // The first name of the person.
    std::string m_middeName{};  // The middle name of the person.
    std::string m_lastName{};   // The last name of the person.
    std::string m_salutation{}; // The salutation or title of the person.
};
