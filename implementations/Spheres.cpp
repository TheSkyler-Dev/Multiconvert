#include "Spheres.h"
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cctype>
#include <cmath>
#include <algorithm>

Spheres::Spheres(double r, std::string u): radius(r), unit(u)
{
    //ctor
    void validateInputDouble();
    void validateInputString();
}

void Spheres::validateInputDouble(){
    if (radius < 0){
        throw std::invalid_argument("Radius must be a positive numeric value!");
    }
}

void Spheres::validateInputString(){
    if (unit.empty()){
        throw std::invalid_argument("Unit cannot be empty!");
    }

    for (char c : unit){
        if (!isalpha(c)){
            throw std::invalid_argument("Unit must only contain alphabetic characters! Press [Enter] to retry");
        }
    }
    const std::string validUnits[] = {"mm", "cm", "dm", "m", "km", "in", "ft", "yd", "mi"};

    bool isValid = std::find(std::begin(validUnits), std::end(validUnits), unit) != std::end(validUnits);

    //throw exception if unit invalid
    if (!isValid){
        throw std::invalid_argument("Invalid unit! Acceptable units are: mm, cm, dm, m, km, in, ft, yd, mi. Press [Enter] to retry");
    }
}

void Spheres::calculateSpheres(){
    std::cout << "Area of the sphere: " << 4 * pi * std::pow(radius, 2) << " " << unit << " squared" << std::endl;
    std::cout << "Volume of the sphere: " << (4/3) * pi * std::pow(radius, 3) << " cubic " << unit << std::endl;
}

//setters
void Spheres::setRadius(double r){
    radius = r;
    validateInputDouble();
}

void Spheres::setUnit(std::string u){
    unit = u;
    validateInputString();
}