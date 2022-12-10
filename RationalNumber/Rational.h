#ifndef RATIONAL_H
#define RATIONAL_H
#include<iostream>
using namespace std;
class  Rational 
{
public :
  Rational(int = 1 , int = 1);
  //Rational operator/(const Rational &);
  bool  operator== (Rational &); 
  Rational operator+(Rational &);
  Rational operator-(Rational &);
  Rational operator*(Rational &);
  Rational operator/(Rational &);
  private : 
  friend ostream& operator<<(ostream &  , Rational  );
  int gcd(int a, int b);
  int LCM(int number1 , int number2);
  void help(int ,int);
  
  int nomerator ; 
  int domenator ;
};
 
#endif