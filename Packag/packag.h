#ifndef PACKAG_H
#define PACKAG_H
#include <string>
using namespace std;
class Packag
{
public:
    Packag(string const&, string const&, string const&, string const&, int, double,double=0.0);
    void setName(string &);
    string getName();

    void setAddres(string &);
    string getAddress();

    void setCity(string &);
    string getCity();

    void setState(string &);
    string getState();

    void setZip(int);
    int getZip();

    void setCost(double);
    double getCost();

    void setWeight(double);
    double getWeight();

   virtual double claculateCost()
    {
        return weight * cost;
    }

private:
    string name;
    string addres;
    string city;
    string state;
    int zip;
    double cost;
    double weight;
};  
#endif