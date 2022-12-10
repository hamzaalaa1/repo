#include<iostream>
#include"test2.h"

using namespace std; 

class member
{
 public : member()
  {
    cout<<"hallo form the memeber 1\n ";
  }
  public : 
  int a = 100 ;
};
 
class Class2  : private  member 
{
   public :
    Class2() 
   {
      printf("hallo form Class2 object 3\n");
      cout<<a;
   }
  member m;

};
int main()
{ 
  Class2 c ;
  test2 t ; 
  
 }