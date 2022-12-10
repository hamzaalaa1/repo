#include<iostream>
#include"complex.h"

using namespace std; 

int main()
{

Complex c(5,5);
c.subComplex(10, 4 ,4 ,3);
c.addComplex(10, 4 ,4 ,3);
c.print();
}
