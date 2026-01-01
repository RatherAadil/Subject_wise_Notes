#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int st, int mid, int end)
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
    // Remaining elements pushing
    // left
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    // right
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // merge
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + st] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);      // left half
        mergeSort(arr, mid + 1, end); // right half
        merge(arr, st, mid, end);
    }
}

int main()
{
    // int arr[6] = {12, 31, 35, 8, 32, 17};
    // int size = sizeof(arr) / sizeof(int);
    // mergeSort(arr, 0, size - 1);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}