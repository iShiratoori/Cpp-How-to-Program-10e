#pragma once
#include <variant>
#include <string_view>
#include "Salaried.h"
#include "Commission.h"
#include "Date.h"

using conpensationModel = std::variant<Salaried, Commission>;

class Employee
{
public:
    Employee(std::string_view name, conpensationModel model, const Date &DOB);

    void setConpensationModel(conpensationModel model);
    void setEmployeeDOB(const Date &employeeDOB);

    void calculatePayroll();
    void Bonus(double bonus);

    double getPayroll() const;

    int getBM() const;
    std::string toString() const;
    double earning() const;

private:
    std::string m_name;
    double m_payroll{0.0};
    conpensationModel m_model;
    Date m_employeeDOB;
};