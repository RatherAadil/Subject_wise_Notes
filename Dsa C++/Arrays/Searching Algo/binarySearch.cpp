`#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key);
void printArray(int arr[], int size);
int main()
{
    int noOfElems, key;
    int arr[10];
    cout << "Enter the Number of Elements: ";
    cin >> noOfElems;
    for (int i = 0; i < noOfElems; i++)
    {
        cout << "Enter the element " << i << ": ";
        cin >> arr[i];
    }
    printArray(arr, noOfElems);
    cout << "Enter the target Element: ";
    cin >> key;
    int found = binarySearch(arr, noOfElems, key);
    if (found)
    {
        cout << "Target Element is found at index " << found;
    }
    else
    {
        cout << "Target Element is not found";
    }

    return 0;
}
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
