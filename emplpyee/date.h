#ifndef DATE_H
#define DATE_H
class Date{
public : 
         Date(int , int ,int);
        void print () const; 
        ~Date();
      private:
      int year ; 
      int month ;
      int day ; 
 };
#endif