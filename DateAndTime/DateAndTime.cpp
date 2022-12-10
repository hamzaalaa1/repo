#include <iostream>
#include<stdexcept>
#include "DateAndTime.h"  
using namespace std;

DateAndTime::DateAndTime(int d,int m,int y)
{
setDay(d);
setMonth(m);
setYear(y);
}
void DateAndTime::print()
{
cout << month << '/' << day << '/' << year<<'\n';
}
int DateAndTime::getMonth()
{
 return month ;
}
int DateAndTime::getDay()
{
return day; 
}
int DateAndTime::getYear()
{
return year ;
}
void DateAndTime::setDay(int d )
{
if(d <= 31 && d > 0)
{
 day = d ; 
}else
{
 throw invalid_argument("invalid Day");
}
 	
}
void DateAndTime::setMonth(int m)
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
void DateAndTime::setYear(int y)
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
void DateAndTime::nextDay()
{
print();
int c = 30000 ;
 setDay(getDay() + 1);
 if(getDay() == 31)
 {
  setDay(1) ;
  setMonth(getMonth()+1);
  if(getMonth()  == 13)
  {
   setMonth(1);
   setYear(getYear()+1);
  }
 }
print();
}
void DateAndTime::setTime( int h, int m, int s )
{
// validate hour, minute and second
if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) &&
( s >= 0 && s < 60 ) )
{
hour = h;
minute = m;
second = s;
} // end if
else
throw invalid_argument(
"hour, minute and/or second was out of range" );
}  
int DateAndTime::getHour()
{
return hour;
}  
int DateAndTime::getMin()
{
return minute;
}  
int DateAndTime::getSec()
{
return second;
}	 
void DateAndTime::setHour(int H)
{
 if(H >= 0 && H <= 13)
 {
  hour = H; 
 }
 else {
  throw invalid_argument("invalid value Hour");
 }
 }
 void DateAndTime::setMin(int M)
{
 if(M >= 0 && M < 60)
 {
  minute = M; 
 }
 else {
  throw invalid_argument("invalid value Min");
 }
 }
  void DateAndTime::setSec(int S)
{
 if(S >= 0 && S < 60)
 {
  second = S; 
  
 }
 else {
  throw invalid_argument("invalid value sec");
 }
}
void DateAndTime::tick()
{
int c = 1000000, valueS ,valueM,valueH , day = 0;
 while(c--){ 
     valueH = getHour();
    valueS = getSec();
    ++valueS; 
    setSec(valueS % 60);
    if(valueS == 60)
    { 
     valueM = getMin();
     valueM ++;
     setMin(valueM % 60);
     if(valueM == 60)
     {
      valueH++; 
       setHour(valueH);   
      if (getHour() == 13)
      {
       setHour(1);
       day++;
       if(day)
       {
             cout<<"-----------------------------------------------------"<<'\n';
              nextDay();
       }
      }
     }
    }
        cout<<getHour()<<':'<<getMin()<<':'<<getSec()<<'\n';
 }
}
