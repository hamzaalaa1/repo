#ifndef AR_H
#define AR_H
#include <iostream>
using namespace std;
template <typename T >
class ArrayTemp
{ 
    template<typename t>
    friend ostream &operator<<(ostream & , ArrayTemp<t>&);
    template<typename t>
    friend istream &operator>>(istream & , ArrayTemp<t>&);
 

public:
    
    ArrayTemp(int size);
    void input();
    void print();
    ~ArrayTemp()
    {
        delete[] ptr;
    }

private:
    int size;
    T *ptr;
};
template <typename T>
ArrayTemp<T>::ArrayTemp(int size) : size(size), ptr(new T[size])
{
}
template <typename t>
 istream &operator>> (istream &input, ArrayTemp<t>&a)
{
    for (int i = 0; i < a.size; ++i)
    {
        input >> a.ptr[i];
    }
    return input;
}
template <typename t>
ostream & operator<< (ostream &output, ArrayTemp<t>&a)
{
  for(int i = 0 ; i < a.size ; ++i)
  {
    output<<a.ptr[i];
  }
  return output ;
}
   template<class T>
   void ArrayTemp<T>::input()
    {
        for(int i = 0 ; i < size  ; i++)
        {
            cin >> ptr[i];
        }
    }
    template<class T>
   void ArrayTemp<T>::print()
   {
    for(int i = 0 ; i < size ; i++)
    {
        cout << ptr[i]<<' ';
    }
   }
#endif