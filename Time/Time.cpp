#include"Time.h"
#include<iostream>
#include<stdexcept>
#include<iomanip>

using namespace std;
Time::Time(int h,int m,int s){
    setTime(h,m,s);
}
Time& Time::setTime(int h , int m , int s)
{
 setHour(h);
 setMinute(m);
 setSecound(s);
 return (*this);
}
Time& Time::setHour(int h)
{
    hour = h ;
    if(hour > 12)
    secound = h*60*60;
    return (*this);
}
Time& Time::setMinute(int m)
{
     minute = m;
      if(hour > 12)
     secound += minute*60;
       
    return (*this);
}
Time& Time::setSecound(int s)
{
      if(hour > 12)
      secound += s ;
      else
      secound = s ;
    return (*this);
}
void Time::print()
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
<< setw( 2 ) << minute << ":" << setw( 2 ) << secound<<endl;
}