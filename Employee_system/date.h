#ifndef DATE_H
#define DATE_H
#include<string>
using namespace std;
class Date
{
public:
Date( int =1, int = 1, int = 2000 );  
void print()const;
int getMonth();
int getDay();
int getYear();
void setDay(int d);
void setMonth(int m);
void setYear(int y);
void nextDay();
static int currentMonth(string);
private:
int month;
int day;
int year;
 }; // end class Date
#endif
