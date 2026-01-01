#include <iostream>
using namespace std;
#include "../createLL.h"
node *delAt(struct node *head, int loc)
{
    node *temp, *curr;
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return head;
    }
    if (loc < 1)
    {
        cout << "Invalid location" << endl;
        return head;
    }
    if (loc == 1)
    {
        temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    curr = head;
    for (int i = 1; i < loc; i++)
    {
        if (curr->next == nullptr)
        {
            cout << "Location exceeds" << endl;
            return head;
        }
        temp = curr;
        curr = curr->next;
    }
    temp->next = curr->next;
    delete curr;
    return head;
}
int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    head = create(head, n);
    int loc;
    cout << "Enter the location to delete the node at :";
    cin >> loc;
    head = delAt(head, loc);
    cout << "After deletion at " << loc << " of Linked List is : " << endl;
    display(head);

    return 0;
}