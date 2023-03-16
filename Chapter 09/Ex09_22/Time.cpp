/*
**  Filename:    Time.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/12/2022

**  Description: Time class implementation
*/
#include "Time.h"

void Time::setTime(int hour, int minute, int second)
{
    if ((hour < 0 || hour >= 24) || (minute < 0 || minute >= 60) ||
        (second < 0 || second >= 60))
    {
        throw std::invalid_argument{"hour, minute or second was out range"};
    }

    // total seconds = (hours x 3600) + (minutes x 60) + seconds
    m_seconds = (hour * 3600) + (minute * 60) + second;
}

std::string Time::to24HourString() const
{
    // Declaring and initializing variables to hold hours, minutes and seconds
    int hours{0}, minutes{0}, seconds{0};

    // Computing hours, minutes and seconds from the total number of seconds
    // To compute hours, we divide the total number of seconds
    // by the number of seconds in an hour (60 minutes * 60 seconds = 3600 seconds)
    hours = m_seconds / (60 * 60);
    // To compute minutes, we subtract the number of seconds accounted for by hours,
    // then divide the remaining seconds by the number of seconds in a minute (60 seconds)
    minutes = (m_seconds - (hours * 3600)) / 60;
    // To compute seconds, we subtract the number of seconds accounted for by
    // hours and minutes from the total number of seconds
    seconds = (m_seconds - (hours * 3600)) - (minutes * 60);
    // The resulting values of hours, minutes and seconds are now stored in the corresponding variables
    return fmt::format("{:02d}:{:02d}:{:02d}", hours, minutes, seconds);
}

std::string Time::to12HourString() const
{
    // Declaring and initializing variables to hold hours, minutes and seconds
    int hours{0}, minutes{0}, seconds{0};

    // Computing hours, minutes and seconds from the total number of seconds
    // To compute hours, we divide the total number of seconds
    // by the number of seconds in an hour (60 minutes * 60 seconds = 3600 seconds)
    hours = m_seconds / (60 * 60);
    // To compute minutes, we subtract the number of seconds accounted for by hours,
    // then divide the remaining seconds by the number of seconds in a minute (60 seconds)
    minutes = (m_seconds - (hours * 3600)) / 60;
    // To compute seconds, we subtract the number of seconds accounted for by
    // hours and minutes from the total number of seconds
    seconds = (m_seconds - (hours * 3600)) - (minutes * 60);

    // The resulting values of hours, minutes and seconds are now stored in the corresponding variables
    return fmt::format("{}:{:02d}:{:02d} {}",
                       ((hours % 12 == 0) ? 12 : hours % 12),
                       minutes, seconds, // minutes and seconds
                       (hours < 12 ? "AM" : "PM"));
}