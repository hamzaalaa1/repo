#include<stdexcept>
#include"squar.h"

Squar::Squar(double R):PI(3.14){

    setRed(R);
}

void Squar::setRed(double R)
{
    if(R < 0 )
     throw std::invalid_argument("this is invalied Redious\n");
    else 
     red = R;  
}
double Squar::getRed()const
{
    return red;
}
double Squar::area()
{
    return getRed()*PI;
}
void Squar::draw (char)
{
    

}