#include <iostream>
using namespace std;
const int MAX = 10;
struct stack
{
    int stack[MAX];
    int top;
} s;
void push(int data)
{
    if (s.top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    s.stack[++s.top] = data;
}
int pop()
{
    if (s.top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    int x = s.stack[s.top];
    s.top--;
    return x;
}
int peek()
{
    if (s.top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    return s.stack[s.top];
}

int main()
{
    s.top = -1;
    char choice;
    int value;
    while (true)
    {
        cout << "Enter your choice:" << endl;
        cout << "A.Push\tB.POP\tC.Peek\tD.exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 'A':
            cout << "Enter the value to push: ";
            cin >> value;
            push(value);
            break;

        case 'B':

            value = pop();
            if (value != -1)
                cout << "Popped element is : " << value << endl;
            break;
        case 'C':
            value = peek();
            cout << "TOP element is : " << value << endl;
            break;
        case 'D':
            exit(1);
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}