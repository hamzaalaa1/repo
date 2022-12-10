
template<typename T>
void swap(T *element1 , T *element2)
{
    T temp = *element1 ;
    *element1 = *element2;
    *element2 = temp;
}
template<typename T>
void selectionSort(T *arr, int size)
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
            }
          swap(arr+min,arr+i);
        }
    }
}

