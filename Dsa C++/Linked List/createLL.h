#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *create(node *head, int elems)
{
    int value;
    node *r, *p;

    for (int i = 0; i < elems; i++)
    {
        if (head == nullptr)
        {
            head = new node();
            cout << "Enter value for node " << i + 1 << ": ";
            cin >> value;
            head->data = value;
            head->next = nullptr;
            p = head;
        }
        else
        {
            r = new node();
            cout << "Enter value for node " << i + 1 << ": ";
            cin >> value;
            r->data = value;
            r->next = nullptr;
            p->next = r;
            p = r;
        }
    }
    return head;
}
void display(struct node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ->";
        // printf("%d-> ", head->data);
        head = head->next;
    }
    cout << "nullptr" << endl;
}