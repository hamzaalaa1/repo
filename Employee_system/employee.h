#ifndef EMPLOYEE_H
#define EMPLOYEE_H 
#include<string>
#include"date.h"
using namespace std;
class Employee
{
  public  : 
  Employee(const string &,const string & , const string & ,int   , int   , int  );
  void    setFirstName(const string &);
  string  getFirstName()const ;

  void    setLastName(const string &);
  string  getLastName()const ;
  
  void    setSocialSecrityNumber(const string& );
  string  getSocialSectityNumber()const;
  

  virtual double earnings()const = 0; 
  virtual void print() const ;
  
  Date birthDate;
  private :
  string first_name ;
  string last_name; 
  string SSN;
  
};
#endif