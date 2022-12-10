//#include"stack.h"
#ifndef STACK_H
#define STACK_H
template<typename T,int element>
class Stack 
{ 
    public: 
      Stack(int = element);
      bool isFull()
      {
       return top == size-1 ;
      }
      bool isEmpty()
      {
        return top == -1 ;
      }
    bool pop(T &);
    bool push(T );
    private :
      T *stackPtr ;
      int size ;
      int top ;   
};
template<typename T,int element>
Stack<T,element>::Stack(int size):size(size),top(-1),stackPtr(new T[size]){}


template<typename T,int element>
bool Stack<T,element>::push(T value)
{
  if(!isFull())
  {
    stackPtr[++top] = value;
    return true;
  }
  return false;
}
template<class T,int element>
bool Stack<T,element>::pop(T &value)
{
    if(!isEmpty())
    {
        value = stackPtr[top--];
        return true;
    }
    return false;
}
#endif