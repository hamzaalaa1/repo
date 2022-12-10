#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string> // C++ standard string class
#include "employee.h" // CommissionEmployee class declaration
using namespace std;
class BasePlusCommissionEmployee  
{
public:
BasePlusCommissionEmployee( const string &, const string &,
const string &, double = 0.0, double = 0.0, double = 0.0 );
void setBaseSalary( double ); // set base salary
double getBaseSalary() const; // return base salary
double earnings() const; // calculate earnings
void print() const; // print BasePlusCommissionEmployee object
CommissionEmployee emp ;
private:
double baseSalary; // base salary

}; // end class BasePlusCommissionEmployee
#endif