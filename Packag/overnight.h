#ifndef TWODAYPACKAG_
#define TWODAYPACKAG_
#include "packag.h"
class overnight : public Packag
{
public:
    overnight(const string  &,const string &,const string &,const string &, int, double, double ,double=0.0);
    double claculateCost();
    void setFlatFee(double);
    double getFlatFee();

private:
    double flat_fee;
};
#endif