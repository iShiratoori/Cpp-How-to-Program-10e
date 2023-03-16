#include "Quadratic.h"

int main()
{
    Quadratic q2{1, 2, 3};
    Quadratic q3{3, 1, 2};

    std::cout
        << fmt::format("Quadratic Equation \nAddition\n\t  {} \n\t+ {} \n\t--------------\n\t= ",
                       q2.toString(), q3.toString())
        << fmt::format("{}\n", q2.add(q3).toString());
    std::cout
        << fmt::format("Subtraction\n\t  {}\n\t- {} \n\t--------------\n\t= ",
                       q3.toString(), q2.toString())
        << fmt::format("{}\n", q3.subtract(q2).toString());

    Quadratic q1{};
    q1.a(1).b(-2).c(-3);
    // q1.a(0).b(0).c(0);
    std::cout
        << fmt::format("\nQuadratic Equation: {}\n", q1.toString());
    q1.solveX(); // aslo q1.a(1).b(-2).c(-3).solveX();
}