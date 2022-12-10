#ifndef POLY_H
#define POLY_H
#include<iostream>
using namespace std;
class Poly
{
 public : Poly(int = 0,char = 0 ,int = 0); 
          Poly operator+(Poly &);
          Poly operator-(Poly &);
          Poly &operator=(Poly );
          Poly operator*(Poly &);
          void operator+=(Poly &);
          void operator-=(Poly &);
          void operator*=(Poly &);
          int getCoef();
          char getVar();
          int getExp();
          void setCoef(int);
          void setVar(char);
          void setExp(int);
 private :
  friend ostream & operator<<(ostream &,Poly );
  friend istream & operator>>(istream &,Poly );

  int coefficient;
  char variable ;
  int exponent;  
};
#endif