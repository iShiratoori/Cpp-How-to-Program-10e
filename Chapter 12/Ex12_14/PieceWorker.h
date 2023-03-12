/*
**  Filename:    PieceWorker.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class PieceWorker
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <string>

class PieceWorker final
{
public:
    explicit PieceWorker(double wage, int peices);
    ~PieceWorker();

    double earning() const;
    std::string toString() const;

private:
    double m_wage{0.0};
    int m_peices{0};
};