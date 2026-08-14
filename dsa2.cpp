#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    // Push elements
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }

    // Pop an element
    cout << "\nPopped element: " << stack[top--] << endl;

    cout << "Stack after poping an element: ";
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }

    return 0;
}
