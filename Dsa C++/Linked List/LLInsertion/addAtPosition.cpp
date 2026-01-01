#include <iostream>
#include "../createLL.h"
using namespace std;

node *addAtPosition(node *head, int position)
{
    node *newNode = new node();
    int value;
    cout << "Enter the value of node to add at position " << position << ": ";
    cin >> value;

    newNode->data = value;
    newNode->next = nullptr;

    if (position == 1) // insert at beginning
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    node *temp = head;

    for (int i = 1; i < position - 1 && temp != nullptr; i++)
        temp = temp->next;

    if (temp == nullptr)
    {
        cout << "Position out of range!" << endl;
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;

    head = create(head, n);

    int position;
    cout << "Enter the position you want to add node at: ";
    cin >> position;

    head = addAtPosition(head, position);

    display(head);
    return 0;
}
