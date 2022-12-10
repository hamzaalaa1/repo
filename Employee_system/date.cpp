#include <iostream>
#include<stdexcept>
#include<string>
#include "date.h"  
using namespace std;
// Date constructor (should do range checking)
 string months [13]={"","Jan", "Feb", "Mar", "Apr", "May", "June", "Jul","Aug", "Sep", "Oct", "Nov", "Dec"};
Date::Date( int m, int d, int y )
{
 setMonth(m);
 setDay(d);
 setYear(y);
}  
void Date::print()const
{
cout << month << '/' << day << '/' << year<<'\n';
}
int Date::getMonth()
{
 return month ;
}
int Date::getDay()
{
return day; 
}
int Date::getYear()
{
return year ;
}
void Date::setDay(int d)
{
if(d <= 31 && d > 0)
{
 day = d ; 
}else
{
 throw invalid_argument("invalid Day");
}
 	
}
void Date::setMonth(int m)
{
if(m <= 13 && m > 0)
{
 month = m ; 
}
else
{
 throw invalid_argument("invalid Month");
}
}
void Date::setYear(int y)
{
 if(y > 0)
{
  year = y; 
}
else
{
 throw invalid_argument("invalid Year");
}
}
void Date::nextDay()
{
print();
int c = 30000 ;
while(c--)
{
 setDay(getDay() + 1);
 if(getDay() == 31)
 {
  setDay(1) ;
  setMonth(getMonth()+1);
  if(getMonth()  == 13);
  {
   setMonth(1);
   setYear(getYear()+1);
  }
 }
print();
}
}
int Date::currentMonth(string name)
{
  for(int i = 0 ; i < 13 ; i++)
  {
   if(name == months[i])
   return i ;
  }
  return 0 ;
}