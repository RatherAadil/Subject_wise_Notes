#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[6] = {1, 65, 4, 5, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 100;
    bool result = linearSearch(arr, size, key);
    if (result)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present";
    }
}