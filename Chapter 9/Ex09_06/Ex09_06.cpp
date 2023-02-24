#include "Rational.h"

int main()
{
    Rational r{}; // result

    // adition
    Rational r1{1, 3};
    Rational r2{3, 9};
    r.add(r1, r2);
    std::cout << fmt::format("Addition \n\t  {} / {} \n\t= {}\n\t= {}\n\n",
                             r1.toRationalString(), r2.toRationalString(), r.toRationalString(), r.toDouble());

    // subtraction
    Rational r3{1, 3};
    Rational r4{3, 9};
    r.subtract(r3, r4);
    std::cout << fmt::format("Subtraction \n\t  {} / {} \n\t= {}\n\t= {}\n\n",
                             r3.toRationalString(), r4.toRationalString(), r.toRationalString(), r.toDouble());

    // multiplication
    Rational r5{4};
    Rational r6{4, 7};
    r.multiply(r5, r6);
    std::cout << fmt::format("Multiplication \n\t  {} / {} \n\t= {}\n\t= {}\n\n",
                             r5.toRationalString(), r6.toRationalString(), r.toRationalString(), r.toDouble());
    // division
    Rational r7{2, 2};
    Rational r8{2};
    r.divide(r7, r8);
    std::cout << fmt::format("Division \n\t  {} / {} \n\t= {}\n\t= {}\n\n",
                             r7.toRationalString(), r8.toRationalString(), r.toRationalString(), r.toDouble());
}