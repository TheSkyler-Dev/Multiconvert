#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class Temperature
{
    public:
        //ctor
        Temperature(double c, double f, double k);

        void tempConvert();

        //setters
        void setCelsius(double c);
        void setFahrenheit(double f);
        void setKelvin(double k);

    protected:

    private:
        double celsius;
        double fahrenheit;
        double kelvin;

        void validateInput();
};

#endif // TEMPERATURE_H
