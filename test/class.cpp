#include<iostream>

using namespace std ; 
class A 
{
   private : int a = 10 ;   
             int b = 20;    
};
class B : A 
{
   private : int z = 30 ;   
             int d = 40;    
};
int main()
{
  B *b = new B; 
  cout<< *((int*)b +3)<<endl ;
}