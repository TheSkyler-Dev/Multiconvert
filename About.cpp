#include "About.h"
#include <iostream>

About::About()
{
    //ctor
}
void About::displayInfo(){
    std::cout << '\n';
    std::cout << "===================================================" << '\n';
    std::cout << "| Multiconvert v1.0.0-rc.1 by TheSkyler-Dev       |" << '\n';
    std::cout << "| Released on January 7th 2025                    |" << '\n';
    std::cout << "| Licensed under GPL v3.0                         |" << '\n';
    std::cout << "| -> https://www.gnu.org/licenses/gpl-3.0.en.html |" << '\n';
    std::cout << "|                                                 |" << '\n';
    std::cout << "|=================================================|" << '\n';
    std::cout << "|                                                 |" << '\n';
    std::cout << "| Multiconvert is a comprehensive unit converson  |" << '\n';
    std::cout << "| tool written in C++ that supports multiple      |" << '\n';
    std::cout << "| measurement types including:                    |" << '\n';
    std::cout << "|     - Physical units (length, volume, time)     |" << '\n';
    std::cout << "|     - Temperature                               |" << '\n';
    std::cout << "|     - Speed and Energy                          |" << '\n';
    std::cout << "|     - Digital storage                           |" << '\n';
    std::cout << "|     - Electrical measurements                   |" << '\n';
    std::cout << "|     - Geometric calculations                    |" << '\n';
    std::cout << "|                                                 |" << '\n';
    std::cout << "| Visit this program's GitHub repository:         |" << '\n';
    std::cout << "| https://github.com/TheSkyler-Dev/Multiconvert   |" << '\n';
    std::cout << "|                                                 |" << '\n';
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
}