/*
**  Filename:    MotorVehicle.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        03/11/2022

Description of the problem MotorVehicle class headerfile
*/

#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H
#include <iostream>
#include <string>

class MotorVehicle
{
public:
    MotorVehicle(std::string smake, std::string sFuelType, std::string sColor, int yManufacture, int sEnginceCapacity)
    :make(smake), fuelType(sFuelType), color(sColor)
    {
        if(yManufacture > 0)
            yearOfManufacture = yManufacture;
        if(sEnginceCapacity)
            engineCapacity = sEnginceCapacity;
    }
    
    void setmake(std::string smake){
        make = smake;
    }
    void setFuelType(std::string sFuelType){
        fuelType = sFuelType;
    }
    void setColor(std::string sColor){
        color = sColor;
    }
    void setYearOfManufacture( int yManufacture){
        yearOfManufacture = yManufacture;
    }
    void setEngineCapacity( int sEngineCapacity){
        engineCapacity = sEngineCapacity;
    }

    std::string getMake()              { return make; }
    std::string getFuelType()          { return fuelType; }
    std::string getColor()             { return color; }
    int getYearofManufacture()         { return yearOfManufacture; }
    int getEngineCapaciy()             { return engineCapacity; }
    void displayCarDetails()
    {
        std::cout <<"MotorVehicle Name: " <<getMake() <<std::endl;
        std::cout <<"Fuel Type: " <<getFuelType() <<std::endl;
        std::cout <<"Color: " <<getColor() <<std::endl;
        std::cout <<"Year of Manufacture: " <<getYearofManufacture() <<std::endl;
        std::cout <<"Engine Capacity: " <<getEngineCapaciy()<<std::endl;
    }
private:
    std::string make, fuelType, color;
    int yearOfManufacture, engineCapacity;

};

#endif