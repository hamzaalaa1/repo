#ifndef DATE_H
#define DATE_H
 
class Date
{
public:
Date( int =1, int = 1, int = 2000 );  
void print();
int getMonth();
int getDay();
int getYear();
void setDay(int d);
void setMonth(int m);
void setYear(int y);
void nextDay();
private:
int month;
int day;
int year;
}; // end class Date
#endif
