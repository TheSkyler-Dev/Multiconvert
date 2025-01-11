#include "Mass.h"
#include <iostream>

Mass::Mass(double g, double kg, double t, double oz, double lb, double tn) : grams(g), kilos(kg), tonnes(t), ounces(oz), pounds(lb), tons(tn)
{
    //ctor
    void validateInput();
}

//input validation
void Mass::validateInput(){
    if (grams < 0 || kilos < 0 || tonnes < 0 || ounces < 0 || pounds < 0 || tons < 0){
        throw std::invalid_argument("Mass cannot be negative!");
    }
}

//conversion logic
void Mass::massConvert(){
    std::cout << std::endl;
    std::cout << grams << " g is equivalent to " << grams / 1000 << " kg" << '\n';
    std::cout << std::endl;
    std::cout << kilos << " kg is equivalent to " << kilos / 1000 << " t" << '\n';
    std::cout << std::endl;
    std::cout << tonnes << " t is equivalent to " << tonnes * 1000 << " kg" << '\n';
    std::cout << std::endl;
    std::cout << kilos << " kg is equivalent to " << kilos * 1000 << " g" << '\n';
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << grams << " g is equivalent to " << grams / 1000000 << " t" << std::endl;
    std::cout << std::endl;
    std::cout << ounces << " oz is equivalent to " << ounces / 16 << " lb" << '\n';
    std::cout << std::endl;
    std::cout << pounds << " lb is equivalent to " << pounds / 2000 << " tn" << '\n';
    std::cout << std::endl;
    std::cout << tons << " tn is equivalent to " << tons * 2000 << " lb" << '\n';
    std::cout << std::endl;
    std::cout << pounds << " lb is equivalent to " << pounds * 16 << " oz" << '\n';
    std::cout << std::endl;
    std::cout << ounces << " oz is equivalent to " << ounces / 32000 << " tn" << std::endl;
    std::cout << grams << " g is equivalent to " << grams / 28.35 << " oz" << '\n';
    std::cout << std::endl;
    std::cout << grams << " g is equivalent to " << grams / 453.6 << " oz" << '\n';
    std::cout << std::endl;
    std::cout << grams << " g is equivalent to " << grams / 907200 << " tn" << '\n';
    std::cout << std::endl;
    std::cout << kilos << " kg is equivalent to " << kilos / 35.274 << " oz" << '\n';
    std::cout << std::endl;
    std::cout << kilos << " kg is equivalent to " << kilos * 2.205 << " lb" << '\n';
    std::cout << std::endl;
    std::cout << kilos << " kg is equivalent to " << kilos / 907.2 << " tn" << '\n';
    std::cout << std::endl;
    std::cout << tonnes << " t is equivalent to " << tonnes * 35270 << " oz" << '\n';
    std::cout << std::endl;
    std::cout << tonnes << " t is equivalent to " << tonnes * 2205 << " lb" << '\n';
    std::cout << std::endl;
    std::cout << tonnes << " t is equivalent to " << tonnes * 1.102 << " tn" << std::endl;
    std::cout << std::endl;
}

//setters
void Mass::setGrams(double g){
    grams = g;
    validateInput();
}

void Mass::setKilos(double kg){
    kilos = kg;
    validateInput();
}

void Mass::setTonnes(double t){
    tonnes = t;
    validateInput();
}

void Mass::setOunces(double oz){
    ounces = oz;
    validateInput();
}

void Mass::setPounds(double lb){
    pounds = lb;
    validateInput();
}

void Mass::setTons(double tn){
    tons = tn;
    validateInput();
}