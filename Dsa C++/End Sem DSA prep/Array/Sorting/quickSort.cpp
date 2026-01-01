#include <iostream>
using namespace std;
int partition(int arr[], int st, int end)
{
    int idx = st - 1;
    int pivot = arr[end];
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}
void quickSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int pivIndx = partition(arr, st, end);
        quickSort(arr, st, pivIndx - 1);
        quickSort(arr, pivIndx + 1, end);
    }
}

void printArray(int arr[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {5, 2, 6, 4, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size - 1);

    printArray(arr, size);
    return 0;
}