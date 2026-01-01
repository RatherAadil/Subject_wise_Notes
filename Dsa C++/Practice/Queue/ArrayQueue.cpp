#include <iostream>
using namespace std;
#define MAX 10
struct queue
{
    int arr[MAX];
    int front, rear;
} q;

void enqueue(int data)
{
    if (q.rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (q.front == -1 && q.rear == -1)
    {
        q.front = q.rear = 0;
    }
    else
    {
        q.rear++;
    }
    q.arr[q.rear] = data;
}
int dequeue()
{
    if (q.front == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int val;
    val = q.arr[q.front];
    if (q.front == q.rear)
    {
        q.front = q.rear = -1;
    }
    else
    {
        q.front++;
    }
    return val;
}
// #include <iostream>
// using namespace std;
// #define MAX 10

// struct queue
// {
//     int arr[MAX];
//     int rear, front;
// } q;

// void enqueue(int data)
// {
//     if (q.rear == MAX - 1)
//     {
//         cout << "Queue is full" << endl;
//         return;
//     }
//     if (q.front == -1 && q.rear == -1)
//     {
//         q.front = q.rear = 0;
//     }
//     else
//     {
//         q.rear++;
//     }
//     q.arr[q.rear] = data;
//     cout << "Added " << data << " to the queue" << endl;
// }
// int dequeue()
// {
//     if (q.front == -1)
//     {
//         cout << "Queue is empty" << endl;
//         return -1;
//     }
//     int x = q.arr[q.front];
//     if (q.front == q.rear)
//     {
//         q.front = q.rear = -1;
//     }
//     else
//     {
//         q.front++;
//     }
//     return x;
// }
void display()
{
    if (q.front == -1 && q.rear == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Elements in queue are: ";
    for (int i = q.front; i <= q.rear; i++)
    {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    q.front = q.rear = -1;
    int val;
    int choice;
    do
    {
        cout << "Enter your choice: \n1.Enqueue\t2.Dequeue\t3.Display\t4.exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to enqueue: ";
            cin >> val;
            enqueue(val);
            break;
        case 2:
            val = dequeue();
            cout << "Deleted element is: " << val << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (choice != 4);
    return 0;
}
