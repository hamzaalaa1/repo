#include<iostream>
#include <iomanip>
#include "Array.h"
Array::Array(int size)
{
    if(size < 0 )
    throw invalid_argument("The size of array can not be negative\n");
    
    this->size = size ; 
    ptr = new int[this->size];  
    for(int i = 0 ; i < this->size ; ++i)
    ptr[i] = 0 ; 
}
Array::Array(Array &object):size(object.size)
{
    //size = object.size;
    object.ptr = new int[size];
    for(int i = 0 ; i < size ; ++i)
    ptr[i] = object.ptr[i];
}
Array::Array(int arraysNumber , int index) :arraysNumbers(arraysNumber),indexs(index)
{
    size = arraysNumber * index ; 
    ptr = new int[size];
    for(int i = 0 ; i <size ; ++i)
    {
        ptr[i] = 0;
    }
}
int& Array::operator()(int arraysNumber ,int index)
{
  if((((arraysNumber * indexs) + index)) >= size)
  throw out_of_range("the index is out of range \n");
  return ptr[((arraysNumber * indexs) + index)];
}
int Array::getSize()
{
    return size ; 
}
const Array &Array::operator=(const Array &right)
{
   if(this != &right)
   {
     if(size != right.size)
     {
        size = right.size ; 
        delete [] ptr ; 
        ptr = new int[size];
     }
     for(int i = 0 ; i < size ; ++i)
     ptr[i] = right.ptr[i];
   }
   return *this ;
}
bool Array::operator==(const Array &right)
{
  if(size != right.size)
  return  false;

  for(int i = 0 ; i < size ; i ++)
  if(ptr[i] != right.ptr[i])
  return false ;
  
  return true ;
}
int &Array::operator[](int subscirpt)
{
    if(subscirpt >= size || subscirpt < 0)
    throw out_of_range("This subscript is out of range\n");

    return ptr[subscirpt];
}
int Array::operator[](int subscirpt)const
{
     if(subscirpt >= size || subscirpt < 0)
     throw out_of_range("This subscript is out of range\n");

     return ptr[subscirpt];
}
ostream &operator<<(ostream &output , Array &object)
{
    int i ;
   for(i = 0 ; i < object.size ; ++i)
   { 
      output << setw(12) << object.ptr[i];
      if((i+1) % 4 == 0)
      cout<<endl;
   }
    if(i % 4 != 0)
    output <<endl;

    return output;
}
istream &operator>>(istream &input , Array &object)
{
    for(int i = 0 ; i < object.size ; ++ i)
    {
        input >>object.ptr[i];
    }
    return input ; 
}
Array::~Array()
{
 delete[] ptr; 
}