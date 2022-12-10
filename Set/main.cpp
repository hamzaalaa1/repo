#include<iostream>
#include"SetClass.h"
using namespace std; 

int main()
{
     SetClass s , s2 ,s3 ,s4;
     s.setElement(20);
     s.setElement(30);
     s.setElement(4);
     s.setElement(80);
     s2.setElement(20);
     s2.setElement(30);
     s2.setElement(40);
     s2.setElement(80);
     s3 = SetClass::UnionSet(s , s2); 
     s4 = SetClass::intersecet(s,s2);
     int a = SetClass::inEqual(s , s2);
     s4.printList();
     cout<<(a?"there are equal\n":"there are not equal\n");
    
     
 }

 