//
// Created by Julian on 25.05.2020.
//

#ifndef VERERBUNG1_CAR_H
#define VERERBUNG1_CAR_H
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
            const std::string &colour, const std::string &licenseplate);

    const std::string &getLicenseplate() const ;
private:
    std::string _licenseplate;
};


#endif //VERERBUNG1_CAR_H
