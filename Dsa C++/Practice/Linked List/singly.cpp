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
node *AddBeg()
{
    if (head == NULL)
    {
        head = create(1);
    }
    int val;
    cout << "Enter the value to add at beginning: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return head;
}
void addEnd()
{
    node *temp = head;
    node *newNode = new node();
    if (temp == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    int val;
    cout << "Enter the value to add at end: ";
    cin >> val;
    newNode->data = val;
    newNode->next = NULL;
    temp->next = newNode;
}
node *addAt(int loc)
{
    if (loc < 0)
    {
        cout << "Invalid Location" << endl;
        return head;
    }
    node *newNode = new node();
    int val;
    cout << "Enter the value of new node: ";
    cin >> val;
    newNode->data = val;
    if (loc == 1)
    {
        newNode->next = head;
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
    node *curr = head;
    node *temp, *p;
    if (curr == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (curr->next != NULL)
    {
        p = curr;
        curr = curr->next;
    }
    p->next = NULL;
    delete curr;
}
node *delAt(int pos)
{
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return head;
    }
    if (pos < 1)
    {
        cout << "Invalid position" << endl;
        return head;
    }
    node *temp = head;
    node *p;
    if (pos == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    for (int i = 1; i < pos; i++)
    {
        p = temp;
        if (temp->next == NULL)
        {
            cout << "Position exceeded" << endl;
            return head;
        }
        temp = temp->next;
    }
    p->next = temp->next;
    delete temp;
    // return head;
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
    // head = AddBeg();
    // addEnd();
    cout << "\nNodes in the List are: " << endl;
    display();
    int loc;
    cout << "Enter the location to add at: ";
    cin >> loc;
    head = addAt(loc);
    display();
    // delBeg();
    // cout << "\nAfter deleting the first node: " << endl;
    // display();
    // delEnd();
    // cout << "\nAfter deleting the End node: " << endl;
    // display();
    // int pos;
    // cout << "\nEnter the position to delete at: ";
    // cin >> pos;
    // delAt(pos);
    // cout << "\nAfter deleting at " << pos << " position, List is: " << endl;
    // display();

    return 0;
}