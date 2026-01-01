#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *head = NULL;
node *create(int n)
{
    node *p, *q;
    int val;
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = new node();
            cout << "Enter the value of node: ";
            cin >> val;
            head->data = val;
            head->next = NULL;
            p = head;
        }
        else
        {
            q = new node();
            cout << "Enter the value of node: ";
            cin >> val;
            q->data = val;
            q->next = NULL;
            p->next = q;
            p = q;
        }
    }
    return head;
}
node *reverse()
{
    node *curr, *prev, *next;
    curr = head;
    prev = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void display()
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "Empty Linked List" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "Null";
}
int main()
{
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    head = create(n);
    cout << "\nNodes in the List are: " << endl;
    display();
    cout << "\nAfter Reversing the List: " << endl;
    head = reverse();
    display();
}