#include<iostream>
#include"Saccount.h"
#include <stdexcept>
using namespace std;
float Saccount::AnualInterstRate = 0;
Saccount::Saccount(double sBalance){setSafingBalance(sBalance);}
void Saccount::setSafingBalance(double SB)
{
   safingBalance = (SB > 0)? SB : throw invalid_argument("in Valid argument\n");  
}
double Saccount::getSafingBalance()
{
    return safingBalance;
}
double Saccount::calculateMonthlyInterest()
{
  double temp =  (safingBalance * AnualInterstRate)/12;
  addTheMonthInterst(temp);
  return temp;
}
void Saccount::setInterstRate(float newRate)
{
   AnualInterstRate = (newRate > 0)? (newRate/100) : throw invalid_argument("this rate is not acceptable\n");
}
float  Saccount::getAnualInterstRate()
{
    return AnualInterstRate;
}
 void Saccount::addTheMonthInterst(float interest)
 {
    safingBalance += interest;
 }