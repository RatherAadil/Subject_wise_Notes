#include <iostream>
using namespace std;
#define MAX 10
struct stack
{
    int stack[MAX];
    int top1;
    int top2;
} s;
void pushA(int val)
{
    if (s.top1 + 1 == s.top2)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    s.top1++;
    s.stack[s.top1] = val;
}
void pushB(int val)
{
    if (s.top2 - 1 == s.top1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    s.top2++;
    s.stack[s.top2] = val;
}

int popA()
{
    if (s.top1 == -1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    int x = s.stack[s.top1];
    s.top1--;
    return x;
}
int popB()
{
    int val;
    if (s.top2 == MAX)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    val = s.stack[s.top2];
    s.top1++;
    return val;
}
int main()
{
    s.top1 = -1;
    s.top2 = MAX - 1;

    pushA(10);
    pushB(20);

    return 0;
}