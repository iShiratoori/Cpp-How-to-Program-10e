
/*
**  Filename:    IntegerSet.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: class IntegerSet Emplementaion
*/
#include "IntegerSet.h"

IntegerSet::IntegerSet() : Elements(101, false)
{
}
IntegerSet::IntegerSet(std::vector<int> arrElement) : Elements(101, false)
{
    if (arrElement.size() > 100)
    {
        throw std::invalid_argument{"\narray size is greater 100"};
    }
    for (int index{0}; index < arrElement.size(); ++index)
    {
        insertElement(arrElement.at(index));
    }
}

IntegerSet::~IntegerSet()
{
}

void IntegerSet::insertElement(int element)
{
    if (element < 0 || element > 100)
    {
        throw std::invalid_argument{"\nInvalid element to be inserted"};
    }
    Elements.at(element) = true;
}
void IntegerSet::deleteElement(int element)
{
    if (element < 0 || element > 100)
    {
        throw std::invalid_argument{"\nInvalid element to be deleted"};
    }
    Elements.at(element) = false;
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet &other) const
{
    IntegerSet result;
    for (int index{0}; index < Elements.size(); ++index)
    {
        result.Elements[index] = Elements.at(index) || other.Elements[index];
    }

    return result;
}
void IntegerSet::intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2)
{
    for (int index{0}; index <= 100; ++index)
    {
        Elements.at(index) = set1.Elements[index] && set2.Elements[index];
    }
}
std::string IntegerSet::toString() const
{
    std::string str = "{";
    bool first = true;
    for (int i = 0; i <= 100; i++)
    {
        if (Elements.at(i))
        {
            if (!first)
            {
                str += ", ";
            }
            str += std::to_string(i);
            first = false;
        }
        // else // empty dashes
        // {
        //     str += ", -";
        // }
    }
    str += "}";
    return str;
}
const bool IntegerSet::isEqual(const IntegerSet &other) const
{
    return Elements == other.Elements;
}

bool IntegerSet::contains(const int element)
{
    if (element < 0 || element > 100)
    {
        return false;
    }
    return Elements.at(element);
}