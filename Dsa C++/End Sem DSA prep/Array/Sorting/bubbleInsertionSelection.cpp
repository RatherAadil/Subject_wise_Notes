#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int SI = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[SI])
            {
                SI = j;
            }
        }
        swap(arr[i], arr[SI]);
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    int arr[5] = {4, 1, 5, 2, 3};
    // bubbleSort(arr, 5);
    selectionSort(arr, 5);
    // insertionSort(arr, 5);
    printArray(arr, 5);
}