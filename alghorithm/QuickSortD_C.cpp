#include <iostream>

using namespace std;
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<' ';
    }
}
void swap(int *number1, int *number2)
{
 
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
int partion(int *arr, int low, int high)
{
    int p = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= p)
        {
            i++;
             swap(arr + j, arr + i);
        }
    }
    swap(arr+high,arr+(i + 1));
    return i + 1;
}
void quickSort(int *arr , int low , int high)
{
    if(low < high )
    {
        int p = partion(arr , low , high); 
        quickSort(arr,low , p-1); 
        quickSort(arr,p +1 , high );
    }
}
int main()
{
    int arr[4] = {12 ,5 ,20,3};
    quickSort(arr,0 ,3);
    print(arr,4);
}