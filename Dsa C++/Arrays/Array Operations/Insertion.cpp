#include <iostream>
using namespace std;

int insertion(int arr[], int element, int index, int size, int capacity);
void printArray(int arr[], int size);

int main()
{
    int arr[15];
    int i, element, index, size, capacity;
    capacity = sizeof(arr) / sizeof(int);

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the index where you want to insert: ";
    cin >> index;

    cout << "\nElements before insertion:" << endl;
    printArray(arr, size);

    size = insertion(arr, element, index, size, capacity);

    cout << "Elements after insertion:" << endl;
    printArray(arr, size);

    return 0;
}

int insertion(int arr[], int element, int index, int size, int capacity)
{
    // Check if there is space
    if (size >= capacity)
    {
        cout << "Insertion not possible: array is full!" << endl;
        return size;
    }

    // Check valid index
    if (index < 0 || index > size)
    {
        cout << "Invalid index!" << endl;
        return size;
    }

    // Shift elements to the right
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert element
    arr[index] = element;
    size++;

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
