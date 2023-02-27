#include "Rectangle.h"

int main()
{
    Rectangle r(2.2, 9, 9.8, 9, 2.2, 13.95, 9.8, 13.95);

    std::cout << fmt::format("Rectangle p {}\n\tLength: {}\n\tWidth: {}\n\tPerimeter: {}\n\tArea: {}\n\tIs square: {}\n",
                             r.toRString(), r.getLength(), r.getWidth(), r.getPerimeter(), r.getArea(), r.isSquare());

    r.draw('*', '-');
    return 0;
}