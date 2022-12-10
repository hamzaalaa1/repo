#include"Count.h"
#include<iostream>

using namespace std; 
Count::Count(){
    x = 0 ;
}
void Count::print(){
    cout<<"Counter :"<<x;//implictly 
    cout<<"\nthis-> "<<this->x;
    cout<<"\n(*this).x "<<(*this).x;
}
void setX(Count &obje,int val)
{
    obje.x = val ;
}
void setX(Count &obje1,Count &obje2 ,int &result)
{
    result = obje1.x + obje2.x;
}