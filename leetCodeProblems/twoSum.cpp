#include<iostream>
 using namespace std;

void swap(int *element1 , int *element2)
{
    int temp = *element1 ;
    *element1 = *element2;
    *element2 = temp;
}
 
void selectionSort(int *arr, int size)
{
    int  j ;
    int min = 0;
    for(int i = 0 ; i < size ; ++i)
    {
        min = i;
        for( j = i+1 ; j < size ; ++j)
        {
            if(arr[min] > arr[j])
            {
                min = j ;
                swap(arr+min,arr+i);
            }
          
        }
    }
}

int main()
{
 int arr[2] = {3,3};
 
 selectionSort(arr,2);
 
 int indx1 , indx2 = 0;
 int target = 6;

 for(int p1 = 0 ,p2 = 1 ; p1 < p2 ;)
 {
    if((arr[p1] + arr[p2]) == target)
    {
            indx1 = p1; 
            indx2 = p2;
           // cout <<p1 <<' '<<p2<< arr[p1]<<' '<<arr[p2];
            break;
    } else if((arr[p1] + arr[p2]) > target)
    {
        --p2;
    } else if((arr[p1] + arr[p2]) < target)
    {
        ++ p1;
    }
}  
 cout<<indx1<<' '<<indx2;
}