#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {0, 1, 0, 1, 2, 3};
    int size = 6;

    cout << "Unique elements: ";
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
            cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}