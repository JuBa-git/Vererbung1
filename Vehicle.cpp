//
// Created by Julian on 25.05.2020.
//

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
                 const std::string &colour): _name(name), _pos(pos), _horsepower(horsepower), _seats(seats),
                                             _colour(colour)
{
    std::cout << "Hello World, I am a " << getName() << std::endl;
}

void Vehicle::move(Pos to)
{
    std::cout << "Move vehicle " << getName() << " from (" << getPos().x << "," << getPos().y << ") to ("
              << to.x << "," << to.y << ") " << std::endl;
    _pos = to;
}

const std::string &Vehicle::getName() const
{
    return _name;
}

const Pos &Vehicle::getPos() const
{
    return _pos;
}

unsigned int Vehicle::getHorsepower() const
{
    return _horsepower;
}

unsigned int Vehicle::getSeats() const
{
    return _seats;
}

const std::string &Vehicle::getColour() const
{
    return _colour;
}