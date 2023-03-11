/*
**  Filename:    Address.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/01/2023
**  Description: class Address
*/
#pragma once
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <string>
#include <string_view>
class Address
{
public:
    Address(std::string_view name = "", std::string_view address = "", std::string_view city = "",
            std::string_view state = "", std::string_view postCode = "")
        : m_name(name), m_address(address), m_city(city), m_state(state), m_postCode(postCode)
    {
    }

    // getters
    std::string getName() const { return m_name; }
    std::string getAddress() const { return m_address; }
    std::string getCity() const { return m_city; }
    std::string getState() const { return m_state; }
    std::string getpostCode() const { return m_postCode; }

    // setters
    void setName(std::string_view name) { m_name = name; }
    void setAddress(std::string_view address) { m_address = address; }
    void setCity(std::string_view city) { m_city = city; }
    void setState(std::string_view state) { m_state = state; }
    void setpostCode(std::string_view postCode) { m_postCode = postCode; }

private:
    std::string m_name;
    std::string m_address;
    std::string m_city;
    std::string m_state;
    std::string m_postCode;

private:
};