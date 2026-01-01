#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key);
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
    int found = linearSearch(arr, noOfElems, key);
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
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
