#include<iostream>
#include<stdexcept>
#include"salariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string& Fname , const string &Lname,const string &SSN , int day ,int month , int year, double Salary):Employee(Fname,Lname,SSN,day,month,year)
{
         setWeeklySalary(Salary);
}
void SalariedEmployee::setWeeklySalary(double salary)
{
  if(salary <  0)
  throw invalid_argument("this is an negative salary \n");
  else 
  weakly_salary = salary;
}
double SalariedEmployee::getWeeklySalary()const 
{
    return weakly_salary;
}
void SalariedEmployee::print()const
{
    cout<<"Salaried Employee : ";
    Employee::print();
    cout<<"Weekly Salary :"<<getWeeklySalary()<<endl;
}
double SalariedEmployee::earnings()const 
{
  return getWeeklySalary();
}