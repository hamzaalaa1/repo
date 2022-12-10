#include<iostream>
#include<stdio.h>
using namespace std;
class test
{
  public : int a = 10 ; 
           int b = 2 ; 
           int c = 3 ;
};
int main()
{
  test t ; 
test *T = &t ; 
  printf("%d",*((int *)T + 4));
} 