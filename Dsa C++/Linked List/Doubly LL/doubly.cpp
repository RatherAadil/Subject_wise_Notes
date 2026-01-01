#include <iostream>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};

node *create(node *head, int elems)
{
    node *newNode, *temp;
    int value;

    for (int i = 0; i < elems; i++)
    {
        cout << "Enter the value of node: ";
        cin >> value;

        if (head == nullptr)
        {
            head = new node();
            head->prev = nullptr;
            head->data = value;
            head->next = nullptr;
            temp = head;
        }
        else
        {
            newNode = new node();
            newNode->prev = temp;
            newNode->data = value;
            newNode->next = nullptr;
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

void display(node *head)
{
    cout << "\nDoubly Linked List: ";
    while (head != nullptr)
    {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

node *addBegining(node *head)
{
    int value;
    cout << "Enter the value of node to add at beginning: ";
    cin >> value;

    node *newNode = new node();
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr)
        head->prev = newNode;

    head = newNode;
    return head;
}

void addEnd(node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    int value;
    cout << "Enter the value of node to add at end: ";
    cin >> value;

    node *newNode = new node();
    newNode->data = value;
    newNode->next = nullptr;

    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

node *addAtPosition(node *head, int loc)
{
    node *newNode, *curr = head;
    int value;
    if (loc < 1)
    {
        cout << "Invalid location!" << endl;
        return head;
    }
    cout << "Enter the value of newNode: ";
    cin >> value;
    newNode = new node();
    newNode->prev = nullptr;
    newNode->data = value;
    newNode->next = nullptr;
    if (loc == 1)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }

    for (int i = 1; i < loc - 1; i++)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        cout << "Location exceeds list length!" << endl;
        delete newNode;
        return head;
    }

    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next = newNode;
    curr->next->prev = newNode;

    return head;
}

node *delBeg(node *head)
{
    if (head == nullptr)
    {
        cout << "Empty Linked List";
        return head;
    }
    node *temp = head;
    temp = temp->next;
    temp->prev = nullptr;
    delete head;
    head = temp;
    return head;
}
void delEnd(node *head)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}
node *delAtPosition(node *head, int loc)
{
    if (loc < 1)
    {
        cout << "invalid location" << endl;
        return head;
    }
    if (loc == 1)
    {
        node *temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
        return head;
    }
    node *curr = head;
    for (int i = 0; i < loc - 1; i++)
    {
        curr = curr->next;
    }
    curr->prev->next = curr->next;
    if (curr->next != nullptr)
        curr->next->prev = curr->prev;
    delete curr;
    return head;
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
            head = addBegining(head);
            display(head);
            break;
        case 2:
            addEnd(head);
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
            head = delAtPosition(head, loc);
            cout << "After deletion at " << loc << " of Linked List is : " << endl;
            display(head);
            break;
        case 7:
            int key;
            cout << "Enter the target to found: ";
            cin >> key;
            search(head, key);
        }
    }
}
