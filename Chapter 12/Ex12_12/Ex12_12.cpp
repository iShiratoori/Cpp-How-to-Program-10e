#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <vector>
#include <variant>
int main()
{

    std::vector<std::variant<Package *, TwoDayPackage *, OvernightPackage *>> packages;
    // create some packages
    Address sender1("John Doe", "123 Main St", "Anytown", "UK", "SK15 8BM");
    Address recipient1("Jane Smith", "456 Oak Ave", "Somecity", "UK", "SK10 6MB");
    Package package1(sender1, recipient1, 10.0, 0.5);

    Address recipient2("Mary Brown", "321 Elm St", "Anycity", "UK", "SK19 9MB");
    TwoDayPackage package2(sender1, recipient2, 5.0, 0.8, 5.0);

    Address recipient3("Tom Wilson", "246 Oak St", "Somewhere", "UK", "SK11 7MB");
    OvernightPackage package3(sender1, recipient3, 20.0, 0.6, 0.2);

    // add packages to vector
    packages.push_back(&package1);
    packages.push_back(&package2);
    packages.push_back(&package3);

    // process packages polymorphically

    double totalShippingCost = 0.0;
    for (const auto &package : packages)
    {
        std::visit([&totalShippingCost](const auto &p)
                   {
                    std::cout <<p->getAddressInfo();
                     double cost = p->calculateCost();
                    std::cout << "Shipping cost: $" << cost << "\n\n";
                    totalShippingCost += cost ; },
                   package);
    }

    std::cout << "Total shipping cost: $" << totalShippingCost << '\n';
    return 0;
}