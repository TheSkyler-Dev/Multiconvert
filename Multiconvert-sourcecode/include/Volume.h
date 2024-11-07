#ifndef VOLUME_H
#define VOLUME_H

class Volume
{
    public:
        Volume(double cmm, double ccm, double cdm, double cum, double ckm, double cuin, double cuft, double cuyd, double cumi);

        void convertVolume();

        //setters
        void setCubicmm(double cmm);
        void setCubiccm(double ccm);
        void setCubicdm(double cdm);
        void setCubicm(double cum);
        void setCubickm(double ckm);
        void setCubicin(double cuin);
        void setCubicft(double cuft);
        void setCubicyd(double cuyd);
        void setCubicmi(double cumi);

    protected:

    private:
    double cubicmm;
    double cubiccm;
    double cubicdm;
    double cubicm;
    double cubickm;
    double cubicin;
    double cubicft;
    double cubicyd;
    double cubicmi;

    void validateInput();
};

#endif // VOLUME_H
