#include <iostream>
using namespace std;
#define SIZE 3
struct CircularQueue
{
    int arr[SIZE];
    int front, rear;
} q;

void push(int data)
{
    if ((q.rear + 1) % SIZE == q.front)
    {
        cout << "CQ IS FULL\n";
        return;
    }
    if (q.front == -1)
        q.front = 0;

    q.rear = (q.rear + 1) % SIZE;
    q.arr[q.rear] = data;
}
void pop()
{
    if (q.front == -1)
    {
        cout << "CQ IS EMPTY\n";
        return;
    }

    cout << "DELETED ITEM: " << q.arr[q.front];
    if (q.front == q.rear)
    {
        q.front = q.rear = -1;
    }
    else
    {
        q.front = (q.front + 1) % SIZE;
    }
}

int front()
{
    if (q.front == -1)
    {
        cout << "CQ IS EMPTY\n";
        return -1;
    }
    return q.arr[q.front];
}
int main()
{
    q.front = -1;
    q.rear = -1;

    push(10);
    push(20);
    push(30);
    push(40);

    cout << "CQ FRONT: " << front() << endl;

    pop();
    cout << endl;
    pop();
    cout << endl;
    pop();
    cout << endl;

    return 0;
}
