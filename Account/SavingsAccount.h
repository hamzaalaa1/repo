#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include"Account.h"
class SavingsAccount:public Account
{
public : 
SavingsAccount(double,double);
void setRate(double);
double getRate();
double calculateInterest();//return interst by multiply the rate * balance 
private:
double interest_rate;
};
#endif