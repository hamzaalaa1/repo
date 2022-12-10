#include"twodaypackag.h"
#include<string>
using namespace std;

TowDayPackag::TowDayPackag(const string& name,const string &addres,const string &city ,const string& state,int zip,double cost,double fee,double wight):Packag(name,addres ,city , state , zip,cost,wight)
{
 setFlatFee(fee);
}
void TowDayPackag::setFlatFee(double flatFee)
{
 this->flat_fee = flatFee;
}
double TowDayPackag::getFlatFee()
{
    return flat_fee;
}
double TowDayPackag::claculateCost()
{
   return (flat_fee )+Packag::claculateCost();
}
