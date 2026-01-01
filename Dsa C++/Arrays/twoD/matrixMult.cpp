#include <iostream>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;

    // Input sizes
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1; // m x n matrix

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2; // n x p matrix

    int mat1[rows1][cols1], mat2[rows2][cols2], product[rows1][cols2];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    // product matrix init to 0
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            product[i][j] = 0;
        }
    }

    if (cols1 != rows2)
    {
        cout << "Multiplication not possible" << endl;
        return -1;
    }
    // Matrix Multiplication
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
