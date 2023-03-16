#include "Time.h"

void displayTime(std::string_view massage, const Time &t)
{
    std::cout << fmt::format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
                             massage, t.to24HourString(), t.to12HourString());
}

int main()
{
    Time t{};
    displayTime("Intial Time", t);

    t.setTime(13, 27, 6);
    displayTime("After setTime", t);

    try
    {
        t.setTime(99, 99, 99);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    displayTime("After attempting to set invalid time", t);

    return 0;
}