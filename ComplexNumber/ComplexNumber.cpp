#include <iostream>
#include "ComplexNumber.h" // Complex class definition
using namespace std;
// Constructor
Complex::Complex( double realPart, double imaginaryPart ) : real( realPart ),imaginary( imaginaryPart )
{
// empty body
} // end Complex constructor
// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
return Complex( real + operand2.real,
imaginary + operand2.imaginary );
} // end function operator+
// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
return Complex( real - operand2.real,
imaginary - operand2.imaginary );
}
ostream &operator<<(ostream &output ,     Complex complex)
{
    output<<'('<<complex.real<<','<<complex.imaginary<<')';
    return output; //for cascading output;
}
 istream &operator>>(istream &input , Complex  complex)
{
    input>>complex.real>>complex.imaginary;
    return input; //for cascading output;
}
bool Complex::operator==(Complex &complex)
{
    return (complex.real == this->real && complex.imaginary == complex.imaginary);
}
bool Complex::operator!=(Complex &complex)
{
    return !(*this == complex);
}
Complex Complex::operator*(Complex &complex)
{ 
    Complex result ; 
    result.real = this->real * complex.real + (- complex.imaginary * this->imaginary);
    result.imaginary = (this->real * complex.imaginary) + (this->imaginary * complex.real);
    return result ;
}
 