#include"List.h"
List::List(int size):size(size)
{
  ptr = new int[this->size];
  for(int i = 0 ; i < this->size ;++i )
   ptr[i] = 0 ;
}

int& List::operator[](int subscript)
{
  if(subscript >= size)
  {
    tempPtr = new int[subscript + 5];
    for(int i = 0 ; i < subscript + 5 ;++i)
    {
         if(i< size)
          tempPtr[i] = ptr[i];
          if(i >= size)
          {
            tempPtr[i] = 0;
          }
    }
    size = subscript + 5;
    delete [] ptr;
    ptr = tempPtr ;
  
  }
  return ptr[subscript];
}

int List::getSize()
{
    return size ;
}
List::~List()
{
    delete[] ptr;
 
}