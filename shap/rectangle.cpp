#include<stdexcept>
#include<iostream>
#include"rectangle.h"

using namespace std;

Rectangle::Rectangle(double L ,double W):TowDShap(L,W){}

double Rectangle::area()
{
    return getWidth() * getHight();
}

void Rectangle::draw(char sympol)
{
 for(int i = 0 ; i < getWidth() ; ++i)
 {
    for(int j = 0 ; j < getHight();++j)
    cout<<sympol<<' ';
    cout<<'\n';
 }
    
}