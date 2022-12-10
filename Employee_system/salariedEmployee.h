#ifndef SEMPLOYEE_H
#define SEMPLOYEE_H

#include"employee.h"
class SalariedEmployee : public Employee 
{
  public : 
           SalariedEmployee(const string& ,const string& ,const string& ,int , int , int ,double = 0.0);

           void setWeeklySalary(double);
           double getWeeklySalary()const;

           virtual void print()const;
           virtual double earnings()const;
           
   

  private :
         double weakly_salary;         
};
#endif