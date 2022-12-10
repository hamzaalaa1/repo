#ifndef THREEDSHAP_H
#define THREEDSHAP_H
#include "chap.h"
class ThreeDShap : public Shap
{
public:
    ThreeDShap(double, double,double=0.0);
    
    void   setLenth(double);
    double getLenth()const;
    virtual double volume() = 0 ;
    virtual void draw(char) 
    {

    }
private: 
    double  lenth;    
};
#endif