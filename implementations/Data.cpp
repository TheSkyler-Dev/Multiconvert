#include "Data.h"
#include <iostream>
#include <stdlib.h>

Data::Data(double b, double kb, double mb, double gb, double tb, double pb, double eb, double zb, double yb) : bytes(b), kilobytes(kb), megabytes(mb), gigabytes(gb), terabytes(tb), petabytes(pb), exabytes(eb), zettabytes(zb), yottabytes(yb)
{
    //ctor
    void validateInput();
}

void Data::validateInput(){
    if (bytes < 0 || kilobytes < 0 || megabytes < 0 || gigabytes < 0 || terabytes < 0 || petabytes < 0 || exabytes < 0 || zettabytes < 0 || yottabytes < 0){
        throw std::invalid_argument("Data cannot be negative!");
    }
}

void Data::convertData(){
    std::cout << bytes << " B is equivalent to " << bytes / 1000 << " KB" << '\n';
    std::cout << kilobytes << " KB is equivalent to " << kilobytes / 1000 << " MB" << '\n';
    std::cout << megabytes << " MB is equivalent to " << megabytes / 1000 << " GB" << '\n';
    std::cout << gigabytes << " GB is equivalent to " << gigabytes / 1000 << " TB" << std::endl;
    std::cout << terabytes << " TB is equivalent to " << terabytes / 1000 << " PB" << '\n';
    std::cout << petabytes << " PB is equivalent to " << petabytes / 1000 << " EB" << '\n';
    std::cout << exabytes << " EB is equivalent to " << exabytes / 1000 << " ZB" << '\n';
    std::cout << zettabytes << " ZB is equivalent to " << zettabytes / 1000 << " YB" << std::endl;
    std::cout << yottabytes << " YB is equivalent to " << yottabytes * 1000 << " ZB" << '\n';
    std::cout << zettabytes << " ZB is equivalent to " << zettabytes * 1000 << " EB" << '\n';
    std::cout << exabytes << " EB is equivalent to " << exabytes * 1000 << " PB" << '\n';
    std::cout << petabytes << " PB is equivalent to " << petabytes * 1000 << " TB" << std::endl;
    std::cout << terabytes << " TB is equivalent to " << terabytes * 1000 << " GB" << '\n';
    std::cout << gigabytes << " GB is equivalent to " << gigabytes * 1000 << " MB" << '\n';
    std::cout << megabytes << " MB is equivalent to " << megabytes * 1000 << " KB" << '\n';
    std::cout << kilobytes << " KB is equivalent to " << kilobytes * 1000 << " B" << std::endl;
}

//setters
void Data::setBytes(double b){
    bytes = b;
    validateInput();
}

void Data::setKilobytes(double kb){
    kilobytes = kb;
    validateInput();
}

void Data::setMegabytes(double mb){
    megabytes = mb;
    validateInput();
}

void Data::setGigabytes(double gb){
    gigabytes = gb;
    validateInput();
}

void Data::setTerabytes(double tb){
    terabytes = tb;
    validateInput();
}

void Data::setPetabytes(double pb){
    petabytes = pb;
    validateInput();
}

void Data::setExabytes(double eb){
    exabytes = eb;
    validateInput();
}

void Data::setZettabytes(double zb){
    zettabytes = zb;
    validateInput();
}

void Data::setYottabytes(double yb){
    yottabytes = yb;
    validateInput();
}