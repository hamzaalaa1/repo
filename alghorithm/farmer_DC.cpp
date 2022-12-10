#include<iostream>
using namespace std; 
int find_larg_Squar (int x, int y) //we find the bigest squar that can devide the area 
{
if(x % y == 0)
return y ; 
else if (y % x == 0)
return x ; 
 else 
 {
    cout <<'('<<x <<','<<y<<')'<<endl;
    return (x > y)? find_larg_Squar(y,x%y):find_larg_Squar(x, y%x);
 }
 
}
int main()
{
     cout<<"the largest Squar is :\n"<<find_larg_Squar (640,1680)<<endl;
}