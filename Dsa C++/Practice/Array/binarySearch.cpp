#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10];
    int size, key;
    cout << "Enter the number of elements to enter : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find : ";
    cin >> key;

    int index = binary_search(arr, size, key);
    if (index != -1)
    {
        cout << "key is present at " << index << " index" << endl;
    }
    else
    {
        cout << "Key is not present";
    }
    return 0;
}