#include<iostream>

using namespace std ;
template<typename T>
T binarySearch(T *arr ,T item,int size)
{
  int high = size - 1 ;
  int low = 0 ; 
  int middel ;
  while(low <= high)
  {
    middel = (low + high)/2;
    if(item < arr[middel])
    {
        high = middel -1;
    }
    else if(item > arr[middel])
    {
        low = middel + 1 ;
    } else
    {
        return item ;
    } 
    
  } 
  return (T)NULL;
}
int main()
{
 char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
 cout<<binarySearch(arr,'x',10);
}