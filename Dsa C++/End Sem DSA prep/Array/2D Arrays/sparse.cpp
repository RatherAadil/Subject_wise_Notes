#include <iostream>
using namespace std;
int main()
{
    int rows = 3, cols = 3;
    int sparse[rows][cols] = {{1, 0, 0},
                              {0, 0, 2},
                              {3, 0, 0}};
    int size = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
            {
                size++;
            }
        }
    }
    int k = 0;
    int compact[3][size];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
            {
                compact[0][k] = i;
                compact[1][k] = j;
                compact[2][k] = sparse[i][j];
                k++;
            }
        }
    }

    cout << "Compact Matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << compact[i][j] << " ";
        }
        cout << endl;
    }
}