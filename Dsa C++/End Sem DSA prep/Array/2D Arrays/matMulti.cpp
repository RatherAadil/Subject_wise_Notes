#include <iostream>
using namespace std;

int main()
{
    int row1 = 2, col1 = 3, row2 = 3, col2 = 2;
    int mat1[row1][col1] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[row2][col2] = {{1, 2}, {3, 4}, {5, 6}};
    int result[row1][col2] = {};

    if (col1 != row2)
    {
        cout << "Multiplication not possible" << endl;
        exit(1);
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Result Matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}