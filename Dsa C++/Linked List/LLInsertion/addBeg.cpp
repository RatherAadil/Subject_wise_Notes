
#include <iostream>
using namespace std;
#include "../createLL.h"
node *addBeg(node *head)
{
    node *newNode = new node();
    int value;
    cout << "Enter the value of node to add at Beginning: ";
    cin >> value;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}
int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    head = create(head, n);
    head = addBeg(head);
    display(head);

    return 0;
}