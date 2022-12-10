#ifndef STACK_H
#define STACK_H
template<typename T = int>
class Stack 
{ 
    public: 
      Stack(int = 10);
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
template<typename T>
Stack<T>::Stack(int size):size(size),top(-1),stackPtr(new T[size]){}


template<typename T>
bool Stack<T>::push(T value)
{
  if(!isFull())
  {
    stackPtr[++top] = value;
    return true;
  }
  return false;
}
template<class T>
bool Stack<T>::pop(T &value)
{
    if(!isEmpty())
    {
        value = stackPtr[top--];
        return true;
    }
    return false;
}
#endif