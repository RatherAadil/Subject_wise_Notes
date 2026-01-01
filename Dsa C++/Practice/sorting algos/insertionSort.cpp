#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
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
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 4, 2, 8, 3, 0};
    int size = 6;

    cout << "Before sorting: ";
    display(arr, size);
    insertionSort(arr, size);
    cout << "\nAfter sorting: ";
    display(arr, size);

    return 0;
}