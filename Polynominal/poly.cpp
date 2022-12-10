#include<iostream>
#include"poly.h"
using namespace std ; 


Poly::Poly(int co , char var , int exp)
{
  setCoef(co);
  setExp(exp);
  setVar(var);
}
//seters and geters     
void Poly::setCoef(int co)
{
    coefficient = co ; 
}
void Poly::setExp(int Ex)
{
    exponent = Ex ;
}
void Poly::setVar(char var)
{
    if(var % 32 > 26)
    throw invalid_argument("you must enter charatet A - Z or a - z\n");
     variable = var ;   
}
int Poly::getCoef()
{
    return coefficient;
}
int Poly::getExp()
{
    return exponent;
}
char Poly::getVar()
{
    return variable ;
}
 Poly Poly::operator+(Poly &P)
 {
    Poly p1; 
    p1.setCoef(this->getCoef() + P.getCoef());
    p1.setExp(P.getExp());
    if(P.getVar() != this->getVar())
    throw invalid_argument("this version not support this\n");
    else
    p1.setVar(this->getVar());
    return p1;
 }
 Poly Poly::operator-(Poly &P)
 {
    Poly p1; 
    p1.setCoef(this->getCoef() - P.getCoef());
    p1.setExp(P.getExp());
    if(P.getVar() != this->getVar())
    throw invalid_argument("this version not support this\n");
    else
    p1.setVar(this->getVar());
    return p1;
 }
Poly &Poly::operator=(Poly P)
{
    this->setCoef( P.getCoef());
    this->setExp ( P.getExp());
    this->setVar ( P.getVar());
    return *this;
}
 Poly Poly::operator*(Poly &P)
 {
    Poly p1; 
    p1.setCoef(this->getCoef() * P.getCoef());
    p1.setExp(this->getExp() + P.getExp());
    if(P.getVar() != this->getVar())
    throw invalid_argument("this version not support this\n");
    else
    p1.setVar(this->getVar());
    return p1;
 }
void Poly::operator+=(Poly &P)
{
     *this = (*this + P);   
}
void Poly::operator-=(Poly &P)
{
     *this = (*this - P);   
}
void Poly::operator*=(Poly &P)
{
    *this = (*this * P);   
}
   ostream & operator<<(ostream &output,Poly P)
  {
       output << P.getCoef() <<P.getVar()<<P.getExp();
       return output;
  }
   istream & operator >>(istream &input , Poly P)
   {
    input >> P.coefficient >>P.variable>>P.exponent;
    return input;
   }
