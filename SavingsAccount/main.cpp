#include<iostream>
#include<stdio.h>
#include"Saccount.h"
using namespace std;
int main()
{
  Saccount::setInterstRate(50);
  Saccount s(100);
  s.calculateMonthlyInterest();
  cout<<s.getSafingBalance()<<'\n';  
  Saccount::setInterstRate(150);
  s.calculateMonthlyInterest();
  cout<<s.getSafingBalance()<<'\n';  
}