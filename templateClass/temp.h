#ifndef TEMPCLASS_H
#define TEMPCLASS_H

template<typename T>
class stack
{
    public : stack(int = 10) ;
            ~stack(){ delete []ptr;} 
            T pop();
            bool push(T value);
            bool isFull()
             {
                return top == (size-1);
             }
            bool isEmpty()
             {
                return top == -1;
             }
    private :
          int size ; 
          T *ptr;
          int top ;
          int end;
};
template<typename T>
stack<T>::stack(int s):size(s > 0 ? s : 10),ptr(new T[size]),top(-1),end(0){}

template<typename T>
T stack<T>::pop()
{
    T value ;
    if(!isEmpty())
    {
      value = ptr[end++];
      return value ;
    }
    else
    {
        return 0;
    }
}
template<typename T>
bool stack<T>::push(T value)
{ 
    if(!isFull())
    {
          ptr[++top]  = value ;
          return true ; 
    }
   return false ;
}
#endif