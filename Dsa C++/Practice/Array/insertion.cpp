#include <iostream>
using namespace std;
int insertion(int arr[], int size, int index, int element, int capacity)
{
    if (size >= capacity)
    {
        cout << "Error: invalid index. valid range is 0 to " << size << endl;
        return size;
    }
    if (index < 0 || index > size)
    {
        cout << "Error: invalid index. valid range is 0 to " << size << endl;
        return size;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return ++size;
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
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the index to insert: ";
    cin >> index;
    size = insertion(arr, size, index, element, capacity);
    cout << "After insertion at " << index << " Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}