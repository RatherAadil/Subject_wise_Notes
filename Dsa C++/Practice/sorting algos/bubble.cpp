#include <iostream>
using namespace std;
void seletionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int size = 6;

    cout << "Before sorting: ";
    display(arr, size);
    seletionSort(arr, size);
    cout << "\nAfter sorting: ";
    display(arr, size);

    return 0;
}