#include <iostream>
#include "employee.h" // CommissionEmployee class definition
using namespace std;
// constructor
CommissionEmployee::CommissionEmployee(
const string &first, const string &last, const string &ssn,
double sales, double rate )
{
firstName = first; // should validate
lastName = last; // should validate
socialSecurityNumber = ssn; // should validate
setGrossSales( sales ); // validate and store gross sales
setCommissionRate( rate ); // validate and store commission rate
} // end CommissionEmployee constructor
// set first name
void CommissionEmployee::setFirstName( const string &first )
{
firstName = first; // should validate
} // end function setFirstName
// return first name
string CommissionEmployee::getFirstName() const
{
return firstName;
} // end function getFirstName
// set last name
void CommissionEmployee::setLastName( const string &last )
{
lastName = last; // should validate
} // end function setLastName
// return last name
string CommissionEmployee::getLastName() const
{
return lastName;
} // end function getLastName
// set social security number
void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber
// return social security number
string CommissionEmployee::getSocialSecurityNumber() const// end function getSocialSecurityNumber
{return socialSecurityNumber;
} 
// set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
if ( sales >= 0.0 )
grossSales = sales;
else
throw invalid_argument( "Gross sales must be >= 0.0" );
} // end function setGrossSales
double CommissionEmployee::getGrossSales() const// return gross sales amount
{
return grossSales;
} // end function getGrossSales
void CommissionEmployee::setCommissionRate( double rate )// set commission rate
{
if ( rate >= 0.0 && rate < 1.0 )
commissionRate = rate;
else
throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
} // end function setCommissionRate
double CommissionEmployee::getCommissionRate() const// return commission rate
{
return commissionRate;
} // end function getCommissionRate
double CommissionEmployee::earnings() const// calculate earnings
{
return commissionRate * grossSales;
} // end function earnings

void CommissionEmployee::print() const// print CommissionEmployee object
{
cout << "commission employee: " << firstName << ' ' << lastName
<< "\nsocial security number: " << socialSecurityNumber
<< "\ngross sales: " << grossSales
<< "\ncommission rate: " << commissionRate;
}