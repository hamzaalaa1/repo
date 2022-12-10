 #include"array.h"
 template <typename T>
 istream &operator>>(istream &input, ArrayTemp<T>&a)
{
    for (int i = 0; i < a.size; ++i)
    {
        input >> a.ptr[i];
    }
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, ArrayTemp<T>&a)
{
  for(int i = 0 ; i < a.size ; ++i)
  {
    output<<a.ptr[i];
  }
  return output ;
}