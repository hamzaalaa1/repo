#include<iostream>
#include"Time.h"
using namespace std; 
int main()
{
 Time t;
 t.print();
 t.setHour(20).print();
 t.setHour(2).setMinute(30).setSecound(10).print();
 t.setTime(20,20,20).print();
}
