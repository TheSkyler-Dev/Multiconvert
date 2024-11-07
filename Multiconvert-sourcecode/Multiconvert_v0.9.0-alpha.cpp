//New Main Multiconvert v0.8.0-alpha by TheSkyler-Dev (c) 2024 released under GPL-3.0 license
#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include "Timeconvert.h"
#include "Menu.h"
#include "Temperature.h"
#include "ConsoleManager.h"
#include "Mass.h"
#include "Length.h"
#include "Volume.h"
#include "Speed.h"
#include "Data.h"
#include "Voltages.h"
#include "Energy.h"
#include "Spheres.h"

int main(){
    //menu
    Menu menu;
    int userChoice;

    while (true) {
        menu.displayMenu();
        userChoice = menu.getUserChoice();
        switch(userChoice){
 
            case 1: { //time conversions: see Timeconvert.cpp for conversion logic
                double hours, minutes, seconds;
                Timeconvert time(hours, minutes, seconds);
                bool validInput = false;

                while (!validInput){
                    try {
                        std::cout << "Enter hours, seconds and minutes: " << std::endl;
                        if(!(std::cin >> hours >> minutes >> seconds)){
                            throw std::invalid_argument("Invalid values for time");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        time.setHours(hours);
                        time.setMinutes(minutes);
                        time.setSeconds(seconds);

                        validInput = true;

                        time.convertAll();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 2: { //temperature conversions: see Temperature.cpp for conversion logic
                double celsius, fahrenheit, kelvin;
                Temperature temp(celsius, fahrenheit, kelvin);
                bool validInput = false;

                while (!validInput){
                    try {
                        std::cout << "Enter celsius, fahrenheit and kelvin: " << std::endl;
                        if(!(std::cin >> celsius >> fahrenheit >> kelvin)){
                            throw std::invalid_argument("Invalid values for temperature");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        temp.setCelsius(celsius);
                        temp.setFahrenheit(fahrenheit);
                        temp.setKelvin(kelvin);

                        validInput = true;

                        temp.tempConvert();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 3: { //weight conversions: see Mass.cpp for conversion logic
                double grams, kilos, tonnes, ounces, pounds, tons;
                Mass mass(grams, kilos, tonnes, ounces, pounds, tons);
                bool validInput = false;
                
                while (!validInput){
                    try {
                        std::cout << "Enter (6) mass values: " << std::endl;
                        if(!(std::cin >> grams >> kilos >> tonnes >> ounces >> pounds >> tons)){
                            throw std::invalid_argument("Invalid values for mass");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        mass.setGrams(grams);
                        mass.setKilos(kilos);
                        mass.setTonnes(tonnes);
                        mass.setOunces(ounces);
                        mass.setPounds(pounds);
                        mass.setTons(tons);

                        validInput = true;

                        mass.massConvert();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 4: { //length conversions: see Length.cpp for conversion logic
                double millimeters, centimeters, decimeters, meters, kilometers, inches, feet, yards, miles;
                Length length(millimeters, centimeters, decimeters, meters, kilometers, inches, feet, yards, miles);
                bool validInput = false;
                while (!validInput){
                    try {
                        std::cout << "Enter length values: " << std::endl;
                        if(!(std::cin >> millimeters >> centimeters >> decimeters >> meters >> kilometers >> inches >> feet >> yards >> miles)){
                            throw std::invalid_argument("Invalid values for length");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        length.setMillimeters(millimeters);
                        length.setCentimeters(centimeters);
                        length.setDecimeters(decimeters);
                        length.setMeters(meters);
                        length.setKilometers(kilometers);
                        length.setInches(inches);
                        length.setFeet(feet);
                        length.setYards(yards);
                        length.setMiles(miles);

                        validInput = true;

                        length.convertLength();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            } 

            case 5: { //volume conversions: see Volume.cpp for conversion logic
                double cubicmm, cubiccm, cubicdm, cubicm, cubickm, cubicin, cubicft, cubicyd, cubicmi;
                Volume volume(cubicmm, cubiccm, cubicdm, cubicm, cubickm, cubicin, cubicft, cubicyd, cubicmi);
                bool validInput = false;
                while (!validInput){
                    try {
                        std::cout << "Enter volume: " << std::endl;
                        if(!(std::cin >> cubicmm >> cubiccm >> cubicdm >> cubicm >> cubickm >> cubicin >> cubicft >> cubicyd >> cubicmi)){
                            throw std::invalid_argument("Invalid values for volume");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        volume.setCubicmm(cubicmm);
                        volume.setCubiccm(cubiccm);
                        volume.setCubicdm(cubicdm);
                        volume.setCubicm(cubicm);
                        volume.setCubickm(cubickm);
                        volume.setCubicin(cubicin);
                        volume.setCubicft(cubicft);
                        volume.setCubicyd(cubicyd);
                        volume.setCubicmi(cubicmi);

                        validInput = true;

                        volume.convertVolume();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            } 

            case 6: { //speed conversions: see Speed.cpp for conversion logic
                double metersPerSecond, kilometersPerSecond, kilometersPerHour, feetPerSecond, milesPerSecond, milesPerHour, Mach;
                Speed speed(metersPerSecond, kilometersPerSecond, kilometersPerHour, feetPerSecond, milesPerSecond, milesPerHour, Mach);
                bool validInput = false;
                while (!validInput){
                    try {
                        std::cout << "Enter speed values: " << std::endl;
                        if(!(std::cin >> metersPerSecond >> kilometersPerSecond >> kilometersPerHour >> feetPerSecond >> milesPerSecond >> milesPerHour >> Mach)){
                            throw std::invalid_argument("Invalid values for speed");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        speed.setMetersPerSecond(metersPerSecond);
                        speed.setKilometersPerSecond(kilometersPerSecond);
                        speed.setKilometersPerHour(kilometersPerHour);
                        speed.setFeetPerSecond(feetPerSecond);
                        speed.setMilesPerSecond(milesPerSecond);
                        speed.setMilesPerHour(milesPerHour);
                        speed.setMach(Mach);

                        validInput = true;

                        speed.convertSpd();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 7: { //data conversions: see Data.cpp for conversion logic
                double bytes, kilobytes, megabytes, gigabytes, terabytes, petabytes, exabytes, zettabytes, yottabytes;
                Data data(bytes, kilobytes, megabytes, gigabytes, terabytes, petabytes, exabytes, zettabytes, yottabytes);
                bool validInput = false;
                while (!validInput){
                    try {
                        std::cout << "Enter speeds: " << std::endl;
                        if(!(std::cin >> bytes >> kilobytes >> megabytes >> gigabytes >> terabytes >> petabytes >> exabytes >> zettabytes >> yottabytes)){
                            throw std::invalid_argument("Invalid values for data storage");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        data.setBytes(bytes);
                        data.setKilobytes(kilobytes);
                        data.setMegabytes(megabytes);
                        data.setGigabytes(gigabytes);
                        data.setTerabytes(terabytes);
                        data.setPetabytes(petabytes);
                        data.setExabytes(exabytes);
                        data.setZettabytes(zettabytes);
                        data.setYottabytes(yottabytes);

                        validInput = true;

                        data.convertData();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 8: { //voltage conversions: see Voltages.cpp for conversion logic
                double volt, kilovolt, megavolt, gigavolt, teravolt;
                Voltages volts(volt, kilovolt, megavolt, gigavolt, teravolt);
                bool validInput = false;

                while (!validInput){
                    try {
                        std::cout << "Enter hours, seconds and minutes: " << std::endl;
                        if(!(std::cin >> volt >> kilovolt >> megavolt >> gigavolt >> teravolt)){
                            throw std::invalid_argument("Invalid values for time");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        volts.setVolt(volt);
                        volts.setKilovolt(kilovolt);
                        volts.setMegavolt(megavolt);
                        volts.setGigavolt (gigavolt);
                        volts.setTeravolt(teravolt);

                        validInput = true;

                        volts.convertVoltage();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 9: { //energy conversions: see Energy.cpp for conversion logic
                double joules, kilojoules, megajoules, gigajoules, terajoules, electronvolt, kiloelectronvolt, megaelectronvolt, gigaelectronvolt, teraelectronvolt;
                Energy nrg(joules, kilojoules, megajoules, gigajoules, terajoules, electronvolt, kiloelectronvolt, megaelectronvolt, gigaelectronvolt, teraelectronvolt);
                bool validInput = false;

                while(!validInput){
                    try {
                        std::cout << "Enter any Energy values: " << std::endl;
                        if(!(std::cin >> joules >> kilojoules >> megajoules >> gigajoules >> terajoules >> electronvolt >> kiloelectronvolt >> megaelectronvolt >> gigaelectronvolt >> teraelectronvolt)){
                            throw std::invalid_argument("Invalid value for energy");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        nrg.setJoules(joules);
                        nrg.setKilojoules(kilojoules);
                        nrg.setMegajoules(megajoules);
                        nrg.setGigajoules(gigajoules);
                        nrg.setTerajoules(terajoules);
                        nrg.setElectronvolt(electronvolt);
                        nrg.setKiloelectronvolt(kiloelectronvolt);
                        nrg.setMegaelectronvolt(megaelectronvolt);
                        nrg.setGigaelectronvolt(gigaelectronvolt);
                        nrg.setTeraelectronvolt(teraelectronvolt);

                        validInput = true;

                        nrg.convertEnergy();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 10: { //calculate surface area and volume of spheres, see Spheres.cpp for more context
                double radius;
                std::string unit;
                Spheres spheres(radius, unit);
                bool validInput = false;

                while(!validInput){ //catch input errors, then execute calculations
                    try {
                        std::cout << "Enter a value for radius: " << std::endl;
                        if(!(std::cin >> radius)){
                            throw std::invalid_argument("Invalid value for radius");
                        }
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        std::cout << "Enter a unit (mm, cm, dm, m, km, in, ft, yd or mi): " << std::endl;
                        std::getline(std::cin, unit);

                        spheres.setRadius(radius);
                        spheres.setUnit(unit);

                        validInput = true;

                        spheres.calculateSpheres();
                    }
                    catch (const std::invalid_argument& e){
                        std::cerr << "Error: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    catch (const std::exception& e){
                        std::cerr << "An error occured: " << e.what() << std::endl;
                        std::cout << std::string(90, '~') << '\n';
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                continue;
            }

            case 11: { //console clear case: avoids a messy terminal window when needed
                ConsoleManager console;
                console.clrScrn();
                continue;
            }
            case 12: { //exit case: used to properly end the program
                std::cout << "Thank you for using Multiconvert!" << std::endl;;
                std::this_thread::sleep_for(std::chrono::seconds(2));
                return 0;
            }
            default: { //error handling for invalid inputs in the menu choice
                while (std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Invalid input! Please enter a whole number! (1 - 8)" << std::endl;
                    continue;
                }
            }
        }
    }
    return 0;
}