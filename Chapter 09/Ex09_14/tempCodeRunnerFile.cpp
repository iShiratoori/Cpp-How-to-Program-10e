HugeInteger result;

    for (size_t i{0}; i < SIZE; ++i)
    {
        result.m_integer[i] = m_integer.at(i) + other.m_integer[i];
    }

    m_integer = result.m_integer;
    return *this;