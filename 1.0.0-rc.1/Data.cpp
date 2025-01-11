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
    std::cout << std::endl;
    std::cout << bytes << " B is equivalent to " << bytes / 1024 << " KiB" << '\n';
    std::cout << std::endl;
    std::cout << kilobytes << " KiB is equivalent to " << kilobytes / 1024 << " MiB" << '\n';
    std::cout << std::endl;
    std::cout << megabytes << " MiB is equivalent to " << megabytes / 1024 << " GiB" << '\n';
    std::cout << std::endl;
    std::cout << gigabytes << " GiB is equivalent to " << gigabytes / 1024 << " TiB" << std::endl;
    std::cout << std::endl;
    std::cout << terabytes << " TiB is equivalent to " << terabytes / 1024 << " PiB" << '\n';
    std::cout << std::endl;
    std::cout << petabytes << " PiB is equivalent to " << petabytes / 1024 << " EiB" << '\n';
    std::cout << std::endl;
    std::cout << exabytes << " EiB is equivalent to " << exabytes / 1024 << " ZiB" << '\n';
    std::cout << std::endl;
    std::cout << zettabytes << " ZiB is equivalent to " << zettabytes / 1024 << " YiB" << std::endl;
    std::cout << std::endl;
    std::cout << yottabytes << " YiB is equivalent to " << yottabytes * 1024 << " ZiB" << '\n';
    std::cout << std::endl;
    std::cout << zettabytes << " ZiB is equivalent to " << zettabytes * 1024 << " EiB" << '\n';
    std::cout << std::endl;
    std::cout << exabytes << " EiB is equivalent to " << exabytes * 1024 << " PiB" << '\n';
    std::cout << std::endl;
    std::cout << petabytes << " PiB is equivalent to " << petabytes * 1024 << " TiB" << std::endl;
    std::cout << std::endl;
    std::cout << terabytes << " TiB is equivalent to " << terabytes * 1024 << " GiB" << '\n';
    std::cout << std::endl;
    std::cout << gigabytes << " GiB is equivalent to " << gigabytes * 1024 << " MiB" << '\n';
    std::cout << std::endl;
    std::cout << megabytes << " MiB is equivalent to " << megabytes * 1024 << " KiB" << '\n';
    std::cout << std::endl;
    std::cout << kilobytes << " KiB is equivalent to " << kilobytes * 1024 << " B" << std::endl;
    std::cout << std::endl;
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