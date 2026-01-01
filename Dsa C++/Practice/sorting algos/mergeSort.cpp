#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int st, int mid, int end)
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
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
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
    mergeSort(arr, st, end - 1);
    cout << "\nAfter sorting: ";
    display(arr, end);

    return 0;
}