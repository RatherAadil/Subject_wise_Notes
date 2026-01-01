#include <iostream>
using namespace std;
#define MAX 10
struct stack
{
    int arr[MAX];
    int top1;
    int top2;
} s;
void pushA(int data)
{
    if (s.top1 + 1 == s.top2)
    {
        cout << "Stack Overflow." << endl;
        return;
    }
    s.top1++;
    s.arr[s.top1] = data;
}
void pushB(int data)
{
    if (s.top2 - 1 == s.top1)
    {
        cout << "Stack Overflow." << endl;
        return;
    }
    s.top2--;
    s.arr[s.top2] = data;
}

int popA()
{
    int val;
    if (s.top1 == -1)
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    val = s.arr[s.top1];
    s.top1--;
    return val;
}
int popB()
{
    int val;
    if (s.top2 == MAX)
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    val = s.arr[s.top2];
    s.top2++;
    return val;
}
void display1()
{
    cout << "Stack 1: ";
    for (int i = s.top1; i >= 0; i--)
        cout << s.arr[i] << " ";
    cout << endl;
}

void display2()
{
    cout << "Stack 2: ";
    for (int i = s.top2; i < MAX; i++)
        cout << s.arr[i] << " ";
    cout << endl;
}
int main()
{
    s.top1 = -1;
    s.top2 = MAX;

    int choice, data, value;
    while (true)
    {
        cout << "Enter Your choice:\n1.pushA\n2.pushB\n3.PopA\n4.PopB\n5.Display1\n6.Display2\n7.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to be pushed: ";
            cin >> data;
            pushA(data);
            break;
        case 2:
            cout << "Enter the element to be pushed: ";
            cin >> data;
            pushB(data);
            break;
        case 3:
            value = popA();
            cout << "Popped element is : " << value << endl;
            break;
        case 4:
            value = popB();
            cout << "Popped element is : " << value << endl;
            break;
        case 5:
            display1();
            break;
        case 6:
            display2();
            break;
        case 7:
            exit(1);

        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }
}