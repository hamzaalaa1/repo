#include"BasePlusCommissionEmployee.h"
#include <stdexcept>
#include<iostream>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &fname , const string &lname , const string &ssn,int day , int month ,int year,double cRate,double gSalary,double baseSalary):CommissionEmployee(fname,lname,ssn,day,month ,year , cRate,gSalary){setBaseSalary(baseSalary);}

void BasePlusCommissionEmployee::setBaseSalary(double Bsalary)
{
    if(Bsalary < 0)
        throw invalid_argument("this is not valid arg\n");
    else 
        baseSalary = Bsalary;
}
double  BasePlusCommissionEmployee::getBaseSalary()const 
{
    return baseSalary;
}

void BasePlusCommissionEmployee::print()const 
{
    cout<<"BasePlusCommissionEmployee :";
    CommissionEmployee::print();
    cout<<"earings :"<<earnings() <<endl;
}
double  BasePlusCommissionEmployee::earnings()const 
{
    return CommissionEmployee::earnings()+ getBaseSalary();

}