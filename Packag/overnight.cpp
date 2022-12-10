#include"overnight.h"
#include<iostream>
#include<string>
using namespace std;

overnight::overnight(const string  & name,const string  &addres,const string  &city ,const string  &state,int zip,double cost,double fee,double wight):Packag(name,addres ,city , state , zip,cost,wight)
{
 setFlatFee(fee);
}
void overnight::setFlatFee(double flatFee)
{
 this->flat_fee = flatFee;
}
double overnight::getFlatFee()
{
    return flat_fee;
}
double overnight::claculateCost()
{
    
   return (flat_fee +getCost())*getWeight();
}
