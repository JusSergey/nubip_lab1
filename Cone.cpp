#include "Cone.h"
#include <iostream>
#include <cmath>

constexpr auto SCALE = 1.0471975511966;

double Cone::getRadius() const
{
    return _radius;
}

void Cone::setRadius(double radius)
{
    _radius = radius;
}

double Cone::getHeight() const
{
    return _height;
}

void Cone::setHeight(double height)
{
    _height = height;
}

void Cone::setVolume(double volume)
{
    _radius = sqrt(volume / SCALE);
    _height = 1.0;
}

double Cone::getVolume() const
{
    return (getArea() * _height) / 3.0;
}

void Cone::print_val() const
{
    std::cout << "Volume is: " << getVolume() << std::endl;
}

void Cone::printAddressOfThisObject()
{
    std::cout << "created new object with address: " << std::hex << this << std::dec << std::endl;
}

double Cone::getArea() const
{
    return 3.1415 * _radius * _radius;
}

bool Cone::checkInputData(double value) const
{
    return value >= 0.0;
}

Cone::Cone(double radius, double reight) :
    _radius(radius),
    _height(reight)
{
    printAddressOfThisObject();

    if (!checkInputData(radius) || !checkInputData(reight)) {
        std::cout << "input data are invalid\n";
        _radius = std::max(radius, 0.0);
        _height = std::max(reight, 0.0);
    }
}

Cone::~Cone()
{
    std::cout << "destructor\n" << std::flush;
}
