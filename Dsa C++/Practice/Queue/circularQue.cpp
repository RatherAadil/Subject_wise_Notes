#include <iostream>
using namespace std;
#define MAX 10
struct Cirque
{
    int arr[MAX];
    int front, rear;
} q;
void enqueue(int data)
{
    // Check if queue is full - correct condition with proper parentheses
    if ((q.rear + 1) % MAX == q.front)
    {
        cout << "Queue is full" << endl;
        return;
    }

    // Initialize queue on first insertion
    if (q.front == -1 && q.rear == -1)
    {
        q.front = q.rear = 0;
    }
    else
    {
        q.rear = (q.rear + 1) % MAX; // Wrap around using modulo
    }
    q.arr[q.rear] = data;
}
int dequeue()
{
    if (q.front == -1 && q.rear == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    int val = q.arr[q.front];

    // If only one element, reset queue
    if (q.front == q.rear)
    {
        q.front = q.rear = -1;
    }
    else
    {
        q.front = (q.front + 1) % MAX; // Wrap around using modulo
    }
    return val;
}
int main()
{
    q.front = q.rear = -1;
    enqueue(10);
    enqueue(20);
    enqueue(30);

    int result = dequeue();
    if (result != -1)
    {
        cout << "Dequeued element is: " << result << endl;
    }

    return 0;
}