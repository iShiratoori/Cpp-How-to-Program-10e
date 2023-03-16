/*
**  Filename:    Rectangle.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: (Enhancing Class Rectangle)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <fmt/format.h>
#include <cmath>

using namespace std;
class Rectangle
{
public:
    Rectangle(double x1, double y1, double x2, double y2,
              double x3, double y3, double x4, double y4);

    void setCoordinates(double x1, double y1, double x2, double y2,
                        double x3, double y3, double x4, double y4);

    double getLength() const;
    double getWidth() const;
    double getPerimeter() const;
    double getArea() const;
    bool isSquare() const;

    std::string toRString() const;

private:
    /**
     * @brief The x-coordinate of the top-left corner of the rectangle
     */
    double topLeftX, topLeftY;
    double topRightX, topRightY;
    double bottomRightX, bottomRightY;
    double bottomLeftX, bottomLeftY;

    bool isRectangle(double x1, double y1, double x2, double y2,
                     double x3, double y3, double x4, double y4) const;
};