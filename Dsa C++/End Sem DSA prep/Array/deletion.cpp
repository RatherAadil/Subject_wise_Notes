#include <iostream>
using namespace std;
int deleteInArray(int arr[], int size, int index)
{

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
    return size;
}

int main()
{
    int arr[100] = {1, 5, 8, 18, 25};
    int size = 5;
    int index = 1;
    size = deleteInArray(arr, size, index);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}