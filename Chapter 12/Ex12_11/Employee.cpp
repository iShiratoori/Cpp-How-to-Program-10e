#include "Employee.h"

Employee::Employee(std::string_view name, conpensationModel model, const Date &DOB)
    : m_name{name}, m_model{model}, m_employeeDOB{DOB}
{
}

void Employee::setConpensationModel(conpensationModel model)
{
    m_model = model;
}
void Employee::setEmployeeDOB(const Date &employeeDOB)
{
    m_employeeDOB = employeeDOB;
}

void Employee::calculatePayroll()
{
    auto getEarning = [](const auto &model)
    { return model.earning(); };
    m_payroll += std::visit(getEarning, m_model);
}
void Employee::Bonus(double bonus)
{
    m_payroll += bonus;
}
double Employee::getPayroll() const
{
    return m_payroll;
}

int Employee::getBM() const { return m_employeeDOB.getMonth(); }

std::string Employee::toString() const
{
    auto getString = [](const auto &model)
    { return model.toString(); };

    return fmt::format("name: {} \n{}", m_name, std::visit(getString, m_model));
}
double Employee::earning() const
{
    auto getEarning = [](const auto &model)
    { return model.earning(); };

    return std::visit(getEarning, m_model);
}