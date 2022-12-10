#include<iostream>
#include"test.h"
using namespace std;
class T{
   public :void  h()
   {
     if (num == 10 )
     {
     cout <<num;
     return ;     
     }
     num++;
     cout<<num;
     h();
     cout <<num;
   }
   private: 
    int num = 0;
};
int main()
{
   T t ;
   t.h();
  
}
 