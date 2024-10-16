#include "Length.h"
#include <iostream>
#include <stdlib.h>
#include <stdexcept>

Length::Length(double mm, double cm, double dm, double m, double km, double in, double ft, double yd, double mi) : millimeters(mm), centimeters(cm), decimeters(dm), meters(m), kilometers(km), inches(in), feet(ft), yards(yd), miles(mi) 
{
    //ctor
    void validateInput();
}

void Length::validateInput(){
    if (millimeters < 0 || centimeters < 0 || decimeters < 0 || meters < 0 || kilometers < 0 || inches < 0 || feet < 0 || yards < 0 || miles < 0){
        throw std::invalid_argument("Length cannot be negative!");
    }
}

void Length::convertLength(){
    std::cout << millimeters << " mm is equivalent to " << millimeters / 10 << " cm" << '\n';
    std::cout << centimeters << " cm is equivalent to " << centimeters / 10 << " dm" << '\n';
    std::cout << decimeters << " dm is equivalent to " << decimeters / 10 << " m" << '\n';
    std::cout << meters << " m is equivalent to " << meters / 1000 << " km" << std::endl;
    std::cout << millimeters << " mm is equivalent to " << millimeters / 100 << " dm" << '\n';
    std::cout << centimeters << " cm is equivalent to " << centimeters / 100 << " m" << '\n';
    std::cout << millimeters << " mm is equivalent to " << millimeters / 1000 << " m" << '\n';
    std::cout << centimeters << " cm is equivalent to " << centimeters / 100000 << " km" << std::endl;
    std::cout << kilometers << " km is equivalent to " << kilometers * 1000 << " m" << '\n';
    std::cout << meters << " m is equivalent to " << meters * 10 << " dm" << '\n';
    std::cout << decimeters << " dm is equivalent to " << decimeters * 10 << " cm" << '\n';
    std::cout << centimeters << " cm is equivalent to " << centimeters * 10 << " mm" << std::endl;
    std::cout << '\n';
    std::cout << inches << " in is equivalent to " << inches / 12 << " ft" << '\n';
    std::cout << feet << " ft is equivalent to " << feet / 3 << " yd" << '\n';
    std::cout << yards << " yd is equivalent to " << yards / 1760 << " mi" << std::endl;
    std::cout << miles << " mi is equivalent to " << miles * 1760 << " yd" << '\n';
    std::cout << yards << " yd is equivalent to " << yards * 3 << " ft" << '\n';
    std::cout << feet << " ft is equivalent to " << feet * 12 << " in"<< '\n';
    std::cout << std::endl;
    std::cout << millimeters << " mm is equivalent to " << millimeters / 25.4 << " in" << '\n';
    std::cout << inches << " in is equivalent to " << inches * 25.4 << " mm" << '\n';
    std::cout << centimeters << " cm is equivalent to " << centimeters / 30.48 << " ft" << '\n';
    std::cout << feet << " ft is equivalent to " << feet * 30.48 << " cm" << std::endl;
    std::cout << meters << " m is equivalent to " << meters * 1.094 << " yd" << '\n';
    std::cout << yards << " yd is equivalent to " << yards / 1.094 << " m" << '\n';
    std::cout << kilometers << " km is equivalent to " << kilometers / 1.609 << " mi" << '\n';
    std::cout << miles << " mi is equivalent to " << miles * 1.609 << " km" << std::endl;
}

//setters
void Length::setMillimeters(double mm){
    millimeters = mm;
    validateInput();
}

void Length::setCentimeters(double cm){
    centimeters = cm;
    validateInput();
}

void Length::setDecimeters(double dm){
    decimeters = dm;
    validateInput();
}

void Length::setMeters(double m){
    meters = m;
    validateInput();
}

void Length::setKilometers(double km){
    kilometers = km;
    validateInput();
}

void Length::setInches(double in){
    inches = in;
    validateInput();
}

void Length::setFeet(double ft){
    feet = ft;
    validateInput();
}

void Length::setYards(double yd){
    yards = yd;
    validateInput();
}

void Length::setMiles(double mi){
    miles = mi;
    validateInput();
}