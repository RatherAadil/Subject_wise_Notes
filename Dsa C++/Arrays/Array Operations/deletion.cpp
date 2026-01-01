#include <iostream>
using namespace std;

int deletion(int arr[], int index, int size);
void printArray(int arr[], int size);

int main()
{
    int arr[15];
    int i, index, size;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the index where you want to delete: ";
    cin >> index;

    cout << "\nArray before deletion:" << endl;
    printArray(arr, size);

    size = deletion(arr, index, size);

    cout << "Array after deletion:" << endl;
    printArray(arr, size);

    return 0;
}

int deletion(int arr[], int index, int size)
{

    // Check valid index
    if (index < 0 || index > size)
    {
        cout << "Invalid index!" << endl;
        return size;
    }

    // Shift elements to the left
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    return size;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
