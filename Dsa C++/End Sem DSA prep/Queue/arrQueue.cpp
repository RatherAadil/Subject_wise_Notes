// #include <iostream>
// using namespace std;
// #define MAX 10
// struct queue
// {
//     int queue[MAX];
//     int front, rear;
// } q;
// void enqueue(int x)
// {
//     if (q.rear == MAX - 1)
//     {
//         cout << "Queue is full" << endl;
//         return;
//     }
//     if (q.front == -1)
//     {
//         q.front = 0;
//     }
//     q.rear++;
//     q.queue[q.rear] = x;
// }
// int dequeue()
// {
//     if (q.front == -1)
//     {
//         cout << "Queue is empty" << endl;
//         exit(1);
//     }
//     int x = q.queue[q.front];
//     if (q.front == q.rear)
//     {
//         q.front = q.rear = -1;
//     }

//     q.front++;
//     return x;
// }
// int main()
// {
//     q.front = -1, q.rear = -1;
//     enqueue(10);
//     enqueue(20);

//     int el = dequeue();
//     cout << "Delelted el:" << el << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
#define MAX 10
int queue[MAX];
int front, rear;
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = x;
}
int dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        exit(1);
    }
    int x = queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    front++;
    return x;
}
void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue :";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}
int main()
{
    front = -1, rear = -1;
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    int el = dequeue();
    cout << "DELETED ELEMENT: " << el << endl;
    display();

    return 0;
}