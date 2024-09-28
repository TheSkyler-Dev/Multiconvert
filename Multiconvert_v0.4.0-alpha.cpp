//New Main Multiconvert v0.4.0-alpha by TheSkyler-Dev (c) 2024 released under GPL-3.0 license
#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include "Timeconvert.h"
#include "Menu.h"
#include "Temperature.h"
#include "ConsoleManager.h"
#include "Mass.h"

int main(){
    //menu
    Menu menu;
    int userChoice;

    while (true) {
        menu.displayMenu();
        userChoice = menu.getUserChoice();
        switch(userChoice){

            case 1: {
                double hours, minutes, seconds;
                while (true){
                    std::cout << "Enter hours, minutes, and seconds: " << '\n';
                    std::cin >> hours >> minutes >> seconds;

                    if (std::cin.fail() || hours < 0 || minutes < 0 || seconds < 0){
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "invalid input: Time cannot be negative or a letter" << std::endl;
                        continue;
                    }
                    else {
                        break;
                    }
                }

                try {
                    Timeconvert converter(hours, minutes, seconds);
                    converter.convertAll();
                }
                catch (const std::invalid_argument& e) {
                    std::cerr << e.what() << std::endl;
                }
                continue;
            }
            case 2: {
                double celsius, fahrenheit, kelvin;
                while (true){
                    std::cout << "Enter Celsius, Fahrenheit and Kelvin" << '\n';
                    std::cin >> celsius >> fahrenheit >> kelvin;

                    if(std::cin.fail() || celsius < -273.15 || fahrenheit < -459.67 || kelvin < 0){
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "invalid input: Temperatures cannot be lower than absolute zero" << std::endl;
                        continue;
                    }
                    else {
                        break;
                    }
                }

                try {
                    Temperature converter(celsius, fahrenheit, kelvin);
                    converter.tempConvert();
                }
                catch (const std::invalid_argument& e) {
                    std::cerr << e.what() << std::endl;
                }
                continue;
            }
            case 3: {
                double grams, kilos, tonnes, ounces, pounds, tons;
                while (true){
                    std::cout << "Enter grams, kilos, tonnes, ounces, pounds, US tons" << '\n';
                    std::cin >> grams >> kilos >> tonnes >> ounces >> pounds >> tons;

                    if(std::cin.fail() || grams < 0 || kilos < 0 || tonnes < 0 || ounces < 0 || pounds < 0 || tons < 0){
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "invalid input: Mass cannot be negative" << std::endl;
                        continue;
                    }
                    else {
                        break;
                    }
                }

                try {
                    Mass mass(grams, kilos, tonnes, ounces, pounds, tons);
                    mass.massConvert();
                }
                catch (const std::invalid_argument& e) {
                    std::cerr << e.what() << std::endl;
                }
                continue;
            }
            case 4: {
                ConsoleManager console;
                console.clrScrn();
                continue;
            }
            case 5: {
                std::cout << "Thank you for using Multiconvert!" << std::endl;;
                std::this_thread::sleep_for(std::chrono::seconds(2));
                return 0;
            }
            default: {
                while (std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Invalid input! Please enter a whole number! (1 - 5)" << std::endl;
                    continue;
                }
            }
        }
    }

    return 0;
}