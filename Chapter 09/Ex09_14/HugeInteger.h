#pragma once
#define FMT_HEADER_ONLY
#include <stdexcept>
#include <array>
#include <string>
#include <string_view>
#include <vector>
#include <iostream>
#include <fmt/format.h>

class HugeInteger
{
public:
    HugeInteger();
    HugeInteger(const std::string_view integer);
    ~HugeInteger();

    void input();
    std::string output();
    HugeInteger &add(const HugeInteger &other);
    HugeInteger &subtract(const HugeInteger &other);
    HugeInteger &multiply(const HugeInteger &other);
    HugeInteger &divide(const HugeInteger &other);

    bool isEqualTo(const HugeInteger &otheri) const;
    bool isNotEqualTo(const HugeInteger &other) const;
    bool isGreaterThan(const HugeInteger &other) const;
    bool isLessThan(const HugeInteger &other) const;
    bool isGreaterThanOrEqualTo(const HugeInteger &other) const;
    bool isLessThanOrEqualTo(const HugeInteger &other) const;
    bool isZero() const;

private:
    static const size_t SIZE{40};
    std::array<int, SIZE> m_integer{};

    void shiftLeft(int n); // function shifts the digits of the result variable to the left by one position,
};