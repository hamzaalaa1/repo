#include"complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double R , double I)
{
 setReal(R);
 setImagin(I);
}
void Complex::setReal(double R)
{
 real = R;
}
void Complex::setImagin(double I){
 imagin = I ; 
}
double Complex::getReal(){
return real;
}
double Complex::getImagin()  
{
 return imagin ;
}
void Complex::print () 
{
cout<<'('<<getReal()<<','<<getImagin()<<')'<<endl;
}
void Complex::addComplex(double R1, double I1,double R2,double I2)
{
 setReal(R1 + R2);
 setImagin(I1 + I2);
}
void Complex::subComplex(double R1, double I1,double R2,double I2)
{
  setReal(R1 - R2);
  setImagin(I1 - I2);
}


