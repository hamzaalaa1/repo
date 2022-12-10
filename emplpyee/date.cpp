#include<iostream>
#include<stdexcept>
#include"date.h"
using namespace std ;

Date::Date(int d , int m,int y)
{
  cout<<"date Constructor\n";
  if(m < 13 && m > 0)
  month = m ; 
  else 
  throw invalid_argument("inValid month number");

   if(d > 0 && d < 30)
  {
    day = d ; 
  }else
  {
    throw invalid_argument("inValid day number");
  }
  year = y ;
}
void Date::print()const{
cout<<year<<'/'<<month<<'/'<<day<<'\n';
}
Date::~Date()
{
 cout<<"Distruction : ";
 print();
}