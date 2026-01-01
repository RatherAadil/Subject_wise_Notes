#include <iostream>
using namespace std;
int insertIntoArray(int arr[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        cout << "NO SPACE AVAILABLE\n";
        return size;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size++;
    return size;
}

int main()
{
    int arr[100] = {1, 5, 8, 18, 25};
    int size = 5;
    int capacity = 100;
    int element = 10;
    int index = 1;
    size = insertIntoArray(arr, size, element, index, capacity);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}