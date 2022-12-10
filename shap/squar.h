#ifndef SQUAR_H
#define SQUAR_H

#include"TowDShap.h"

class Squar :public TowDShap
{
 public : 
   Squar(double);

   virtual double area();
   virtual void draw(char);

   void   setRed(double);
   double getRed()const;

 private:
   double red ; 
  const  double PI; 
};
#endif 
