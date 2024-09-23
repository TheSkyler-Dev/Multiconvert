#ifndef CONSOLEMANAGER_H
#define CONSOLEMANAGER_H

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

class ConsoleManager
{
    public:
        ConsoleManager();
        void clrScrn();

    protected:

    private:
};

#endif // CONSOLEMANAGER_H
