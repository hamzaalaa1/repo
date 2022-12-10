#ifndef RATIONAL_H 
#define RATIONAL_H
class Rational_Number
{
 public : 
           Rational_Number(int nume = 0, int denume = 0);
           int getN();
           int getD();
           void setN(int );
           void setD(int );
           void add(int N,int D);
           void sub(int N,int D);
           void dev(int N ,int D);
           ~Rational_Number();

 private:
           int reduced(int , int);
           int numberator ; 
           int denumerator ;           	
};
#endif
