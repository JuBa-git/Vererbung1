//
// Created by Julian on 25.05.2020.
//

#ifndef VERERBUNG1_MOTORBIKE_H
#define VERERBUNG1_MOTORBIKE_H
#include <string>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
    Motorbike(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
        const std::string &colour, const std::string &licenseplate);

    const std::string &getLicenseplate() const ;
private:
    std::string _licenseplate;
};

#endif //VERERBUNG1_MOTORBIKE_H
