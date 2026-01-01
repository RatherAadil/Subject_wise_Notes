#include <iostream>
using namespace std;
void seletionSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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