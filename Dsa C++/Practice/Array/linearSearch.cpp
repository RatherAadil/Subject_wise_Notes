#include <iostream>
using namespace std;
void linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key is found at " << i << " index" << endl;
            return;
        }
    }
    cout << "Key is not found " << endl;
    return;
}
int main()
{
    int arr[5];
    int size = 5;
    int key;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> key;
    linearSearch(arr, size, key);

    return 0;
}