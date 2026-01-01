#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev, *next;
} *head = NULL;
node *create(int n)
{
    int val;
    node *t, *newNode;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: ";
        cin >> val;
        if (head == NULL)
        {
            head = new node();
            head->data = val;
            head->next = NULL;
            head->prev = NULL;
            t = head;
        }
        else
        {
            newNode = new node();
            newNode->data = val;
            newNode->next = NULL;
            newNode->prev = t;
            t->next = newNode;
            t = newNode;
        }
    }
    return head;
}
void display()
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    cout << "NULL <- ";
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << " NULL";

    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->prev;
    // }
}

// INSERTION
node *addBeg()
{
    int val;
    cout << "Enter the data for new node: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->prev = NULL;
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        return head;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}
void addEnd()
{
    int val;
    cout << "Enter the data for last node: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

node *addAt(int loc)
{
    int val;
    node *temp, *newNode;

    if (loc < 1)
    {
        cout << "Invalid location" << endl;
        return head;
    }
    newNode = new node();
    cout << "Enter the data for new Node: ";
    cin >> val;
    newNode->data = val;
    if (loc == 1)
    {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }
    if (head == NULL)
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
        return head;
    }
    temp = head;
    for (int i = 1; i < loc - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Loc exceeded" << endl;
            delete newNode;
            return head;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    return head;
}
// DELETION
node *delBeg()
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return head;
    }
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}
void delEnd()
{
    node *t, *temp;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        t = temp;
        temp = temp->next;
    }
    t->next = NULL;
    delete temp;
}
node *delAt(int loc)
{
    if (loc < 1)
    {
        cout << "Invalid location" << endl;
        return head;
    }

    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return head;
    }

    node *temp = head;

    // Case 1: Delete first node
    if (loc == 1)
    {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return head;
    }

    // Case 2: Delete at given position
    for (int i = 1; i < loc; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Location exceeded" << endl;
            return head;
        }
    }

    // Adjust links
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->prev->next = temp->next;

    delete temp;
    return head;
}

int main()
{
    int n;
    cout << "Enter the number of nodes to create: ";
    cin >> n;
    head = create(n);

    // INSERTION
    // head = addBeg();
    // addEnd();
    // int loc;
    // cout << "ENter loc: ";
    // cin >> loc;
    // head = addAt(loc);

    // DELETION
    // delBeg();
    // delEnd();
    int loc;
    cout << "ENter loc: ";
    cin >> loc;
    head = delAt(loc);
    display();
    return 0;
}