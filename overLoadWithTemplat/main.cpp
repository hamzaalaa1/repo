#include <iostream>

using namespace std;
class Emp
{
public:
    Emp(int number, int salary, int ssn) : number(number), salary(salary), SSN(ssn)
    {
    }
   bool operator==(const Emp &e1)
   {
    return (this->number == e1.number && this->salary == e1.salary && this->SSN == e1.SSN);
   }
private:
    int number;
    int salary;
    int SSN;
};
template <class T>
bool isEqual(T item1, T item2)
{
    if (item1 == item2)
        return true;
    else
        return false;
}

int main()
{
    int a = 2 ; 
    int b = 5 ;
    double e = 10 ; 
    double w = 10 ;
    string s = "hamza";
    string s2 = "hamza"; 
    Emp c(1,20,30);
    Emp c1(3,20,30);
    cout<<isEqual(c,c1);

}