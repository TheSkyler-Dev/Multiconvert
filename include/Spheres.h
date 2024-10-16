#ifndef SPHERES_H
#define SPHERES_H
#include <string>


class Spheres
{
    public:
        /** Default constructor */
        Spheres(double r, std::string u);

        void calculateSpheres();

        //setters
        void setRadius(double r);
        void setUnit(std::string u);

    protected:

    private:
        double radius;
        std::string unit;
        const double pi = 3.141592654;

        void validateInputDouble();
        void validateInputString();
};

#endif // SPHERES_H
