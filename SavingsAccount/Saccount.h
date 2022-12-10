#ifndef Saccount_H
#define Saccount_H

class  Saccount
{
public:
   Saccount(double);
   double getSafingBalance();
   void   setSafingBalance(double);
   float  getAnualInterstRate();
   double calculateMonthlyInterest();
   static void setInterstRate(float);
   void addTheMonthInterst(float);
private:
      static float AnualInterstRate ; 
      double safingBalance ; 
};
#endif