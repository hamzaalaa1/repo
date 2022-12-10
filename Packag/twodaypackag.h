#ifndef TWODAYPACKAG_H
#define TWODAYPACKAG_H
#include"packag.h"
class TowDayPackag:public Packag{
public :TowDayPackag(const string& ,const string& ,const string& ,const string&,int,double,double=0.0,double=0.0);
double claculateCost();
void setFlatFee(double );
double getFlatFee();
private :
double flat_fee;
};
#endif