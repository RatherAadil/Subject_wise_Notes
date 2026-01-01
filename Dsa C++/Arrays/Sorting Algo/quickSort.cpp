#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << "\b]";
}
int partition(vector<int> &arr, int st, int end)
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
    swap(arr[end], arr[idx]);
    return idx;
}
void quick_sort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivotInd = partition(arr, st, end);
        quick_sort(arr, st, pivotInd - 1);
        quick_sort(arr, pivotInd + 1, end);
    }
}
int main()
{
    vector<int> arr = {5, 2, 6, 4, 1, 3};
    int st = 0;
    int end = arr.size() - 1;
    quick_sort(arr, st, end);
    cout << "Sorted array: ";
    printArray(arr, 6);
    return 0;
}