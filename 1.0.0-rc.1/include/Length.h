#ifndef LENGTH_H
#define LENGTH_H


class Length
{
    public:
        Length(double mm, double cm, double dm, double m, double km, double in, double ft, double yd, double mi);
        
        void convertLength();

        //setters
        void setMillimeters(double mm);
        void setCentimeters(double cm);
        void setDecimeters(double dm);
        void setMeters(double m);
        void setKilometers(double km);
        void setInches(double in);
        void setFeet(double ft);
        void setYards(double yd);
        void setMiles(double mi);

    protected:

    private:
    double millimeters;
    double centimeters;
    double decimeters;
    double meters;
    double kilometers;
    double inches;
    double feet;
    double yards;
    double miles;

    void validateInput();
};

#endif // LENGTH_H
