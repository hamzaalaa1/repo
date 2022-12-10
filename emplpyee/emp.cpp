#include<string>
#include<iostream>
#include"emp.h"

using namespace std;
Emp::Emp(string &fname,string &lname,Date &Hdate,Date &Bdate):firstName(fname),lastName(lname),hirDate(Hdate),birthDate(Bdate)
{
 cout << "Employee object constructor: "<< firstName << ' ' << lastName << endl;
 }
 void Emp::print()const{
   cout<<lastName<<','<<firstName<<" Hired:";
   hirDate.print();
   cout<<"BirthDay :";
   birthDate.print();
 }
 Emp::~Emp()
 {
    cout<<"Emloyee distructor :"
    <<lastName<<","<<firstName<<endl;
 }