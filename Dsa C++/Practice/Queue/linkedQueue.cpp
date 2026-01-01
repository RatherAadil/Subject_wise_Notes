#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *front = nullptr, *rear = nullptr;

void enqueue(int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = nullptr;

    // If queue is empty
    if (front == nullptr)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Inserted " << data << " into the queue" << endl;
}
// Dequeue (Delete element from front)
void dequeue()
{
    if (front == nullptr)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    node *temp = front;
    cout << "Deleted element is: " << front->data << endl;
    front = front->next;

    // If queue becomes empty
    if (front == nullptr)
        rear = nullptr;

    delete temp;
}
void display()
{
    if (front == nullptr)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    node *temp = front;
    cout << "Queue elements: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    enqueue(10);
    display();
    dequeue();
    display();
    return 0;
}