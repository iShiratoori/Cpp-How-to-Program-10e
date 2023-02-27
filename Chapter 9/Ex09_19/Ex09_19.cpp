#include "Date.h"

int main()

{
    // Date date{};
    // Date date{31, 2023};
    Date date{27, 02, 2023};

    std::cout
        << fmt::format("Date: {} in format\n\tDDD YYY: {}\n\tMM/DD/YY: {}\n\tMonName D, YY: {}",
                       date.toString(), date.toDDDString(), date.toYYString(),
                       date.toMonthNameString());
    return 0;
}