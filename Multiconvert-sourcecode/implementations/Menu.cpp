#include "Menu.h"
#include<iostream>

Menu::Menu(){
    
}

    void Menu::displayMenu(){
        std::cout << "===============================" << "\n";
        std::cout << "|  Please select a converter  |" << "\n";
        std::cout << "===============================" << "\n";
        std::cout << "|    1: Convert all units     |" << "\n";
        std::cout << "|    2: Convert Temps         |" << "\n";
        std::cout << "|    3: Convert all mass      |" << "\n";
        std::cout << "|    4: Convert length        |" << "\n";
        std::cout << "|    5: Convert volume        |" << "\n";
        std::cout << "|    6: Convert speed         |" << "\n";
        std::cout << "|    7: Convert data          |" << "\n";
        std::cout << "|    8: Convert voltage       |" << "\n";
        std::cout << "|    9: convert energy        |" << "\n";
        std::cout << "|   10: Calculate spheres     |" << "\n";
        std::cout << "|   11: Clear console         |" << "\n";
        std::cout << "|   12: Exit program          |" << "\n";
        std::cout << "===============================" << "\n";
        std::cout << std::endl;
    }

    //Method getUserChoice
    int Menu::getUserChoice(){
        int userChoice;
        std::cin >> userChoice;
        return userChoice;
    }
