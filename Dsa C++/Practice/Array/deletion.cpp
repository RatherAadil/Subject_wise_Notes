#include <iostream>
using namespace std;
int deletion(int arr[], int size, int index)
{
    if (index < 0 || index > size)
    {
        cout << "Error: Invalid index" << endl;
        return size;
    }

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return --size;
}
int main()
{
    int arr[10];
    int size, index, element, capacity = 10;
    cout << "Enter the number of elements you want to insert: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the index to delete at: ";
    cin >> index;
    size = deletion(arr, size, index);
    cout << "After deletion at " << index << " Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}