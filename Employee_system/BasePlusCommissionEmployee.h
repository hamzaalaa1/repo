#ifndef BASEPLUS_H
#define BASEPLUS_H

#include"commissionEmployee.h"
class BasePlusCommissionEmployee:public CommissionEmployee
{
    public :
       BasePlusCommissionEmployee(const string &,const string &,const string &,int ,int ,int ,double = 0.0 ,double = 0.0 , double = 0.0);
       void setBaseSalary(double);
       double getBaseSalary()const;

       virtual void print()const; 
       virtual double earnings()const ;
    private :
    double   baseSalary ;   
};
#endif