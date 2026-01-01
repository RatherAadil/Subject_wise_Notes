#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *top = NULL;

void push(int value)
{
    node *newNode = new node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
int pop()
{
    int x;
    node *temp = top;
    if (top == NULL)
    {
        return -1;
    }
    x = temp->data;
    top = top->next;
    delete temp;
    return x;
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
    cout << "Popped item: " << value << endl;

    return 0;
}