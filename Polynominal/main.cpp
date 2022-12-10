#include<iostream>
#include <iomanip> 
#include<stdio.h>
#include"poly.h"
using namespace std ;
class TEST{
  public : static void test1(TEST *t)
  {
    t->print();

    }  
    void print()
    {
     cout <<"hallo\n";
    }
};
int main()
{
  TEST t ; 
   TEST::test1(&t);
 }
