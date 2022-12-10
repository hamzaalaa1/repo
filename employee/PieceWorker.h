#ifndef PIECE_H
#define PIECE_H
#include<string>
#include"employee.h"
using namespace std;
class PieceWork:public CommissionEmployee
{
   public   :
         PieceWork(const string &, const string & ,const string & , double = 0.0,int = 0 );
         void setWage(double);
         double getWage()const;

         void setNumber(int);
         int getNumber()const;

         virtual double earnings() const;

   private  : 
         double wage ;
         int number ; 
               
};

#endif 