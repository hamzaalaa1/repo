#include <iostream>
#include <stdexcept>
#include <time.h> 
#include "Date.h" 
using namespace std;
const int Date::daysPerMonth[ Date::monthsPerYear + 1 ] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string Date::months[Date::monthsPerYear+1]={"","Jan", "Feb", "Mar", "Apr", "May", "June", "Jul","Aug", "Sep", "Oct", "Nov", "Dec"};
 Date::Date( int mn, int dy, int yr )
{
if ( mn > 0 && mn <= monthsPerYear ) 
month = mn;
else
throw invalid_argument( "month must be 1-12" );
year = yr; 
day = checkDay( dy ); 
 
cout << "Date object constructor for date ";
print();
cout << endl;
}  
Date::Date(int d, int y)
{
    if(d > 364)
    throw invalid_argument("in valid days number");
    else
    {
     day = d ;
     month = count_Month();
     year = y;
    }
}
void Date::print() const
{
cout << month << '/' << day << '/' << year;
}
Date::~Date()
{
cout << "Date object destructor for date ";
print();
cout << endl;
}  
int Date::checkDay( int testDay ) const
{
if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
return testDay;
 
if ( month == 2 && testDay == 29 && ( year % 400 == 0 ||
( year % 4 == 0 && year % 100 != 0 ) ) )
return testDay;
throw invalid_argument( "Invalid day for current month and year" );
}
void Date::print1()const{
    cout<<count_Days(month)<<" "<<year<<endl;
 }
 void Date::print2()const
 {
   cout<<month<<'/'<<day<<'/'<<year<<endl;
 }
 void Date::print3()const
 {
    cout<<months[month]<<' '<<day<<", "<<year<<endl; 
 }
int Date::count_Days(int M)const
{
    int Days = 0;
    for(int i = 1 ; i < M; i++)
    {
       Days += daysPerMonth[i];
    } 
    Days += day ;
    return Days ; 
}
int Date::count_Month() 
{
    int D = day , i = 1;
   while(D > daysPerMonth[i])
   {
     D -= daysPerMonth[i];
     i++;
   }
    if(D != 0)
    day = D ;
   else 
    day = daysPerMonth[i];
    return i;
}
void Date::devid(string date)
{
  
    int start = 0, end = 0;
    for(; date[end]!= '/';end++);
    
    month = convert_To_number(date,start,end);
    start = ++end;
    
   for(end ; date[end]!= '/';end++);
    
   day   = convert_To_number(date,start,end);
   start = ++end;
   for( end ; date[end]!= '\0';end++);
    
   year  = convert_To_number(date,start,end);
  }
void Date::devid2(string date)
{
  char arr[10]; 
  int start = 0, end = 0 ;
  for(;date[end]!=' ';end ++)
  {
    arr[end] = date[end];
  }
  arr[end] = '\0';
   

  start = ++end;
  
  for(;date[end] != ',';end++);
   cout<<start<<"  "<<end<<'\n';
  day   = convert_To_number(date,start,end);
  start = ++end ;
   cout<<start<<"  "<<end<<'\n'; 
  for(;date[end]!='\0';end++);
  year  = convert_To_number(date,start,end);
 
  month = Mapping_Month_number(arr); 
   print2();
}

int Date::convert_To_number(string a, int start , int end)
{
    int number =0;
  for(int i = end -1 , j = 1;i >= start ;i--)
  {  
      number  += ((int)a[i] - 48)*j; 
     j*=10;
   }
    return number;
 }
 int Date::Mapping_Month_number(string month)
 {
  cout << month <<endl;
  int i = 0 ;
  for(  i = 0 ; i < 13; i ++)
  {
    if(month == months[i])
    break;
  }
  return i ;
 }
 void Date::current_system_time()
 {
  int ti;
  time_t timer;
  struct  tm * timeinfo;

  time(&timer);
  timeinfo = localtime(&timer);
  cout<<asctime(timeinfo);
  }
  bool Date::leapYear( int testYear )const
{
if ( testYear % 400 == 0 ||( testYear % 100 != 0 && testYear % 4 == 0 ) )
return true;  
return false;  
}
bool Date::endOfMoth(int testDay)const 
{
  if(month == 2 && leapYear(year))
  return testDay == 29 ;
  else 
  return testDay == daysPerMonth[month];
} 
void Date::helpIncrement()
{
  if(!endOfMoth(day))
  
     day ++ ;
  else
    if(month < 12)
    {
      month ++ ; 
      day = 1 ; 
    } 
    else 
    {
      year ++ ; 
      month = 1 ; 
      day = 1 ;
    }
  
}
Date &Date::operator++()
{
   helpIncrement();
  return *this; 
}
Date Date::operator++(int)
{
  Date temp = *this;
   helpIncrement();
   return temp;
}
Date& Date::operator+=(int Days)
{
  for(int i = 0 ; i < Days ; i++)
  helpIncrement();

  return *this; 
}
ostream& operator<<(ostream &output , Date &object)
{
  output<<Date::months[object.month]<<' '<<object.day<<','<<object.year<<endl;
  return output ;
}