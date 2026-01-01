
#include <iostream>
using namespace std;
#include "../createLL.h"
node *delBeg(node *head)
{
    node *temp = head;
    temp = temp->next;
    delete head;
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
    head = delBeg(head);
    cout << "After deletion at beginning of Linked List is :  " << endl;
    display(head);

    return 0;
}