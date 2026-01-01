#include <iostream>
using namespace std;
void printArray(int arr[], int size);
void selectionSort(int arr[], int size);
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
    selectionSort(arr, noOfElems);
    cout << "Array After sorting: ";
    printArray(arr, noOfElems);
    return 0;
}
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        if (minInd != i)
        {
            swap(arr[i], arr[minInd]);
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
