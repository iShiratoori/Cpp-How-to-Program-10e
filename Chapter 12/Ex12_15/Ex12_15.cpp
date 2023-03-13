#include "Building.h"
#include "Car.h"
#include "Bicycle.h"
int main()
{
    std::vector<CarbonFootPrint *> carbons;
    Building building;
    Car car;
    Bicycle bicycle;

    carbons.push_back(&building);
    carbons.push_back(&car);
    carbons.push_back(&bicycle);

    for (auto &carbon : carbons)
    {
        carbon->getCarbonFootPrint();
    }

    double total{building.getTotal() + car.getTotal() - bicycle.getTotal()};

    std::cout << fmt::format("House:   {:.2f}  metric tons of CO2e \nCar:     {:.2f} metric tons of CO2e",
                             building.getTotal(), car.getTotal())
              << fmt::format("\nBicycle: {:.2f} metric tons of CO2e saved \n\nTotal:   {:.2f} metric tons of CO2e",
                             bicycle.getTotal(), total);

    return 0;
}