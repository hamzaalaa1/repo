#ifndef DATE_H
#define DATE_H
#include<string>
using namespace std;
class Date
{
public:
static const int monthsPerYear = 12; 
Date( int , int , int );
Date(int days , int years);
Date(string monthName , int day , int );
Date(string date);

int count_Days(int )const; 
int count_Month() ;
int convert_To_number(string a, int ,int);
int Mapping_Month_number(string);
void current_system_time();
void devid (string );
void devid2(string );
void print () const; 
void print1()const;
void print2()const;
void print3()const;
Date& operator++();
Date  operator++(int);
Date& operator+=(int);
friend ostream& operator<<(ostream & ,Date &);
bool leapYear( int testYear)const;
bool endOfMoth(int testDay)const;
~Date(); 
private:
int month; 
int day; 
int year; 
 
static const int daysPerMonth[ monthsPerYear + 1 ] ;
static const string months[monthsPerYear+1];
int checkDay( int ) const;
void helpIncrement() ;
}; 
#endif