#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
void printArray(int arr[], int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b]" << endl;
}
int main()
{

    int arr[5] = {4, 1, 5, 2, 3};
    int size = 5;
    cout << "UnSorted Array: ";
    printArray(arr, size);
    insertion_sort(arr, size);
    cout << "Sorted Array: ";
    printArray(arr, size);
    return 0;
}