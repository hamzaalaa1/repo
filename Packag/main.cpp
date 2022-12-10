#include<iostream>
#include<string>
#include<vector>
#include"twodaypackag.h"
#include"overnight.h"
using namespace std ;

int main()
{
     
   
 TowDayPackag t("hamza","elsanta","tanta","aaa",20,2.9,22.9);
 overnight e("hamza","elsanta","tanta","aaa",20,2.9,22.9,3.3);
 vector<Packag *>P(2);
 P[0] = &t;
 P[1] = &e;
 double cost = 0;
 for(int i = 0 ; i < 2 ; i ++)
 {
    cout<<"address :"<<P[i] ->getAddress()<<endl;
    cout<<"cost :"<<P[i] ->claculateCost()<<endl;
    cost += P[i] ->claculateCost();
 }
 cout<<"Total :"<<cost<<'\n';
}