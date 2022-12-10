#include<iostream>
using namespace std ; 
bool binarySearchDandC(int *arr,int low , int high,int key)
{
    int mid = (low + high)/2; 
    if(low > high)
    {
        return false ; 
    }
    else if(arr[mid] == key )
    return true ; 
    else if(key < arr[mid])
    {
          binarySearchDandC(arr,low , mid -1 ,key);
    }else if(key > arr[mid])
    {
          binarySearchDandC(arr,mid+1 , high , key);
    }
  
}
int main ()
{
    int arr[5] = {1,2,3,4,5};
  cout << binarySearchDandC(arr,0,4,6);
}