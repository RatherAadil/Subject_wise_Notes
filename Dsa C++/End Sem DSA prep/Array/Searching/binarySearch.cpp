#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[6] = {1, 5, 8, 18, 25, 33};
    int size = 6;
    int key;
    cout << "Enter the key to find: ";
    cin >> key;

    int result = binarySearch(arr, size, key);
    if (result)
    {
        cout << "Key is present at index " << result << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
}