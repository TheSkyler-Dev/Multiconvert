#ifndef VOLTAGES_H
#define VOLTAGES_H

class Voltages
{
    public:
        /** Default constructor */
        Voltages(double v, double kv, double mv, double gv, double tv);

        void convertVoltage();

        //setters
        void setVolt(double v);
        void setKilovolt(double kv);
        void setMegavolt(double mv);
        void setGigavolt(double gv);
        void setTeravolt(double tv);

    protected:

    private:
        double volt;
        double kilovolt;
        double megavolt;
        double gigavolt;
        double teravolt;

        void validateInput();
};

#endif // VOLTAGES_H
