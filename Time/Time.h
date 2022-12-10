#ifndef TIME_H
#define TIME_H
class Time{
    public :
      Time(int = 0 , int = 0 , int = 0 );
      Time& setTime(int , int , int );
      Time& setHour(int);
      Time& setMinute(int);
      Time& setSecound(int);
      void print();
      private:
        int hour ; 
        int secound ;
        int minute;
};
#endif