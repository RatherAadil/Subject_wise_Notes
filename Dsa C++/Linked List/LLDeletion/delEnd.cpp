
#include <iostream>
using namespace std;
#include "../createLL.h"
void delEnd(node *head)
{
    node *temp;
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (head->next != nullptr)
    {
        temp = head;
        head = head->next;
    }
    temp->next = nullptr;
    delete head;
}
int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    head = create(head, n);
    delEnd(head);
    cout << "After deletion at End of Linked List is :  " << endl;
    display(head);

    return 0;
}