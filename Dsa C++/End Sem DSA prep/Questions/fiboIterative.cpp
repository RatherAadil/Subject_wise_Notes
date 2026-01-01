#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int a = 0;
    int b = 1;

    int n;
    cout << "ENTER THE NUMBER OF TERMS: ";
    cin >> n;

    cout << fib(n);

    // cout << a << " " << b << " ";
    // for (int i = 2; i < n; i++)
    // {
    //     int c = a + b;
    //     a = b;
    //     b = c;
    //     cout << c << " ";
    // }

    return 0;
}