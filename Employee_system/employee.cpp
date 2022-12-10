#include<iostream>
#include"employee.h"
 
using namespace std;
Employee::Employee(const string& fname , const string & lname , const string & ssn ,int day , int month , int year ):first_name(fname) ,last_name(lname),SSN(ssn),birthDate(day,month,year){}

void Employee::setFirstName(const string &fname)
{
  first_name = fname;
}
string Employee::getFirstName()const 
{
    return first_name;
}
void Employee::setLastName(const string &fname)
{
  last_name = fname;
}
string Employee::getLastName()const 
{
    return last_name;
}
void Employee::setSocialSecrityNumber(const string &ssn)
{
    SSN = ssn;
}

string Employee::getSocialSectityNumber() const 
{
  return SSN ;   
}
void Employee::print()const
{
    cout << getFirstName() << ' ' << getLastName()<< "\nsocial security number: " << getSocialSectityNumber()<<endl;
    cout<<"birth Date :";
    birthDate.print();  
} 