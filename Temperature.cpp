#include "Temperature.h"
#include <iostream>

Temperature::Temperature(double c, double f, double k) : celsius(c), fahrenheit(f), kelvin(k)
{
    void validateInput();
    //ctor
}

//input validation for absolute zero
void Temperature::validateInput(){
    if (celsius < -273.15 || fahrenheit < -459.67 || kelvin < 0){
        throw std::invalid_argument("Temperature cannot be lower than absolute zero!");
    }
}

//conversion method
void Temperature::tempConvert(){
    std::cout << celsius << " Deg C is " << celsius * (9/5) + 32 << " Deg F" << "\n";
    std::cout << fahrenheit << " Deg F is " << (fahrenheit - 32) * 5/9 << " Deg C" << "\n";
    std::cout << celsius << " Deg C is " << celsius + 273.15 << "K" << "\n";
    std::cout << fahrenheit << " Deg F is " << 5/9 * fahrenheit + 459.67 << "K" << "\n";
    std::cout << kelvin << "K is " << kelvin - 273.15 << " Deg C" << "\n";
    std::cout << kelvin << "K is " << (kelvin - 273.15) * 1.8 + 32 << " Deg F" << std::endl;
}

//setters
void Temperature::setCelsius(double c){
    celsius = c;
    validateInput();
}

void Temperature::setFahrenheit(double f){
    fahrenheit = f;
    validateInput();
}

void Temperature::setKelvin(double k){
    kelvin = k;
    validateInput();
}