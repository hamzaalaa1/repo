#include"qube.h"
#include<iostream>
using namespace std;
Qube::Qube(double L,double H , double W):ThreeDShap(L,H,W){}
double Qube::area()
{
  //  cout<<'\n'<<getHight()<<'\n'<<getLenth()<<'\n'<<getWidth()<<endl;

    return getHight()*getLenth()*getWidth();
}
double Qube::volume()
{
    return getHight()*getHight();
}