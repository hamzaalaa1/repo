#ifndef EMP_H
#define EMP_H
#include<string>
#include"date.h"
using namespace std;
class Emp{
 public :   Emp(string & ,string & ,Date & , Date &);
           void print()const; 
           ~Emp();
 private:
    string firstName;
    string lastName;
    Date   hirDate ; 
    Date   birthDate;
};
#endif