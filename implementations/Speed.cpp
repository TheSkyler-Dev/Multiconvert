#include "Speed.h"
#include <iostream>

Speed::Speed(double mps, double kps, double kph, double ftps, double mips, double mph, double m) : metersPerSecond(mps), kilometersPerSecond(kps), kilometersPerHour(kph), feetPerSecond(ftps), milesPerSecond(mips), milesPerHour(mph), Mach(m)
{
    //ctor
    void validateInput();
}

void Speed::validateInput(){
    if (metersPerSecond < 0 || kilometersPerSecond < 0 || kilometersPerHour < 0 || feetPerSecond < 0 || milesPerSecond < 0 || milesPerHour < 0 || Mach < 0){
        throw std::invalid_argument("Speed cannot be negative!");
    }
}

//conversionLogic
void Speed::convertSpd(){
    std::cout << metersPerSecond << " m/s is equivalent to " << metersPerSecond / 1000 << " km/s" << '\n';
    std::cout << kilometersPerSecond << " km/s is equivalent to " << kilometersPerSecond * 1000 << " m/s" << '\n';
    std::cout << metersPerSecond << " m/s is equivalent to " << metersPerSecond * 3.6 << " km/h" << '\n';
    std::cout << kilometersPerSecond << " km/s is equivalent to " << kilometersPerSecond * 3600 << " km/h" << std::endl;
    std::cout << kilometersPerHour << " km/h is equivalent to " << kilometersPerHour / 3600 << " km/s" << '\n';
    std::cout << kilometersPerHour << " km/h is equivalent to " << kilometersPerHour / 3.6 << " m/s" << '\n';
    std::cout << feetPerSecond << " ft/s is equivalent to " << feetPerSecond / 5280 << " mi/s" << '\n';
    std::cout << milesPerSecond << " mi/s is equivalent to " << milesPerSecond * 5280 << " ft/s" << std::endl;
    std::cout << feetPerSecond << " ft/s is equivalent to " << feetPerSecond / 1.467 << " mph" << '\n';
    std::cout << milesPerSecond << " mi/s is equivalent to " << milesPerSecond * 3600 << " mph" << '\n';
    std::cout << milesPerHour << " mph is equivalent to " << milesPerHour / 3600 << " mi/s" << '\n';
    std::cout << milesPerHour << " mph is equivalent to " << milesPerHour * 1.487 << " ft/s" << std::endl;
    std::cout << milesPerHour << " mph is equivalent to " << milesPerHour * 1.609 << " km/h" << '\n';
    std::cout << kilometersPerHour << " km/h is equivalent to " << kilometersPerHour / 1.609 << " mph" << '\n';
    std::cout << kilometersPerSecond << " km/s is equivalent to " << kilometersPerSecond / 1.609 << " mi/s" << '\n';
    std::cout << milesPerSecond << " mi/s is equivalent to " << milesPerSecond * 1.609 << " km/s" << std::endl;
    std::cout << metersPerSecond << " m/s is equivalent to " << metersPerSecond * 3.281 << " ft/s" << '\n';
    std::cout << feetPerSecond << " ft/s is equivalent to " << feetPerSecond / 3.281 << " m/s" << '\n';
    std::cout << '\n';
    std::cout << metersPerSecond << " m/s is equivalent to Mach " << metersPerSecond / 343 << '\n';
    std::cout << kilometersPerSecond << " km/s is equivalent to Mach " << kilometersPerSecond * 2.915452 << '\n';
    std::cout << kilometersPerHour << " km/h is equivalent to Mach " << kilometersPerHour / 1235 << std::endl;
    std::cout << "Mach " << Mach << " is equivalent to " << Mach * 1235 << " km/h" << '\n';
    std::cout << "Mach " << Mach << " is equivalent to " << Mach * 2.915452 << " km/s" << '\n';
    std::cout << "Mach " << Mach << " is equivalent to " << Mach * 343 << " m/s" << '\n';
    std::cout << feetPerSecond << " ft/s is equivalent to Mach " << feetPerSecond / 1125 << std::endl;
    std::cout << milesPerSecond << " mi/s is equivalent to Mach " << milesPerSecond * 4.692 << '\n';
    std::cout << milesPerHour << " mph is equivalent to Mach " << milesPerHour / 767.3 << '\n';
    std::cout << "Mach " << Mach << " is equivalent to " << Mach * 767.3 << " mph"<< '\n';
    std::cout << "Mach " << Mach << " is equivalent to " << Mach / 4.692 << " mi/s"<< '\n';
    std::cout << "Mach " << Mach << " is equivalent to " << Mach * 1125 << " ft/s" << std::endl;
}

//setters
void Speed::setMetersPerSecond(double mps){
    metersPerSecond = mps;
    validateInput();
}

void Speed::setKilometersPerSecond(double kps){
    kilometersPerSecond = kps;
    validateInput();
}

void Speed::setKilometersPerHour(double kph){
    kilometersPerHour = kph;
    validateInput();
}

void Speed::setFeetPerSecond(double ftps){
    feetPerSecond = ftps;
    validateInput();
}

void Speed::setMilesPerSecond(double mips){
    milesPerSecond = mips;
    validateInput();
}

void Speed::setMilesPerHour(double mph){
    milesPerHour = mph;
    validateInput();
}

void Speed::setMach(double m){
    Mach = m;
    validateInput();
}