#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data(double b, double kb, double mb, double gb, double tb, double pb, double eb, double zb, double yb);

        void convertData();

        //setters
        void setBytes(double b);
        void setKilobytes(double kb);
        void setMegabytes(double mb);
        void setGigabytes(double gb);
        void setTerabytes(double tb);
        void setPetabytes(double pb);
        void setExabytes(double eb);
        void setZettabytes(double zb);
        void setYottabytes(double yb);

    protected:

    private:
        double bytes;
        double kilobytes;
        double megabytes;
        double gigabytes;
        double terabytes;
        double petabytes;
        double exabytes;
        double zettabytes;
        double yottabytes;

        void validateInput();
};

#endif // DATA_H
