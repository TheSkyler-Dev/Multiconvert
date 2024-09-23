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
        std::cout << "|    4: Clear console         |" << "\n";
        std::cout << "|    5: Exit program          |" << "\n";
        std::cout << "===============================" << "\n";
    }

    //Method getUserChoice
    int Menu::getUserChoice(){
        int userChoice;
        std::cin >> userChoice;
        return userChoice;
    }
