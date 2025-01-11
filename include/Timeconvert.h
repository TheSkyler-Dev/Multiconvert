#ifndef TIMECONVERT_H
#define TIMECONVERT_H

#include <iostream>
#include <string>
#include <stdexcept>

class Timeconvert
{
    public:
        //ctor
        Timeconvert(double h, double m, double s);

        void convertAll();

        //setters
        void setHours(double h);
        void setMinutes(double m);
        void setSeconds(double s);

    protected:

    private:
        double hours;
        double minutes;
        double seconds;

        void validateInput();
};

#endif // TIMECONVERT_H
