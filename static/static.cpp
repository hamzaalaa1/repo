#include<iostream>
#include"static.h"

using namespace std;
int Static::count = 0 ;//we create and intialize the variable here but without using static key word ;
Static::Static():c(2000),i(1000)
{count++;}
int Static::getCount()
{
    return count;
}