#include <iostream>
using namespace std;
int product(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = product(arr, size);
    cout << result;

    return 0;
}