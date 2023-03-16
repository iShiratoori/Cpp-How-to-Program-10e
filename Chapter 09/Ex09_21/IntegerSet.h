/*
**  Filename:    IntegerSet.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        1/12/2022

**  Description: IntegerSet class
*/
#pragma once
#define FMT_HEADER_ONLY
#include <iostream>
#include <vector>
#include <array>
#include <string>
class IntegerSet
{
public:
    IntegerSet();
    // f)
    IntegerSet(std::vector<int> arrElement);
    ~IntegerSet();

    // a)
    IntegerSet unionOfSets(const IntegerSet &other) const;
    // b)
    void intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2);
    // c)
    void insertElement(int element);
    void deleteElement(int element);

    // d)
    std::string toString() const;

    // e)
    const bool isEqual(const IntegerSet &other) const;
    bool contains(const int element);

private:
    std::vector<bool> Elements;
};