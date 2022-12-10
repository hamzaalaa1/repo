#ifndef QUEB_H
#define QUEB_H
#include"ThreeDshap.h"

class Qube : public ThreeDShap
{
  public : 
     Qube(double = 0.0, double = 0.0,double = 0.0);
     virtual double area();
     virtual double volume() ;

};
#endif