#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;
class Complex
{
friend ostream &operator<<(ostream &output ,  Complex complex);
friend istream &operator>>(istream &input ,   Complex complex);

public:
 bool operator==(Complex &complex);
bool operator!=(Complex &complex);
Complex  operator*(Complex &complex);
Complex( double = 0.0, double = 0.0 ); // constructor
Complex operator+( const Complex & ) const; // addition
Complex operator-( const Complex & ) const; // subtraction
void print() const; // output
private:
double real; // real part
double imaginary; // imaginary part
}; // end class Complex
#endif