#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int data;
    node *next;
} *head = NULL;

node *create(int n)
{
    node *t, *r;
    int val;
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = new node();
            cout << "Enter the value of node: ";
            cin >> val;
            head->prev = NULL;
            head->data = val;
            head->next = NULL;
            r = head;
        }
        else
        {
            t = new node();
            cout << "Enter the value of node: ";
            cin >> val;
            t->prev = r;
            r->next = t;
            t->data = val;
            t->next = NULL;
            r = t;
        }
    }
    return head;
}

// INSERTION
node *addBeg()
{
    int val;
    node *newNode = new node();
    cout << "Enter the value of new node: ";
    cin >> val;
    newNode->prev = NULL;
    newNode->data = val;
    newNode->next = head;
    if (head != nullptr)
        head->prev = newNode; // only when list is not empty
    head = newNode;
    return head;
}
void addEnd()
{
    node *newNode = new node();
    int value;
    node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    cout << "Enter the value of new node: ";
    cin >> value;
    newNode->data = value;
    newNode->prev = temp;
    newNode->next = nullptr;
    temp->next = newNode;
}
node *addAt(int loc)
{
    if (loc < 1)
    {
        cout << "invalid location" << endl;
        return head;
    }
    node *newNode = new node();
    int val;
    cout << "Enter the value of new node: ";
    cin >> val;
    newNode->data = val;

    if (loc == 1)
    {
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
        return head;
    }
    node *curr = head;
    for (int i = 1; i < loc - 1; i++)
    {
        if (curr == nullptr)
        {
            cout << "location exceeded" << endl;
            delete newNode;
            return head;
        }
        curr = curr->next;
    }
    newNode->next = curr->next;
    if (curr->next != nullptr)
        curr->next->prev = newNode;
    newNode->prev = curr;
    curr->next = newNode;
    return head;
}

// DELETION
node *delBeg()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return head;
    }
    node *temp = head;
    // If only one node in the list
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return head;
    }
    head = head->next;
    head->prev = nullptr;
    delete temp;
    return head;
}
void delEnd()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    // If only one node
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    node *p, *q;
    p = head;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    q = p->prev;
    q->next = nullptr;
    delete p;
}

node *delAt(int loc)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return head;
    }

    if (loc < 1)
    {
        cout << "invalid location" << endl;
        return head;
    }
    node *temp = head;
    if (loc == 1)
    {
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return head;
        }
        head = head->next;
        head->prev = nullptr;
        delete temp;
        return head;
    }

    for (int i = 1; i < loc; i++)
    {
        temp = temp->next;
        if (temp == nullptr)
        {
            cout << "Location exceeded" << endl;
            return head;
        }
    }
    temp->prev->next = temp->next;
    if (temp->next != nullptr)
        temp->next->prev = temp->prev;
    delete temp;
    return head;
}
void display()
{
    if (head == NULL)
    {
        cout << "\nEmpty List" << endl;
        return;
    }
    node *temp = head;
    cout << "NULL <-- ";
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << " <--> ";
        }
        temp = temp->next;
    }
    cout << " -->NULL" << endl;
}
void backwardTraversal()
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    cout << "NULL <--";
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->prev != nullptr)
        {
            cout << "<-->";
        }
        temp = temp->prev;
    }
    cout << " -->NULL" << endl;
}
int main()
{
    int n;
    cout << "Enter the number of node you want to create: ";
    cin >> n;
    head = create(n);
    cout << "\nNodes in the list are: " << endl;
    display();

    // head = addBeg();
    // cout << "\nNodes After insetion at beginning: " << endl;
    // display();
    // addEnd();
    // cout << "\nNodes After insetion at End: " << endl;
    // display();

    // int loc;
    // cout << "Enter the location to add node at: ";
    // cin >> loc;
    // head = addAt(loc);
    // cout << "\nNodes After insetion at" << loc << " postion" << endl;
    // display();
    // head = delBeg();
    // cout << "After deleting from beginning:\n";
    // display();

    // delEnd();
    // cout << "After deleting from end:\n";
    // display();

    // int loc;
    // cout << "Enter the location to delete node at: ";
    // cin >> loc;
    // head = delAt(loc);
    // cout << "\nNodes After deletion at" << loc << " postion" << endl;
    // display();
    backwardTraversal();

    return 0;
}