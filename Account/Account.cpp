#include"Account.h"
#include<iostream>
#include<stdexcept>
using namespace std ;

Account::Account(double balance)
{
  setBalance(balance);
}
void Account::setBalance(double balance)
{
    if(balance >= 0 )
    this->balance = balance ; 
    else 
    throw invalid_argument("banlance can not be a nigative number \n");
}
double Account::getBalance()
{
    return balance ;
}
void Account::credit(double amount)
{
    if(amount >= 0.0)
    balance += amount;
    else 
    {
         balance = 0.0;
         throw invalid_argument("amount can not be negative \n");
    }
   
}
bool Account::debit(double amount)
{
    if(amount <= balance)
    {
         balance -= amount ;
         return true ;
    }
     else 
     {
         return false ;
     }
     
}

