#include<iostream>
#include"rectangle.h"
#include<cmath>
using namespace std; 
int main()
{
Rectangle r ; 
r.setNode1(2,3);
r.setNode2(-10,3);
r.setNode3(-10,-2);
r.setNode4(2,-2);
cout<<r.findtTheMain()<<'\n'<<abs(r.hight)<<" "<<abs(r.width)<<endl;
r.putThePoint();
r.paint();
//r.FillBoard();
r.print();
cout<<'\n';
 
 
 
 
}
