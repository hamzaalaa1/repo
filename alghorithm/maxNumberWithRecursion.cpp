#include <iostream>
using namespace std;
int maxNumber(int *arr, int size)
{
    static int max = 0;
    if (size == 0)
    {
        if (max < arr[size])
        {
            max = arr[size];
            arr[size];
        }
    }
    else if (max < arr[size])
    {
        max = arr[size];
        maxNumber(arr, size - 1);
    }
    else
    {
        maxNumber(arr, size - 1);
    }
}
int main()
{
    int arr[5] = {1, 210, 215, 4,1000};
     cout << maxNumber(arr, 4);
 
}