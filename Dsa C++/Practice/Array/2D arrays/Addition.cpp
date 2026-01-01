#include <iostream>
using namespace std;

int main()
{
    int rows1 = 2, cols1 = 3, rows2 = 2, cols2 = 2;
    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2)
    {
        cout << "Matrices cannot be added. Dimensions must be same." << endl;
        return;
    }
    int mat1[rows1][cols1];
    int mat2[rows2][cols2];

    int result[rows1][cols1];

    cout << "Enter the elements of first matrix :" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements of second matrix :" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    return 0;
}