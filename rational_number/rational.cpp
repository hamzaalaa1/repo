#include"rational.h"
#include<iostream>

Rational_Number::Rational_Number(int N,int D)
{
  //int dev = reduced(N , D);  
  setN(N);
  setD(D);
}
int Rational_Number::reduced(int N ,int D)
{
 int d ; 
 if(N < D)
 {
   if(!(D % N))
   return N ;
  for(int i = N/2 ; i >= 1 ;i--)
  {
    if((D % i) == 0 && ((N % i) == 0))
    {
     return i ; 
    }
  }
 }
 else if(N > D)
 {
    if(!(N % D))
    return D;
    for(int i = D/2 ; i >= 1 ;i--)
  {
    if((N % i) == 0 && ((D % i) == 0))
    {
     return i ; 
    }
  }
 }
 else if(N == D)
 {
  return N;
 }
 return 1 ;
}
int LCM(int  D1,int D2)
{
 if(D1 > D2)
   for(int i = D1 ;true; i += D1)
   {
     if(!(i % D2))
     return i;
   }
 else if(D2 > D1)
      for(int i = D2 ;true; i += D2)
   {
     if(!(i % D1))
     return i;
   }
}
 int Rational_Number::getN()
{
return numberator;
}	
int Rational_Number::getD()
{
return denumerator;
}
void Rational_Number::setN(int N)
{
 numberator = N ;
}
void Rational_Number::setD(int R)
{
 denumerator = R;
}
void Rational_Number::add(int  N,int D)
{
 int dev ; 
 int n  ;
 
  if(D == getD())
  {
    dev = reduced(getN()+N,D);
    setN((getN()+N)/dev);
    setD(D / dev);
  }else 
  {
    n = getN();
    int x , y ;
    int m = LCM(D , getD());
    x = m / D ; 
    y = m / getD();  
    N  *= x; 
    n  *= y;
    dev = reduced(n+N,D);
    setN((n+N)/dev);
    setD(m);
  }
}
void Rational_Number::sub(int  N,int D)
{
 int dev ; 
 int n  ;
 
  if(D == getD())
  {
    dev = reduced(getN()+N,D);
    setN((getN()-N)/dev);
    setD(D / dev);
  }else 
  {
    n = getN();
    int x , y ;
    int m = LCM(D , getD());
    x = m / D ; 
    y = m / getD();  
    N  *= x; 
    n  *= y;
    dev = reduced(n-N,D);
    setN((n-N)/dev);
    setD(m);
  }
}
void Rational_Number::dev(int N ,int D)
{
 int Rn ,Rd ,dev; 
  Rd = N * getD();
  Rn = D * getN(); 
  dev = reduced(Rn,Rd);
  setN(Rn/dev);
  setD(Rd/dev);	
}
Rational_Number::~Rational_Number()
{
 cout<<"distractor";
}
