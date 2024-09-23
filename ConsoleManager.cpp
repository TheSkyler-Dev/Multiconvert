#include "ConsoleManager.h"

ConsoleManager::ConsoleManager()
{
    //ctor
}

void ConsoleManager::clrScrn(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
