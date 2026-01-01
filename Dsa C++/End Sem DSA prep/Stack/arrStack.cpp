#include <iostream>
using namespace std;
#define MAX 10
struct stack
{
    int stack[MAX];
    int top;
} s;
void push(int n)
{
    if (s.top == MAX - 1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    s.top++;
    s.stack[s.top] = n;
}

void pop()
{
    if (s.top == -1)
    {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << "POP value: " << s.stack[s.top];
    s.top--;
}
int peek()
{
    if (s.top == -1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    return s.stack[s.top];
}

int main()
{
    s.top = -1;
    push(10);
    int peekval = peek();
    if (peekval != -1)
        cout << "TOP VALUE " << peekval << endl;
    pop();
    return 0;
}