#include "Student.h"

int main()
{
    Student s1{};
    Student s2{"Bilan", "Osman", "Omar", "a@gmail.com", "female", 2012, 101};
    Student s3{"abdullahi", "Hussien", "ahmed", "cabdullahiHussein348@gmail.com", "male", 2000, 103};

    s1.setRegistrationN(102).seFirstName("Abdi").setMiddleName("Hussien").setLastName("Shariif");
    s1.setEmail("shiratoori2022@gmail.com").setGender("Male").setYearofBirth(2003);

    std::cout << fmt::format("{:*^30}\n", "Student Class");
    std::cout
        << fmt::format("{}\n{}\n{}\n", s2.display(), s1.display(), s3.display());
}