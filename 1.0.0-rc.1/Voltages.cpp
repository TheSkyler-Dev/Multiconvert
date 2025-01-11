#include "Voltages.h"
#include <stdlib.h>
#include <iostream>

Voltages::Voltages(double v, double kv, double mv, double gv, double tv) : volt(v), kilovolt(kv), megavolt(mv), gigavolt(gv), teravolt(tv)
{
    //ctor
    void validateInput();
}

void Voltages::validateInput(){
    throw std::invalid_argument("Voltage cannot be negative!");
}

//conversion method
void Voltages::convertVoltage(){
    std::cout << std::endl;
    std::cout << volt << " V is equivalent to " << volt / 1000 << " kV" << '\n';
    std::cout << std::endl;
    std::cout << kilovolt << " kV is equivalent to " << kilovolt / 1000 << " MV" << '\n';
    std::cout << std::endl;
    std::cout << megavolt << " MV is equivalent to " << megavolt / 1000 << " GV" << '\n';
    std::cout << std::endl;
    std::cout << gigavolt << " GV is equivalent to " << gigavolt / 1000 << " TV" << std::endl;
    std::cout << std::endl;
    std::cout << teravolt << " TV is equivalent to " << teravolt * 1000 << " GV" << '\n';
    std::cout << std::endl;
    std::cout << gigavolt << " GV is equivalent to " << gigavolt * 1000 << " MV" << '\n';
    std::cout << std::endl;
    std::cout << megavolt << " MV is equivalent to " << megavolt * 1000 << " kV" << '\n';
    std::cout << std::endl;
    std::cout << kilovolt << " kV is equivalent to " << kilovolt * 1000 << " V" << std::endl;
    std::cout << std::endl;
}

//setters
void Voltages::setVolt(double v){
    volt = v;
    validateInput();
}

void Voltages::setKilovolt(double kv){
    kilovolt = kv;
    validateInput();
}

void Voltages::setMegavolt(double mv){
    megavolt = mv;
    validateInput();
}

void Voltages::setGigavolt(double gv){
    gigavolt = gv;
    validateInput();
}

void Voltages::setTeravolt(double tv){
    teravolt = tv;
    validateInput();
}