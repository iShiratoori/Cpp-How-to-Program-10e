#include "Building.h"

Building::Building()
{
}
Building::~Building()
{
}

const void Building::getCarbonFootPrint()
{
    fmt::print(
        "\t┌{0:─^{2}}┐\n"
        "\t│{1: ^{2}}│\n"
        "\t└{0:─^{2}}┘\n",
        "", "House/Building carbon footprint calculator", 42);

    std::cout << "\nYour individual footprint is calculated by dividing "
              << "\nthe amount of energy by the number of people in your house."
              << "\nHow many people are in your household?\n>";

    int numberOfPeople{0};
    std::cin >> numberOfPeople;
    for (int remaining{1}; remaining <= numberOfPeople; ++remaining)
    {
        std::cout << fmt::format("person ({}/{})\n", remaining, numberOfPeople);
        std::cout << "Electricity in kWh: ";
        setElectricity();

        std::cout << "Natual gas in kWh: ";
        setNatualgas();
        std::cout << "heating Oil in kWh: ";
        setHeatingOil();

        std::cout << "Coal in kWh: ";
        setCoal();

        std::cout << "LPG in US gallons: ";
        setLPG();

        std::cout << "Propane in US gallons: ";
        setPropane();

        std::cout << "Wooden Pellets in metric tons: ";
        setWoodenPellets();

        std::cout << fmt::format("\t{:.2f} metric tons:	 {} kWh of electricity at 0.3929 kgCO2e/kWh\n", calculateEL(getElectricity()), getElectricity());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} kWh of natural gas\n", calculateNG(getNatualgas()), getNatualgas());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} kWh of heating oil\n", calculateHO(getHeatingOil()), getHeatingOil());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} kWh of coal\n", calculateC(getCoal()), getCoal());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} US gallons of LPG\n", calculateLPG(getLPG()), getLPG());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} US gallons of propane\n", calculateLPropane(getPropane()), getPropane());
        std::cout << fmt::format("\t{:.2f} metric tons:	 {} metric tons of wooden pellets\n", calculateWP(getWoodenPellets()), getWoodenPellets());

        double total = calculateEL(getElectricity()) + calculateNG(getNatualgas()) + calculateHO(getHeatingOil()) +
                       calculateC(getCoal()) + calculateLPG(getLPG()) + calculateLPropane(getPropane()) + calculateWP(getWoodenPellets());
        std::cout << fmt::format("\t===========Total House Footprint = {:.2f} metric tons of CO2e===========\n", total);

        addToTotal(total);
    }

    std::cout << fmt::format("Total House Footprint for all {} people is: {:.2f}\n\n", numberOfPeople, getTotal());
}

void Building::setElectricity()
{
    std::cin >> m_Electricity;
    if (m_Electricity < 0.0)
        m_Electricity = 0.0;
}
void Building::setNatualgas()
{
    std::cin >> m_Natualgas;
    if (m_Natualgas < 0.0)
        m_Natualgas = 0.0;
}
void Building::setHeatingOil()
{
    std::cin >> m_heatingOil;
    if (m_heatingOil < 0.0)
        m_heatingOil = 0.0;
}
void Building::setCoal()
{
    std::cin >> m_Coal;
    if (m_Coal < 0.0)
        m_Coal = 0.0;
}
void Building::setLPG()
{
    std::cin >> m_LPG;
    if (m_LPG < 0.0)
        m_LPG = 0.0;
}
void Building::setPropane()
{
    std::cin >> m_Propane;
    if (m_Propane < 0.0)
        m_Propane = 0.0;
}
void Building::setWoodenPellets()
{
    std::cin >> m_WoodenPellets;
    if (m_WoodenPellets < 0.0)
        m_WoodenPellets = 0.0;
}

double Building::getElectricity() const { return m_Electricity; }
double Building::getNatualgas() const { return m_Natualgas; }
double Building::getHeatingOil() const { return m_heatingOil; }
double Building::getCoal() const { return m_Coal; }
double Building::getLPG() const { return m_LPG; }
double Building::getPropane() const { return m_Propane; }
double Building::getWoodenPellets() const { return m_WoodenPellets; }

double Building::calculateEL(const double &value)
{
    // average emission factor for Electricity in  kgCO2e / kWh
    double factor{0.3929};
    double metricTon{(value * factor) / 1000};
    return metricTon;
}

double Building::calculateNG(const double &value)
{
    // average emission factor for natural gas in  kgCO2e / kWh
    double averageEFNG{0.184};
    double metricTon{value * averageEFNG / 1000};
    return metricTon;
}

double Building::calculateHO(const double &value)
{
    // average emission factor for heating oil in  kgCO2e / kWh
    double averageEFHO{0.273};
    double metricTon{value * averageEFHO / 1000};
    return metricTon;
}
double Building::calculateC(const double &value)
{
    // average emission factor for coal in  kgCO2e / kWh
    double averageEFC{0.43};
    double metricTon{value * averageEFC / 1000};
    return metricTon;
}
double Building::calculateLPG(const double &value)
{
    // average emission factor for LPG in kgCO2e / kWh
    double averageEFLGP{5.91};
    double metricTon{value * averageEFLGP / 1000};
    return metricTon;
}
double Building::calculateLPropane(const double &value)
{
    // average emission factor for propane in kgCO2e / kWh
    double averageEFP{5.7};
    double metricTon{value * averageEFP / 1000};
    return metricTon;
}
double Building::calculateWP(const double &value)
{
    // average emission factor for wooden pellets in kgCO2e / kWh
    double averageEFWP{0.0238};
    double metricTon{(value * 4500) * averageEFWP / 1000};
    return metricTon;
}

void Building::addToTotal(const double &T)
{
    m_total += T;
}
double Building::getTotal() const { return m_total; }