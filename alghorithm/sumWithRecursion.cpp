#include <iostream>
using namespace std;
int sumWithR(int *arr, int size)
{
    if (size  == 0)
        return arr[0];
    else
        cout << arr[size ]<<endl;
        return arr[size ] + sumWithR(arr, size - 1);
}
int main()
{
    int arr[4] = {1,2,3,4} ; 
    cout <<"the sum is :"<<sumWithR(arr,3);
}