#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack<int> stackOfint(2);
    int value = 1;

    while (stackOfint.push(value))
    {
        cout << value++ << ' ';
    }
    cout << "we can not push more values " << value << endl;

    while (stackOfint.pop(value))
        cout << value << ' ';

    cout << "the stack is empty\n";
}