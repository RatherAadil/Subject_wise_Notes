#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
void printArray(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b]";
}
int main()
{

    int arr[5] = {3, 5, 8, 1, 4};
    int size = 5;
    reverse(arr, size);
    cout << "Reversed Array: ";
    printArray(arr, size);
    return 0;
}