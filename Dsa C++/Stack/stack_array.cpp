#include <iostream>
using namespace std;

#define MAX 10
struct stack
{
    int capacity[MAX];
    int top;
} s;
void push(int value)
{
    if (s.top == MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
        exit(1);
    }
    s.top++;
    s.capacity[s.top] = value;
}
int pop()
{
    int x;
    if (s.top == -1)
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    x = s.capacity[s.top];
    s.top--;
    return x;
}
int peek()
{
    if (s.top == -1)
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    return s.capacity[s.top];
}
int main()
{
    s.top = -1;
    push(10);
    push(20);
    push(30);

    cout << "Popped element is " << pop() << endl;
    cout << "Top Element is : " << peek() << endl;

    return 0;
}