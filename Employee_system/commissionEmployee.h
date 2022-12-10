#ifndef CEMPLOYEE
#define CEMPLOYEE

#include"employee.h"

class CommissionEmployee: public Employee
{
  public :
      CommissionEmployee(const string& ,const string& ,const string&,int , int ,int,double = 0.0 ,double = 0.0);
      
      void setCommissionRate(double);
      double getCommissionRate()const;

      void setGrossSalary(double );
      double getGrossSalary()const;
      
      virtual void print()const ;
      virtual double earnings()const ;
     

  private : 
      double grossSalary ; 
      double commissionRate;    
};


#endif
