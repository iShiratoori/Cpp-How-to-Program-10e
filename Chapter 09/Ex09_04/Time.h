/*
**  Filename:    Time.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

Description of the problem  (Enhancing Class Time)
*/
#pragma once
#define FMT_HEADER_ONLY // Enable header-only mode for the fmt library
#include <iostream>
#include <string>
#include <ctime>
#include <fmt/format.h> // Include the fmt library for string formatting

class Time
{
public:
    // Constructors
    Time();                                 // Default constructor
    Time(int hour, int minute, int second); // Constructor with parameters

    // Setters
    Time &setTime(int hour, int minute, int second); // Set the time to the given values
    Time &setHour(int hour);                         // Set the hour to the given value
    Time &setMinute(int minute);                     // Set the minute to the given value
    Time &setSecond(int second);                     // Set the second to the given value

    // Getters
    int getHour() const;   // Get the hour
    int getMinute() const; // Get the minute
    int getSecond() const; // Get the second

    // String conversion functions
    std::string to24HourString() const; // Get the time as a string in 24-hour format
    std::string to12HourString() const; // Get the time as a string in 12-hour format

private:
    // Member variables
    int m_hour{0};   // Hour of the time
    int m_minute{0}; // Minute of the time
    int m_second{0}; // Second of the time

    // Time-related variables
    time_t rawtime = std::time(nullptr); // Get the current time as the number of seconds since the Unix epoch
    struct tm *tminfo;                   // Pointer to a struct that stores the current time broken down into components
};
