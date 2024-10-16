#include "Energy.h"
#include <iostream>
#include<stdlib.h>

Energy::Energy(double j, double kj, double mj, double gj, double tj, double ev, double kev, double mev, double gev, double tev) : joules(j), kilojoules(kj), megajoules(mj), gigajoules(gj), terajoules(tj), electronvolt(ev), kiloelectronvolt(kev), megaelectronvolt(mev), gigaelectronvolt(gev), teraelectronvolt(tev)
{
    //ctor
    void validateInput();
}

void Energy::validateInput(){
    throw std::invalid_argument("Energy cannot be negative!");
}

//conversion logic
void Energy::convertEnergy(){
    std::cout << joules << " J is equivalent to " << joules / 1000 << " kJ" << '\n';
    std::cout << kilojoules << " kJ is equivalent to " << kilojoules / 1000 << " MJ" << '\n';
    std::cout << megajoules << " MJ is equivalent to " << megajoules / 1000 << " GJ" << '\n';
    std::cout << gigajoules << " GJ is equivalent to " << gigajoules / 1000 << " TJ" << '\n';
    std::cout << electronvolt << " eV is equivalent to " << electronvolt / 1000 << " keV" << std::endl;
    std::cout << kiloelectronvolt << " KeV is equivalent to " << kiloelectronvolt / 1000 << " MeV" << '\n';
    std::cout << megaelectronvolt << " MeV is equivalent to " << megaelectronvolt / 1000 << " GeV" << '\n';
    std::cout << gigaelectronvolt << " GeV is equivalent to " << gigaelectronvolt / 1000 << " TeV" << '\n';
    std::cout << teraelectronvolt << " TeV is equivalent to " << teraelectronvolt * 1000 << " GeV" << std::endl;
    std::cout << gigaelectronvolt << " GeV is equivalent to " << gigaelectronvolt * 1000 << " MeV" << '\n';
    std::cout << megaelectronvolt << " MeV is equivalent to " << megaelectronvolt * 1000 << " keV" << '\n';
    std::cout << kiloelectronvolt << " keV is equivalent to " << kiloelectronvolt * 1000 << " eV" << '\n';
    std::cout << terajoules << " TJ is equivalent to " << terajoules * 1000 << " GJ" << std::endl;
    std::cout << gigajoules << " GJ is equivalent to " << gigajoules * 1000 << " MJ" << '\n';
    std::cout << megajoules << " MJ is equivalent to " << megajoules * 1000 << " kJ" << '\n';
    std::cout << kilojoules << " kJ is equivalent to " << kilojoules * 1000 << " J" << '\n';
    std::cout << std::endl; 
}

//setters
void Energy::setJoules(double j){
    joules = j;
    validateInput();
}

void Energy::setKilojoules(double kj){
    kilojoules = kj;
    validateInput();
}

void Energy::setMegajoules(double mj){
    megajoules = mj;
    validateInput();
}

void Energy::setGigajoules(double gj){
    gigajoules = gj;
    validateInput();
}

void Energy::setTerajoules(double tj){
    terajoules = tj;
    validateInput();
}

void Energy::setElectronvolt(double ev){
    electronvolt = ev;
    validateInput();
}

void Energy::setKiloelectronvolt(double kev){
    kiloelectronvolt = kev;
    validateInput();
}

void Energy::setMegaelectronvolt(double mev){
    megaelectronvolt = mev;
    validateInput();
}

void Energy::setGigaelectronvolt(double gev){
    gigaelectronvolt = gev;
    validateInput();
}

void Energy::setTeraelectronvolt(double tev){
    teraelectronvolt = tev;
    validateInput();
}