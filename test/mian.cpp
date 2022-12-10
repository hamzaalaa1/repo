#include <iostream>
using namespace std;
#include<stdio.h>
class C1 
{
  public :
    virtual int print()
      {
        return 100;
      } 
};
class C2:public C1
{
  public :
  //  virtual void print()
   // {
      // cout<<"hallo 2 \n";
    //}
};
class C3 :public C2
{
 public : int number = 100 ;
};
int main()
{
  C1 *c = new C3;
 printf("%d", ((int(*)())c));
 
}