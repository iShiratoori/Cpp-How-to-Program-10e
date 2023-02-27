/*
**  Filename:    Rectangle.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Emplementation of class Rectangle
*/

#include "Rectangle.h"

Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    setCoordinates(x1, y1, x2, y2, x3, y3, x4, y4);
}

void Rectangle::setCoordinates(double x1, double y1, double x2, double y2,
                               double x3, double y3, double x4, double y4)
{
    // Check that all coordinates are in the first quadrant and not larger than 20.0
    if (x1 < 0.0 || y1 < 0.0 || x2 < 0.0 || y2 < 0.0 || x3 < 0.0 || y3 < 0.0 ||
        x4 < 0.0 || y4 < 0.0 || x1 > 20.0 || y1 > 20.0 || x2 > 20.0 || y2 > 20.0 ||
        x3 > 20.0 || y3 > 20.0 || x4 > 20.0 || y4 > 20.0)
    {
        throw std::invalid_argument{"Error: Coordinates must be in the first quadrant and not larger than 20.0"};
    }

    // Check that the supplied coordinates form a rectangle
    if (!isRectangle(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        throw std::invalid_argument{"Error: Supplied coordinates do not specify a rectangle"};
    }

    // Set the coordinates
    topLeftX = x1;     // The x-coordinate of the top-left corner of the rectangle
    topLeftY = y1;     // The y-coordinate of the top-left corner of the rectangle
    topRightX = x2;    // The x-coordinate of the top-right corner of the rectangle
    topRightY = y2;    // The y-coordinate of the top-right corner of the rectangle
    bottomRightX = x3; // The x-coordinate of the bottom-right corner of the rectangle
    bottomRightY = y3; // The y-coordinate of the bottom-right corner of the rectangle
    bottomLeftX = x4;  // The x-coordinate of the bottom-left corner of the rectangle
    bottomLeftY = y4;  // The y-coordinate of the bottom-left corner of the rectangle
}

double Rectangle::getLength() const
{
    double length1 = sqrt(pow(topRightX - topLeftX, 2) + pow(topRightY - topLeftY, 2));
    double length2 = sqrt(pow(bottomLeftX - bottomRightX, 2) + pow(bottomLeftY - bottomRightY, 2));
    return max(length1, length2);
}

double Rectangle::getWidth() const
{
    double width1 = sqrt(pow(bottomLeftX - topLeftX, 2) + pow(bottomLeftY - topLeftY, 2));
    double width2 = sqrt(pow(bottomRightX - topRightX, 2) + pow(bottomRightY - topRightY, 2));
    return max(width1, width2);
}
double Rectangle::getPerimeter() const
{
    return 2 * (getLength() + getWidth());
}

double Rectangle::getArea() const
{
    return getLength() * getWidth();
}

bool Rectangle::isSquare() const
{
    return getLength() == getWidth();
}

std::string Rectangle::toRString() const
{
    return fmt::format("A({},{}) B({},{}) C({},{}) D({},{})",
                       topLeftX, topLeftY, topRightX, topRightY,
                       bottomRightX, bottomRightY, bottomLeftX, bottomLeftY);
}
void Rectangle::draw(char fillChar, char borderChar) const
{
    // Determine the width and height of the box that encloses the rectangle
    double width = ceil(max(topRightX, bottomRightX)) + 1;
    double height = ceil(max(bottomLeftY, bottomRightY)) + 1;

    // Draw the top border of the box
    std::cout << std::string(width, borderChar) << std::endl;

    // Draw each row of the box, starting from the top
    for (int row = height - 1; row >= 0; row--)
    {
        std::cout << borderChar;
        for (int col = 0; col < width - 2; col++)
        {
            if (row > floor(topLeftY) && row < ceil(bottomLeftY) &&
                col > floor(topLeftX) && col < ceil(topRightX))
            {
                // Inside the rectangle, so leave empty
                std::cout << " ";
            }
            else
            {
                // Border of the rectangle
                std::cout << fillChar;
            }
        }
        std::cout << borderChar << std::endl;
    }

    // Draw the bottom border of the box
    std::cout << std::string(width, borderChar) << std::endl;
}

bool Rectangle::isRectangle(double x1, double y1, double x2, double y2,
                            double x3, double y3, double x4, double y4) const
{
    // Check that opposite sides are parallel and equal in length
    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    if (abs(side1 - side3) < 1e-10 && abs(side2 - side4) < 1e-10)
    {
        // Check that diagonals are of equal length
        double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
        return abs(diagonal1 - diagonal2) < 1e-10;
    }
    else
    {
        return false;
    }
}