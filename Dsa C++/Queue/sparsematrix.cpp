#include <iostream>
using namespace std;
#define ROWS 3
#define COLS 4
int main()
{
    int spMat[ROWS][COLS] = {{1, 0, 0, 0},
                             {0, 0, 2, 0},
                             {0, 6, 5, 0}};
    cout << "Sparse Matrix is:" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << spMat[i][j] << " ";
        }
        cout << endl;
    }

    int size = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (spMat[i][j] != 0)
            {
                size++;
            }
        }
    }
    int compact[3][size];
    int k = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (spMat[i][j] != 0)
            {
                compact[0][k] = i;
                compact[1][k] = j;
                compact[2][k] = spMat[i][j];
                k++;
            }
        }
    }
    cout << "Compact Matrix is:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << compact[i][j] << " ";
        }
        cout << endl;
    }
}