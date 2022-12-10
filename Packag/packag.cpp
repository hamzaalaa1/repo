#include"packag.h"
#include<string>
#include<stdexcept>
using namespace std ;

Packag::Packag(string const&name, string const&addres, string const&city ,string const&state,int zip,double cost,double wight):name(name),addres(addres),city(city),state(state),zip(zip),weight(wight)
{
 setCost(cost);
 }
 void Packag::setName(string &name)
 {
    this->name = name;
 }
string Packag::getName()
{
   return name ; 
}
void Packag::setAddres(string &addres)
{
this->addres = addres;
}
string Packag::getAddress()
{
  return addres;
 }

   void Packag::setCity(string &city)
   {
     this->city = city ; 
   }
  string Packag::getCity()
  {
    return city ;
  }
  void Packag::setState(string &state)
  {
   this->state = state ; 
  }
  string Packag::getState()
  {
    return state ;
  }
  void Packag::setZip(int zip)
  {
   this->zip = zip ;
  }
  int Packag::getZip()
  {
    return zip; 
  }

  void Packag::setCost(double cost)
  {
     if(cost >= 0 )
     this->cost = cost ; 
     else 
     throw invalid_argument("the cost can not be negative ");
  }
  double Packag::getCost()
  {
    return cost;
  }
    void Packag::setWeight(double weight)
    {
        if(weight>=0)
        this->weight = weight; 
        else 
        throw invalid_argument("can not make wight with negative number \n");

    }
  double Packag::getWeight()
  {
    return weight;
  }
