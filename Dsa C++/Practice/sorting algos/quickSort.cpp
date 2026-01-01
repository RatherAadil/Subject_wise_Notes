#include <iostream>
using namespace std;
int partition(int arr[], int st, int end)
{

    return;
}
void quickSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st, pivIdx - 1);
        quickSort(arr, pivIdx + 1, end);
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
    int st = 0;
    int end = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    display(arr, end);
    quickSort(arr, st, end - 1);
    cout << "\nAfter sorting: ";
    display(arr, end);

    return 0;
}