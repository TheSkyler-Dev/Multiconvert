#ifndef SPEED_H
#define SPEED_H


class Speed
{
    public:
        //ctor
        Speed(double mps, double kps, double kph, double ftps, double mips, double mph, double m);

        void convertSpd();

        //setters
        void setMetersPerSecond(double mps);
        void setKilometersPerSecond(double kps);
        void setKilometersPerHour(double kph);
        void setFeetPerSecond(double ftps);
        void setMilesPerSecond(double mips);
        void setMilesPerHour(double mph);
        void setMach(double m);

    protected:

    private:
        double metersPerSecond;
        double kilometersPerSecond;
        double kilometersPerHour;
        double feetPerSecond;
        double milesPerSecond;
        double milesPerHour;
        double Mach;

        void validateInput();
};

#endif // SPEED_H
