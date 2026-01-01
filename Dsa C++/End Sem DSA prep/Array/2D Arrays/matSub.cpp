#include <iostream>
using namespace std;
#define ROWS 3
#define COLS 2
void displayTwoD(int mat[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int mat1[ROWS][COLS] = {{1, 2}, {4, 5}, {7, 8}};
    int mat2[ROWS][COLS] = {{1, 2}, {4, 5}, {7, 8}};
    int result[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    cout << "Sum of two matrices: " << endl;
    displayTwoD(result);
    return 0;
}