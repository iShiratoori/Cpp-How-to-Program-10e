/*
**  Filename:    Rectangle.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Emplementation of class Rectangle
*/
#include "Rectangle.h"

Rectangle::Rectangle(double w, double l)
{
    setWidth(w);
    setLength(l);
}

double Rectangle::calculatePerimeter()
{
    return 2 * (getWidth() + getLength());
}
double Rectangle::calculateArea()
{
    return getWidth() * getLength();
}

void Rectangle::setWidth(double w)
{
    if (w < 0.0 && w > 20.0)
    {
        throw std::invalid_argument{"width must be greater 0.0 and less than 20.0 "};
    }

    m_width = w;
}
void Rectangle::setLength(double l)
{
    if (l < 0.0 && l > 20.0)
    {
        throw std::invalid_argument{"length must be greater 0.0 and less than 20.0 "};
    }
    m_length = l;
}

double Rectangle::getWidth() const { return m_width; }
double Rectangle::getLength() const { return m_length; }