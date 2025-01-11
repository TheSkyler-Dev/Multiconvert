#ifndef ENERGY_H
#define ENERGY_H

class Energy
{
    public:
        /** Default constructor */
        Energy(double j, double kj, double mj, double gj, double tj, double ev, double kev, double mev, double gev, double tev);

        void convertEnergy();

        //setters
        void setJoules(double j);
        void setKilojoules(double kj);
        void setMegajoules(double mj);
        void setGigajoules(double gj);
        void setTerajoules(double tj);
        void setElectronvolt(double ev);
        void setKiloelectronvolt(double kev);
        void setMegaelectronvolt(double mev);
        void setGigaelectronvolt(double gev);
        void setTeraelectronvolt(double tev);
    protected:

    private:
        double joules;
        double kilojoules;
        double megajoules;
        double gigajoules;
        double terajoules;
        double electronvolt;
        double kiloelectronvolt;
        double megaelectronvolt;
        double gigaelectronvolt;
        double teraelectronvolt;

        void validateInput();
};

#endif // ENERGY_H
