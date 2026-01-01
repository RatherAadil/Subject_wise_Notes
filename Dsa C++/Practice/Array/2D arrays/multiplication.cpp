#include <iostream>
using namespace std;

int main()
{
    int rows1 = 2, rows2 = 3, cols1 = 3, cols2 = 2;
    int mat1[rows1][cols1];
    int mat2[rows2][cols2];
    cout << "Enter the Elements of first matrix: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the Elements of seconds matrix: " << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    int result[2][2];

    if (cols1 != rows2)
        return -1;

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] = mat1[i][k] * mat2[j][k];
            }
        }
    }
    cout << "MATRIX MULTIPLICATION IS: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}