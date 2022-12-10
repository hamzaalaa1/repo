#ifndef DATEANDTIME_H
#define DATEANDTIME_H
 
class DateAndTime
{
public:
DateAndTime(int d,int m,int y);
void setTime( int, int, int );
int getHour();
int getMin();
int getSec();
void setHour(int H);
void setMin(int M);
void setSec(int S);
int getMonth();
int getDay();
int getYear();
void setDay(int d =1);
void setMonth(int m = 1);
void setYear(int y =200);
void nextDay();
void print();
void tick();
private:
int month;
int day;
int year;
int hour;
int minute;
int second;
}; // end class Date
#endif
