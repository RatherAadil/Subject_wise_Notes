#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

struct node *create(struct node *head, int elems)
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
node *delBeg(node *head)
{
    node *temp = head;
    temp = temp->next;
    delete head;
    head = temp;
    return head;
}
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
void display(struct node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr";
}
void search(node *head, int key)
{
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            cout << "Key is found" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Key not found" << endl;
}
int main()
{
    node *head = nullptr;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;

    head = create(head, n);
    display(head);

    while (true)
    {
        int operation;
        cout << "\nwhich operation you want to perform: \n"
             << "1.AddBeginning  2.AddEnd 3. AddAt 4.DelBeg 5.DelEnd 6.DelAt 7.Search 0: exit :\n";
        cin >> operation;
        switch (operation)
        {
        case 0:
            exit(1);
        case 1:
            head = addBeg(head);
            display(head);
            break;
        case 2:
            head = addEnd(head);
            display(head);
            break;
        case 3:
            int position;
            cout << "Enter the position you want to add node at: ";
            cin >> position;
            head = addAtPosition(head, position);
            display(head);
            break;
        case 4:
            head = delBeg(head);
            cout << "After deletion at beginning of Linked List is :  " << endl;
            display(head);
            break;
        case 5:
            delEnd(head);
            cout << "After deletion at End of Linked List is :  " << endl;
            display(head);
            break;
        case 6:
            int loc;
            cout << "Enter the location to delete the node at :";
            cin >> loc;
            head = delAt(head, loc);
            cout << "After deletion at " << loc << " of Linked List is : " << endl;
            display(head);
            break;
        case 7:
            int key;
            cout << "Enter the target to found: ";
            cin >> key;
            search(head, key);

        default:
            cout << "Invalid operation" << endl;
            break;
        }
    }

    return 0;
}