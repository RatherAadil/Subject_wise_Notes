#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} *head = NULL;

node *create(int n)
{
    node *p, *newNode;
    int val;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of node: ";
        cin >> val;
        if (head == NULL)
        {
            head = new node();

            head->data = val;
            head->next = NULL;
            p = head;
        }
        else
        {
            newNode = new node();
            newNode->data = val;
            newNode->next = NULL;
            p->next = newNode;
            p = newNode;
        }
    }
    return head;
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// INSERTION IN LINKED LIST
// Add at Beginning
node *AddBeg()
{
    int val;
    cout << "Enter the value of node to add at Beginning: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return head;
}
// Add at End
void addEnd()
{
    int val;
    cout << "Enter the value of node to add at end: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

node *addAt(int loc)
{
    if (loc < 1)
    {
        cout << "Invalid location" << endl;
        return head;
    }
    int val;
    node *newNode = new node();
    cout << "Enter the value for new node: ";
    cin >> val;
    newNode->data = val;
    if (loc == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        return head;
    }
    node *temp = head;

    for (int i = 1; i < loc - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Location exceeded" << endl;
            delete newNode;
            return head;
        }

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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
    head = head->next;
    delete temp;
    return head;
}

void delEnd()
{
    node *temp = head;
    node *p;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (temp->next != NULL)
    {
        p = temp;
        temp = temp->next;
    }
    p->next = NULL;
    delete temp;
}

node *delAt(int loc)
{
    node *temp = head;
    node *p;
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return head;
    }
    if (loc < 1)
    {
        cout << "Invalid location" << endl;
        return head;
    }
    if (loc == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }

    for (int i = 1; i < loc; i++)
    {
        p = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Location Exceeded" << endl;
            return head;
        }
    }
    p->next = temp->next;
    delete temp;
    return head;
}

// REVERSE
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
int main()
{
    int n;
    cout << "Enter the no. of nodes you want to create: ";
    cin >> n;
    head = create(n);

    // INSERTION
    //  head = AddBeg();
    //  addEnd();
    //  head = addAt(2);

    // DELETION
    // head = delBeg();
    // delEnd();
    // head = delAt(3);

    // REVERSE
    head = reverse();
    display();
}