/*
**  Filename:    CarbonFootprint.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        20/01/2023
**  Description: (CarbonFootprint Abstract Class: Polymorphism)
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
// #include "rapidcsv/rapidcsv.h"

class CarbonFootPrint
{
public:
    CarbonFootPrint();
    virtual ~CarbonFootPrint() = default;

    virtual const void getCarbonFootPrint() = 0;

private:
    // std::vector<std::string> m_countries;
};