#include"Rational.h"
#include<exception>
#include<iostream>
using namespace std;

 Rational::Rational(int nomerator , int domenator)
 {
    if(domenator == 0)
    throw invalid_argument("you canot divided with zero\n");
    help(nomerator, domenator);
 }
 void Rational::help(int nomerator , int domenator)
 {
 
    bool firstTime = true ;
 
    int min = gcd((nomerator >= domenator)? nomerator : domenator , (nomerator <= domenator)? nomerator : domenator ); //find the gratest common divisor to find the gratest number that simplfy the number from first time 
    
    if(min != 1)
   {
      domenator /= min ; 
      nomerator /= min ;
   }
   this ->domenator = domenator ; 
   this ->nomerator = nomerator;
 
  }
 int Rational::gcd(int a, int b)
{
 
    if(b == 0)
    return a ;
    
    return gcd(b , a % b );  
}
 int Rational::LCM(int number1 , int number2)
 {
 
   int value = (number1 >= number2)?number1 : number2;
   int max = value;
   int min =((number1 <= number2)?number1 : number2);
    
   while (value % min != 0)
   {
     value  += max   ;
    }
   return value ;
 }
 Rational Rational::operator+(Rational &number)
 {
    Rational result;
   result.domenator = LCM(this->domenator , number.domenator);
   result.nomerator = (result.domenator/number.domenator)*number.nomerator + (result.domenator/this->domenator)* this->nomerator;
    
   return result;
  }
 ostream &operator<<(ostream &output , Rational number)
 {
  output << number.nomerator<<'/'<<number.domenator<<'\n';
  return output;
 }

  Rational Rational::operator-(Rational &number)
  {
    Rational result;
   result.domenator = LCM(this->domenator , number.domenator);
   result.nomerator = -((result.domenator/number.domenator)*number.nomerator + -((result.domenator/this->domenator)* this->nomerator));
    
   return result;
  }
  Rational Rational::operator*(Rational &number)
  {
    Rational result ;
    result.domenator = number.domenator * this ->domenator;
    result.nomerator = number.nomerator * this ->nomerator;
    return result; 
  }
  Rational Rational::operator/(Rational &number)
  {
      Rational result ; 
      result.nomerator = this->nomerator * number.domenator ;
      result.domenator = this->domenator * number.nomerator;
      return result;
  }
bool  Rational::operator==(Rational &number)
{
 return (this->domenator == number.domenator && this->nomerator == number.nomerator);
} 
