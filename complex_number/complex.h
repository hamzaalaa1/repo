#ifndef COMPLEX_H 
#define COMPLEX_H

class Complex{
  public :
           Complex(double = 0.0 , double = 0.0);
           void addComplex(double , double ,double ,double);
           void subComplex(double ,double ,double ,double);
           void print () ;  
           void setReal(double);
           void setImagin(double);
           double getReal();
           double getImagin(); 
           double real ; 
           double imagin;           
           void print2();
};
#endif
