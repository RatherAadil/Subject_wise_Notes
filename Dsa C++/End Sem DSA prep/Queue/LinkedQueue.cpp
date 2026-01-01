#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} q;
node *front = NULL;
node *rear = NULL;
void enqueue(int x)
{
    node *newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    if (rear == NULL)
    {
        rear = front = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << front->data;
    node *temp = front;
    front = front->next;
    delete temp;
}
void display()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue: ";
    node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}