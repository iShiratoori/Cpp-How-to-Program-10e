/*
**  Filename:    PieceWorker.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class PieceWorker Implementation
*/
#include "PieceWorker.h"

PieceWorker::PieceWorker(double wage, int peices)
    : m_wage{wage}, m_peices{peices}
{
    if (wage < 0.0)
    {
        std::invalid_argument{"wage can be less than 0.0"};
    }
    if (peices < 0.0)
    {
        std::invalid_argument{"pieces can be less than 0.0"};
    }
}

PieceWorker::~PieceWorker()
{
}

double PieceWorker::earning() const
{
    return m_wage * m_peices;
}
std::string PieceWorker::toString() const
{
    return fmt::format("wage: {} \nnumber of pieces produced: {}", m_wage, m_peices);
}
