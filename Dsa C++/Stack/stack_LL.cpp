#include <iostream>
using namespace std;
struct stack
{
    int data;
    stack *next;
} *top = nullptr;
void push(int data)
{
    stack *newNode = new stack();
    if (newNode == nullptr) // if heap memory is full then newNode will be null
    {
        cout << "stack overflow" << endl;
        exit(1);
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}
int pop()
{
    stack *temp = top;
    if (top == nullptr)
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    int x = temp->data;
    top = top->next;
    delete temp;
    return x;
}
int isEmpty()
{
    if (top == nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if (isEmpty())
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    return top->data;
}
void display()
{
    stack *temp = top;
    if (isEmpty())
    {
        cout << "Stack Underflow." << endl;
        exit(1);
    }
    cout << "Elements of the stack are: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int choice, data, value;
    while (true)
    {
        cout << "Enter Your choice:\n1.push\n2.pop\n3.print top Element\n4.Print all elements\n5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to be pushed: ";
            cin >> data;
            push(data);
            break;
        case 2:
            value = pop();
            cout << "Popped element is : " << value << endl;
            break;
        case 3:
            cout << "Top most elemnt of stack is: " << peek() << endl;
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);

        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}