#include "Timeconvert.h"

Timeconvert::Timeconvert(double h, double m, double s) : hours(h), minutes(m), seconds(s)
{
    validateInput();
}

//Input validaton
void Timeconvert::validateInput(){
    if (hours < 0 || minutes < 0 || seconds < 0){
        throw std::invalid_argument("Time cannot be negative!");
    }
}

//Conversion method
void Timeconvert::convertAll(){
    std::cout << hours << " hour(s) is equivalent to " << hours * 60 << " minutes" << std::endl;
    std::cout << hours << " hour(s) is equivalent to " << hours * 3600 << " second(s)" << std::endl;
    std::cout << minutes << " minute(s) is equivalent to " << minutes / 60 << " hours" << std::endl;
    std::cout << minutes << " minute(s) is equivalent to " << minutes * 60 << " second(s)" << std::endl;
    std::cout << seconds << " second(s) is equivalent to " << seconds / 60 << " minute(s)" << std::endl;
    std::cout << seconds << " second(s) is equivalent to " << seconds / 3600 << " hour(s)" << std::endl;
}

//setters
void Timeconvert::setHours(double h){
    hours = h;
    validateInput();
}

void Timeconvert::setMinutes(double m){
    minutes = m;
    validateInput();
}

void Timeconvert::setSeconds(double s){
    seconds = s;
    validateInput();
}