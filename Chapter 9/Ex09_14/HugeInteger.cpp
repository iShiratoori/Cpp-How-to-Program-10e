#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
}
HugeInteger::HugeInteger(const std::string_view integer)
{
    if (integer.size() > SIZE)
    {
        throw std::invalid_argument{"number is too large"};
    }

    for (int i = 0; i < integer.length(); i++)
    {
        m_integer.at(i) = isdigit(integer.at(i)) ? integer.at(i) - '0' : 0;
    }
}
HugeInteger::~HugeInteger()
{
}
void HugeInteger::input()
{
    m_integer.fill(0);

    std::string s;
    std::cout << "Enter a digits: ";
    std::cin >> s;

    if (s.size() > SIZE)
        throw("number is too large");

    for (size_t i{SIZE - s.size()}, j{}; i < SIZE; ++i, ++j)
        m_integer[i] = isdigit(s[j]) ? s[j] - '0' : 0;
}
std::string HugeInteger::output()
{
    size_t i{};
    std::string output{};

    while (i < SIZE - 1 && !m_integer[i])
        i++; // skip redundant 0s
    while (i < SIZE)
        output.push_back('0' + m_integer[i++]);

    return output;
}
HugeInteger &HugeInteger::add(const HugeInteger &other)
{
    int carry{0};
    int index{SIZE - 1};
    while (index >= 0)
    {
        int sum = m_integer.at(index) + other.m_integer[index] + carry;

        m_integer.at(index) = sum % 10;
        carry = sum / 10;

        --index;
    }

    if (carry > 0)
    {
        throw std::invalid_argument{"Overfolow"};
    }

    return *this;
}
HugeInteger &HugeInteger::subtract(const HugeInteger &other)
{
    if (this->isLessThan(other))
    {
        throw std::invalid_argument{"Result cant be negative"};
    }

    int index{SIZE - 1};
    while (index >= 0)
    {
        if (m_integer.at(index) < other.m_integer[index])
        {
            m_integer.at(index) += 10;
            m_integer.at(index - 1)--;
        }

        m_integer.at(index) -= other.m_integer[index];

        --index;
    }

    return *this;
}

HugeInteger &HugeInteger::multiply(const HugeInteger &other)
{

    HugeInteger result;

    for (int i2{SIZE - 1}; i2 >= 0; --i2)
    {

        HugeInteger temp;
        int carry{0};

        for (int i1{SIZE - 1}; i1 >= 0; --i1)
        {

            const int N{m_integer[i1] * other.m_integer[i2] + carry};

            temp.m_integer[i1] = N % 10;
            carry = N / 10;
        }

        if (carry)
            throw("no place to store the product");

        size_t shift{SIZE - i2};

        temp.shiftLeft(shift);
        result.add(temp);
    }

    this->m_integer = result.m_integer;
    return *this;
}

HugeInteger &HugeInteger::divide(const HugeInteger &other)
{
    if (other.isZero())
        std::invalid_argument{"attempt to divide by zero"};

    HugeInteger temp;
    std::array<int, SIZE> result{};

    for (size_t i{}; i < SIZE; ++i)
    {

        temp.m_integer.back() = m_integer[i];

        short n{};

        while (temp.isGreaterThanOrEqualTo(other))
        {
            temp.subtract(other);
            n++;
        }

        result[i] = n;

        for (int j{}; j < SIZE - 1; ++j)
            temp.m_integer[j] = temp.m_integer[j + 1];
    }

    m_integer = result;
    return *this;
}

bool HugeInteger::isLessThan(const HugeInteger &other) const
{
    return m_integer < other.m_integer;
}
bool HugeInteger::isEqualTo(const HugeInteger &other) const
{
    return m_integer == other.m_integer;
}
bool HugeInteger::isNotEqualTo(const HugeInteger &other) const
{
    return m_integer != other.m_integer;
}
bool HugeInteger::isGreaterThan(const HugeInteger &other) const
{
    return m_integer > other.m_integer;
}
bool HugeInteger::isGreaterThanOrEqualTo(const HugeInteger &other) const
{
    return m_integer > other.m_integer || m_integer == other.m_integer;
}

bool HugeInteger::isLessThanOrEqualTo(const HugeInteger &other) const
{
    return m_integer < other.m_integer || m_integer == other.m_integer;
}

bool HugeInteger::isZero() const
{
    for (const auto &number : m_integer)
    {
        if (number)
        {
            return false;
        }
    }
    return true;
}

void HugeInteger::shiftLeft(int n)
{
    while (--n)
    {
        if (m_integer.front())
            throw std::invalid_argument{"no room to shift"};

        for (size_t i{}; i < SIZE - 1; ++i)
        {
            m_integer[i] = m_integer[i + 1];
        }
        m_integer.back() = 0;
    }
}