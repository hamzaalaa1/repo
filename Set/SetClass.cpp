#include<iostream>
#include <stdexcept>
#include"SetClass.h"
using namespace std;
SetClass::SetClass()
{
    for(int i = 0 ; i < 101 ; i++)
    {
        arr[i] = 0 ;
    }
}
 void SetClass::setElement(int E)
 {
    int *arr = getArray();
    arr[(E >= 0 && E < 101 )? E :throw invalid_argument("this is invalid element")] = 1 ;
 }
 void SetClass::printList()
 {
    int *arr = getArray();
    for(int i = 0 ; i < 101 ; i ++)
    {
        if(arr[i])
        cout<<i<<" ";
    }
    cout<<'\n';
 }
 int* SetClass::getArray()
 {
    return arr ; 
 }
 void SetClass::deleteElement(int E)
 {
    int *arr= getArray();
    arr[E] = 0 ;
 }
SetClass SetClass::UnionSet(SetClass set1, SetClass set2) 
{
    SetClass set3 ; 
    for(int i = 0 ; i < 101 ; i++)
    {
         if(set1.getArray()[i] | set2.getArray()[i])
         set3.setElement(i);
    }
   
    return set3;
}
SetClass SetClass::intersecet(SetClass set1, SetClass set2)
{
    SetClass set3 ; 
        for(int i = 0 ; i < 101 ; i++)
    {
         if(set1.getArray()[i] & set2.getArray()[i])
         set3.setElement(i);
    }
    return set3;
}
bool SetClass::inEqual(SetClass set1 , SetClass set2)
{
    for(int i = 0 ; i < 101 ; i++)
    {
        if(set1.getArray()[i] != set2.getArray()[i])
        return false ; 
    }
  return true ;
}