#include "PieceWorker.h"
#include <stdexcept>
using namespace std;
PieceWork::PieceWork(const string &Fname, const string &Lname, const string &ssn, double wage, int number) : CommissionEmployee(Fname, Lname, ssn), wage(wage), number(number) {}

void PieceWork::setWage(double W)
{
    if (W < 0)
        throw invalid_argument("Wage can not be nigative\n");
    else
        wage = W;
}
double PieceWork::getWage()const 
{
    return wage;
}
void PieceWork::setNumber(int number)
{
    if (number < 0)
        throw invalid_argument("this is invalid number \n");
    else
        this->number = number ;
}
int PieceWork::getNumber()const 
{
    return number;
}
double PieceWork::earnings() const
{
    return getNumber() * getWage();
}