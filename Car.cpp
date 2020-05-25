//
// Created by Julian on 25.05.2020.
//

#include "Car.h"
#include <iostream>

Car::Car(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
                const std::string &colour, const std::string &licenseplate):
                    Vehicle(name, pos, horsepower, seats, colour),
                    _licenseplate(licenseplate)
{

}

const std::string &Car::getLicenseplate() const
{
    return _licenseplate;
}