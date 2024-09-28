#ifndef MASS_H
#define MASS_H


class Mass
{
    public:
        //ctor
        Mass(double g, double kg, double t, double oz, double lb, double tn);

        void massConvert();

        //setters
        void setGrams(double g);
        void setKilos(double kg);
        void setTonnes(double t);
        void setOunces(double oz);
        void setPounds(double lb);
        void setTons(double tn);
    protected:

    private:
        double grams;
        double kilos;
        double tonnes;
        double ounces;
        double pounds;
        double tons;

        void validateInput();
};

#endif // MASS_H
