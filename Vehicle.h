//
// Created by Julian on 25.05.2020.
//

#ifndef VERERBUNG1_VEHICLE_H
#define VERERBUNG1_VEHICLE_H
#include <string>
#include "Struct.h"


class Vehicle
{
public:
    Vehicle(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
            const std::string &colour);

    void move(Pos to);

    const std::string &getName() const;
    const Pos &getPos() const;
    unsigned int getHorsepower() const;
    unsigned int getSeats() const;
    const std::string &getColour() const;

private:
    std::string _name;
    Pos _pos;
    unsigned int _horsepower;
    unsigned int _seats;
    std::string _colour;
};


#endif //VERERBUNG1_VEHICLE_H
