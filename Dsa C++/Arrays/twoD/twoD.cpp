#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 4;

void insertElms(int twoD[][COLS])
{
    cout << "Enter the Elements:";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> twoD[i][j];
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
    int twoD[ROWS][COLS];

    insertElms(twoD);
    printTwoD(twoD);

    return 0;
}