
#include <iostream>
using namespace std;
#include "../createLL.h"
node *addEnd(node *head)
{
    node *newNode = new node();
    node *temp = new node();
    int value;
    cout << "Enter the value of node to add at End: ";
    cin >> value;
    newNode->data = value;
    newNode->next = nullptr;
    temp = head;
    while (head->next != nullptr)
    {
        head = head->next;
    }
    head->next = newNode;
    head = temp;
    return head;
}
int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    head = create(head, n);
    head = addEnd(head);
    display(head);

    return 0;
}