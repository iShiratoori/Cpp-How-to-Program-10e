/*
**  Filename:    Time.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

Emplementation of class Time.h
*/
#include "Time.h" // Include the header file for the Time class

// Default constructor
Time::Time()
{
    std::asctime(std::localtime(&rawtime)); // Get the current time as a string
    tminfo = localtime(&rawtime);           // Convert the current time to a struct with individual components

    // Set the member variables to the current time
    m_hour = tminfo->tm_hour;
    m_minute = tminfo->tm_min;
    m_second = tminfo->tm_sec;
}

// Constructor with parameters
Time::Time(int hour, int minute, int second)
{
    setHour(hour);     // Set the hour to the given value
    setMinute(minute); // Set the minute to the given value
    setSecond(second); // Set the second to the given value
}

// Set the time to the given values
Time &Time::setTime(int hour, int minute, int second)
{
    Time time{hour, minute, second}; // Create a new Time object with the given values
    *this = time;                    // Assign the new object to the current object
    return *this;                    // Return a reference to the current object
}

// Set the hour to the given value
Time &Time::setHour(int hour)
{
    if (hour < 0 || hour >= 24)
    {
        throw std::invalid_argument{"hour must be 0-23"}; // Throw an exception if the value is out of range
    }

    m_hour = hour; // Set the member variable to the given value
    return *this;  // Return a reference to the current object
}

// Set the minute to the given value
Time &Time::setMinute(int minute)
{
    if (minute < 0 || minute >= 60)
    {
        throw std::invalid_argument{"minute must be 0-59"}; // Throw an exception if the value is out of range
    }

    m_minute = minute; // Set the member variable to the given value
    return *this;      // Return a reference to the current object
}

// Set the second to the given value
Time &Time::setSecond(int second)
{
    if (second < 0 || second >= 60)
    {
        throw std::invalid_argument{"second must be 0-59"}; // Throw an exception if the value is out of range
    }

    m_second = second; // Set the member variable to the given value
    return *this;      // Return a reference to the current object
}

// Get the hour
int Time::getHour() const { return m_hour; }

// Get the minute
int Time::getMinute() const { return m_minute; }

// Get the second
int Time::getSecond() const { return m_second; }

// Get the time as a string in 24-hour format
std::string Time::to24HourString() const
{
    // Use fmt::format to format the time string in 24-hour format
    return fmt::format("{:02d}:{:02d}:{:02d}",
                       getHour(), getMinute(), getSecond());
}

std::string Time::to12HourString() const
{
    // Use fmt::format to format the time string in 12-hour format
    return fmt::format("{}:{:02d}:{:02d} {}",
                       ((getHour() % 12 == 0) ? 12 : getHour() % 12),
                       getMinute(), getSecond(),
                       (getHour() < 12 ? "AM" : "PM"));
}