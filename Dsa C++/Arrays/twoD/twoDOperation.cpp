#include <iostream>
using namespace std;
const int ROWS = 2;
const int COLS = 3;

void insertElms(int twoD[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> twoD[i][j];
        }
    }
}
void addMat(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int addMat[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            addMat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subMat(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int subMat[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            subMat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void printTwoD(int twoD[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // creation
    int mat1[ROWS][COLS];
    int mat2[ROWS][COLS];
    int add[ROWS][COLS];
    int sub[ROWS][COLS];

    cout << "Enter Matrix 1 Elements:";
    insertElms(mat1);
    cout << "Enter Matrix 2 Elements:";
    insertElms(mat2);
    addMat(mat1, mat2, add);
    cout << "Addition of two Matrices is: " << endl;
    printTwoD(add);

    subMat(mat1, mat2, sub);
    cout << "Subtraction of two Matrices is: " << endl;
    printTwoD(sub);

    return 0;
}