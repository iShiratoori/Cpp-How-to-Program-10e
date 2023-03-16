// main program

#include "Time.h"

int main()
{
    Time t{};
    // t.setTime(21, 21, 21);
    // Time t2{21, 21, 21};
    std::cout
        << fmt::format("Defualt time: {}\n", t.to12HourString());
}