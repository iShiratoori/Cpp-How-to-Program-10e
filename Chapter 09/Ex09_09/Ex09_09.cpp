#include "Student.h"

int main()
{

    Name studentName{"Bilan", "Osman", "Omar", "Ms"};
    Student s1{studentName, "a@gmail.com", "female", 101};
    s1.setBOB(12, 12, 2012);

    studentName.setFirstName("Abdirahman").setMiddeName("Hussien").setLastName("Shariif");
    studentName.setSalutation("Mr");
    Student s2{studentName, "shiratoori2022@gmail.com", "male", 102};
    s2.setBOB(12, 12, 2003);

    studentName.setFirstName("Abdullahi").setMiddeName("Hussein").setLastName("Shariif").setSalutation("Mr");
    Student s3{studentName, "Abdullahi@gmail.com", "male", 103};

    std::cout << fmt::format("\n\t\t{:*^30}\n\n", "Enhanced Student Class");

    std::cout
        << fmt::format("{}\n{}\n{}\n", s1.display(), s2.display(), s3.setBOB(11, 11, 2000).display());

    return 0;
}