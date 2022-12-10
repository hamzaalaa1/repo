#include"increment.h"
#include<iostream>
using namespace std;

Increment::Increment(int i , int c):increment(i){ 
   setCount(i);
 }
void Increment::print() const
{
        
    cout << increment<<" "<<count<<'\n';
}
void Increment::setCount(int v) 
{
    count = v ;
}
 