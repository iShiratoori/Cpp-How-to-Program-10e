#include "Student.h"

int main()
{

    Name studentName{"", "", "", ""};
    Student s1{studentName, "a@gmail.com", "female", 101};
    s1.setBOB(99, 99, 99);

    std::cout << fmt::format("\n\t\t{:*^30}\n\n", "Enhanced Student Class");

    std::cout
        << fmt::format("{}\n{}\n{}\n", s1.display());

    return 0;
}