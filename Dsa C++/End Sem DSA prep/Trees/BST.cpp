#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
} *root = NULL;
node *create(int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
bool search(node *root, int key)
{
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    if (key > root->data)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}

node *insert(node *root, int data)
{
    if (root == NULL)
        return create(data);
    if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}
node *findMin(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *deleteFromBST(node *root, int key)
{
    if (root == NULL)
        return root;
    if (root->data == key)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // left
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // right
        if (root->right != NULL && root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = findMin(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (key < root->data)
    {
        root->left = deleteFromBST(root->left, key);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, key);
        return root;
    }
}

void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    root = create(20);
    insert(root, 15);
    insert(root, 25);
    insert(root, 35);
    insert(root, 30);
    insert(root, 10);
    insert(root, 45);
    cout << "Inorder Traversal: ";
    inOrder(root);
    bool isPresent = search(root, 30);
    if (isPresent)
    {
        cout << "\nPresent" << endl;
    }
    else
    {
        cout << "\nNot Present\n";
    }

    int delKey;
    cout << "Enter a value to delete: ";
    cin >> delKey;

    root = deleteFromBST(root, delKey);

    cout << "After Deletion: ";
    inOrder(root);
    cout << endl;

    return 0;
}