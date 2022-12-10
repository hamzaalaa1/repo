#include <iostream>
#include <string>

using namespace std;
 void printArray(const string& s )
 {
       int count = 0;
    while (s[count] != '\0')
    {
        cout << s[count];
        if (s[count] == ' ')
            cout << '\n';

       count ++;     
    }
 }
template <typename T>
void printArray(T *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
template <typename T>
int printArray(T *array, int count, int lower, int higher)
{
    if ((lower >= higher) || (lower < 0) || (higher < 0) || (higher >= count) || (lower >= count))
        return 0;
    else
        for (int i = lower; i <= higher; i++)
        {
            cout << array[i] << ' ';
        }
    cout << endl;
    return higher - lower;
}

int main()
{
 printArray("hamza alaa abdelftaj");
}