#include <iostream>
using namespace std;
void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);
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
    cout << "Array before sorting: ";
    printArray(arr, noOfElems);
    bubbleSort(arr, noOfElems);
    cout << "Array After sorting: ";
    printArray(arr, noOfElems);
    return 0;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
