#include <iostream>
#include <vector>
using namespace std;
int partition(int arr[], int st, int end)
{
    int pivot = arr[end];
    int idx = st - 1;
    for (int j = st; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], pivot);
    return idx;
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

int merge(int arr[], int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        arr[k + st] = temp[k];
    }
}
void mergeSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int mid = (st + end) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}
void printArray(int arr[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4, 2, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}