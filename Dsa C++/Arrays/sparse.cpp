#include <iostream>
using namespace std;
void printMat(int *mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *((mat + i * cols) + j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows, cols;
    cout << "Enter the rows and cols of matrix:" << endl;
    cin >> rows >> cols;
    int sparseMat[rows][cols];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> sparseMat[i][j];
        }
    }

    // print original matrix
    cout << "Sparse Matrix:" << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << sparseMat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    printMat(&sparseMat[0][0], rows, cols);
    // check for non-zero elements
    int size = 0;
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparseMat[i][j] != 0)
            {
                size++;
            }
        }
    }
    int compactMat[3][size];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparseMat[i][j] != 0)
            {
                compactMat[0][k] = i;
                compactMat[1][k] = j;
                compactMat[2][k] = sparseMat[i][j];
                k++;
            }
        }
    }

    // print compact matrix
    cout << "Compact Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << compactMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}