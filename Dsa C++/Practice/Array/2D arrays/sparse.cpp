#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 3;
    int sparse[rows][cols];
    cout << "Enter the Elements of  matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> sparse[i][j];
        }
    }
    int size = 0, k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
                size++;
        }
    }
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
    cout << "sparse matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << sparse[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Compact matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << compact[i][j] << " ";
        }
        cout << endl;
    }
}