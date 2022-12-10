#include"SavingsAccount.h"
#include<stdexcept>
SavingsAccount::SavingsAccount(double balance , double rate):Account(balance)
{
  setRate(rate);
}

void SavingsAccount::setRate(double rate)
{
     interest_rate = rate ;
 }
 double SavingsAccount::getRate()
 {
    return interest_rate;
 }
 double SavingsAccount::calculateInterest()
 {
    return (interest_rate/100)*getBalance();
 }