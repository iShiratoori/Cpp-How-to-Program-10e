/*
**  Filename:    Rectangle.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (class Rectangle)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <fmt/format.h>

class Rectangle
{
public:
    Rectangle(double w = 1.0, double l = 1.0);

    double calculatePerimeter();
    double calculateArea();

    void setWidth(double w);
    void setLength(double l);

    double getWidth() const;
    double getLength() const;

private:
    double m_width{1.0};
    double m_length{1.0};
};