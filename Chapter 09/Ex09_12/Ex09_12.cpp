#include "Rectangle.h"

int main()
{
    // Rectangle r(0, 0, 20, 0, 0, 20, 20, 20);
    // Rectangle r(3, 1, 3, 5, 5, 5, 5, 1);
    // Rectangle r(-3, -3, -3, 3, 3, 3, 3, -3);
    Rectangle r(1.5, 3, 7.5, 3, 7.5, 9, 1.5, 9);
    // Rectangle r(0, 0, 2, 0, 2, 2, 0, 2);
    // Rectangle r(-5, -5, 5, -5, 5, 5, -5, 5);

    std::cout << fmt::format("Rectangle p {}\n\tLength: {}\n\tWidth: {}\n\tPerimeter: {}\n\tArea: {}\n\tIs square: {}\n\n",
                             r.toRString(), r.getLength(), r.getWidth(), r.getPerimeter(), r.getArea(), r.isSquare());

    return 0;
}