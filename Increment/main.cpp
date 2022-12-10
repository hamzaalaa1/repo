#include<iostream>
#include"increment.h"

using namespace std ; 
void test(Increment x) ;
int main()
{
    
    Increment value2(20,2);
    value2.print();
    Increment &newI = value2;
    newI.addIncrement();
    newI.print();
    newI.setCount(1); 
    test(value2);
    
}