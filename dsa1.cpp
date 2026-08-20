#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50, 60};

    cout << "Original array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nReversed array: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
