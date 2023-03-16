#include "Rectangle.h"

int main()
{
    Rectangle r1{.5, 1.9};
    std::cout << fmt::format(" Rectange width: {} lenght: {}\n\t  Area = {} \n\t  Parameter = {}",
                             r1.getWidth(), r1.getLength(),
                             r1.calculateArea(), r1.calculatePerimeter());

    return 0;
}