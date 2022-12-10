#include<iostream>
#include"static.h"
#include<stdio.h>
using namespace std;

class HackCpp1
{
    public  :
         HackCpp1()
         {

         }
    public  : 
              int a = 60 ; 
              int b = 70 ;
              int c = 80 ;
};
class HackCpp
{
    public  :
        HackCpp(int i = 0 , int j = 0 , int k = 0)
        {
         
        }
         HackCpp()
         {

         }
          
    public  : 
              int a = 20 ; 
              int b = 30 ;
              int c = 40 ;
              HackCpp1 h ;
};
 
int main()
{
  HackCpp H(10,20,40);
   
}