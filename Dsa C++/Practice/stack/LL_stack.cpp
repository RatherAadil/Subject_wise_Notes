#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *top = NULL;

void push(int data)
{
    node *newNode = new node();
    if (newNode == NULL)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}
int pop()
{
    node *temp = top;
    int val;

    val = temp->data;
    top = top->next;
    delete temp;
    return val;
}

int main()
{
    int value;
    cout << "enter the value to push: ";
    cin >> value;
    push(value);
    cout << "enter the value to push: ";
    cin >> value;
    push(value);
    cout << "enter the value to push: ";
    cin >> value;
    push(value);

    value = pop();
    cout << "Popped item: " << value;

    return 0;
}