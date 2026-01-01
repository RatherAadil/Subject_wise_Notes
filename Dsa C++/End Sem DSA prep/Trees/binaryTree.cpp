#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
} *root = NULL;
node *create()
{
    int val;
    cout << "Enter the data: ";
    cin >> val;
    node *newNode = new node();
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void insertLeft(node *root)
{
    root->left = create();
}

void insertRight(node *root)
{
    root->right = create();
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main()
{
    root = create();

    insertLeft(root);
    insertRight(root);

    insertLeft(root->left);
    insertRight(root->left);

    insertLeft(root->right);
    insertRight(root->right);

    inOrder(root);

    return 0;
}