#include"commissionEmployee.h"
#include<iostream>
#include<stdexcept>

using namespace std;
CommissionEmployee::CommissionEmployee(const string& fname , const string &lname ,const string &ssn,int day , int month , int year  ,double cRate,double gSalary):Employee(fname,lname,ssn,day,month,year)
{
    setCommissionRate(cRate);
    setGrossSalary(gSalary);
}
void CommissionEmployee::setGrossSalary(double gSalary)
{
    if(gSalary < 0)
      throw invalid_argument("this is a negative salary value \n");
    else 
      grossSalary = gSalary;
}
double CommissionEmployee::getGrossSalary()const 
{
  return grossSalary;
}
void CommissionEmployee::setCommissionRate(double cRate)
{
    if(cRate < 0)
       throw invalid_argument("this is in valid rate\n");
    else 
       commissionRate = cRate;   
}
double CommissionEmployee::getCommissionRate()const 
{
    return commissionRate;
}
double CommissionEmployee::earnings()const 
{
  return getCommissionRate() * getGrossSalary();
}
void  CommissionEmployee::print()const 
{
  cout <<"Commission Employee :";
  Employee::print();
  cout << "\ngross sales: " << getGrossSalary()<<endl
       << "commission rate: " << getCommissionRate()<<endl;
}