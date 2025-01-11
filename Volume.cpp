#include "Volume.h"
#include <iostream>
#include <cstdlib>
#include <stdexcept>


Volume::Volume(double cmm, double ccm, double cdm, double cum, double ckm, double cuin, double cuft, double cuyd, double cumi) : cubicmm(cmm), cubiccm(ccm), cubicdm(cdm), cubicm(cum), cubickm(ckm), cubicin(cuin), cubicft(cuft), cubicyd(cuyd), cubicmi(cumi)
{
    //ctor
    void validateInput();
}

void Volume::validateInput(){
    if (cubicmm < 0 || cubiccm < 0 || cubicdm < 0 || cubicm < 0 || cubickm < 0 || cubicin < 0 || cubicft <0 || cubicyd < 0 || cubicmi < 0){
        throw std::invalid_argument("Volume cannot be negative!");
    }
}

void Volume::convertVolume(){
    std::cout << std::endl;
    std::cout << cubicmm << " mm³ is equivalent to " << cubicmm / 1000 << " cubic centimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubiccm << " cm³ is equivalent to " << cubiccm / 1000 << " cubic decimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubicdm << " dm³ is equivalent to " << cubicdm / 1000 << " cubic meters" << '\n';
    std::cout << std::endl;
    std::cout << cubicm << " m³ is equivalent to " << cubicm / 1e+9 << " cubic kilometers" << std::endl;
    std::cout << std::endl;
    std::cout << cubickm << " km³ is equivalent to " << cubickm * 1e+9 << " cubic meters" << '\n';
    std::cout << std::endl;
    std::cout << cubicm << " m³ is equivalent to " << cubicm * 1000 << " cubic decimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubicdm << " dm³ is equivalent to " << cubicdm * 1000 << " cubic centimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubiccm << " cm³ is equivalent to " << cubiccm * 1000 << " cubic millimeters" << std::endl;
    std::cout << std::endl;
    std::cout << '\n';
    std::cout << cubicin << " in³ is equivalent to " << cubicin / 1728 << " cubic feet" << '\n';
    std::cout << std::endl;
    std::cout << cubicft << " ft³ is equivalent to " << cubicft / 27 << " cubic yards" << '\n';
    std::cout << std::endl;
    std::cout << cubicyd << " yd³ is equivalent to " << cubicyd / 5.452e+9 << " cubic miles" << std::endl;
    std::cout << std::endl;
    std::cout << cubicmi << " mi³ is equivalent to " << cubicmi * 5.452e+9 << " cubic yards" << '\n';
    std::cout << std::endl;
    std::cout << cubicyd << " yd³ is equivalent to " << cubicyd * 27 << " cubic feet" << '\n';
    std::cout << std::endl;
    std::cout << cubicft << " ft³ is equivalent to " << cubicft * 1728 << " cubic inches" << '\n';
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << cubicmm << " mm³ is equivalent to " << cubicmm / 16390 << " cubic inches" << '\n';
    std::cout << std::endl;
    std::cout << cubicin << " in³ is equivalent to " << cubicin * 16390 << " cubic millimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubiccm << " cm³ is equivalent to " << cubiccm / 16.387 << " cubic inches" << '\n';
    std::cout << std::endl;
    std::cout << cubicin << " in³ is equivalent to " << cubicin * 16.387 << " cubic centimeters" << std::endl;
    std::cout << std::endl;
    std::cout << cubicdm << " dm³ is equivalent to " << cubicdm / 28.317 << " cubic feet" << '\n';
    std::cout << std::endl;
    std::cout << cubicft << " ft³ is equivalent to " << cubicft * 28.317 << " cubic decimeters" << '\n';
    std::cout << std::endl;
    std::cout << cubicm << " m³ is equivalent to " << cubicm / 1.308 << " cubic yards" << '\n';
    std::cout << std::endl;
    std::cout << cubicyd << " yd³ is equivalent to " << cubicyd * 1.308 << " cubic meters" << std::endl;
    std::cout << std::endl;
    std::cout << cubickm << " km³ is equivalent to " << cubickm / 4.168 << " cubic miles" << '\n';
    std::cout << std::endl;
    std::cout << cubicmi << " mi³ is equivalent to " << cubicmi * 4.168 << " cubic kilometers" << std::endl;
    std::cout << std::endl;
}

//setters
void Volume::setCubicmm(double cmm){
    cubicmm = cmm;
    validateInput();
}

void Volume::setCubiccm(double ccm){
    cubiccm = ccm;
    validateInput();
}

void Volume::setCubicdm(double cdm){
    cubicdm = cdm;
    validateInput();
}

void Volume::setCubicm(double cum){
    cubicm = cum;
    validateInput();
}

void Volume::setCubickm(double ckm){
    cubickm = ckm;
    validateInput();
}

void Volume::setCubicin(double cuin){
    cubicin = cuin;
    validateInput();
}

void Volume::setCubicft(double cuft){
    cubicft = cuft;
    validateInput();
}

void Volume::setCubicyd(double cuyd){
    cubicyd = cuyd;
    validateInput();
}

void Volume::setCubicmi(double cumi){
    cubicmi = cumi;
    validateInput();
}