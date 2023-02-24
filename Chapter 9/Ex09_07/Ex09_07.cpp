#include "Name.h"

int main()
{
    Name name{"Abdirahman", "Hussien", "Sharif", "Mr"};
    Name name1{};

    std::cout << fmt::format("{}\n", name.toString());

    std::cout << fmt::format("{}\n",
                             name1.setFirstName("Bilan").setMiddeName("Osman").setLastName("Omar").setSalutation("Ms").toString());
}