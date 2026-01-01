#include <iostream>
using namespace std;
struct node
{
    int data;
    node *right_child;
    node *left_child;
} *root = NULL;
node *create(int x)
{
    node *newNode = new node();
    // int value;
    // cout << "Enter the value of node: ";
    // cin >> value;
    newNode->data = x;
    newNode->right_child = NULL;
    newNode->left_child = NULL;
    return newNode;
}
node *Insertion(node *root, int x)
{
    if (root == NULL)
    {
        return create(x);
    }
    else if (x < root->data)
    {
        root->left_child = Insertion(root->left_child, x);
    }
    else
    {
        root->right_child = Insertion(root->right_child, x);
    }
    return root;
}
node *search(node *root, int x)
{
    if (root == NULL || root->data == x)
        return root;
    if (x > root->data)
        return search(root->right_child, x);
    else
    {
        return search(root->left_child, x);
    }
}
node *find_minimum(node *root)
{

    node *temp = root;
    while (temp->left_child != NULL)
    {
        temp = temp->left_child;
    }
    return temp;
}

node *deleteFromBST(node *root, int val)
{
    if (root == NULL)
        return root;
    if (val == root->data)
    {
        // 0 child
        if (root->left_child == NULL && root->right_child == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // left child
        if (root->left_child != NULL && root->right_child == NULL)
        {
            node *temp = root->left_child;
            delete root;
            return temp;
        }
        // right child
        if (root->left_child == NULL && root->right_child != NULL)
        {
            node *temp = root->right_child;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left_child != NULL && root->right_child != NULL)
        {
            // node *temp = find_minimum(root->right_child);
            // root->data = temp->data;
            // root->right_child = deletion(root->right_child, temp->data);

            // same code written below
            int mini = find_minimum(root->right_child)->data;
            root->data = mini;
            root->right_child = deleteFromBST(root->right_child, mini);
            return root;
        }
    }
    else if (val < root->data)
    {
        // left part me jao
        root->left_child = deleteFromBST(root->left_child, val);
        return root;
    }
    else
    {
        // right part me jao
        root->right_child = deleteFromBST(root->right_child, val);
        return root;
    }
}

void traversal(node *root)
{
    if (root != nullptr)
    {
        traversal(root->left_child);
        cout << root->data << " ";
        traversal(root->right_child);
    }
}
int main()
{
    root = create(48);
    Insertion(root, 40);
    Insertion(root, 35);
    Insertion(root, 20);
    Insertion(root, 45);
    Insertion(root, 50);
    Insertion(root, 60);

    cout << "Inorder Traversal: ";
    traversal(root);
    int key;
    cout << "\nEnter the key to search: ";
    cin >> key;
    node *result = search(root, key);
    if (result != NULL)
        cout << "\nElement " << key << " found in BST." << endl;
    else
        cout << "\nElement " << key << " Not found in BST." << endl;
    cout << result->data;
    int delKey;
    cout << "Enter a value to delete: ";
    cin >> delKey;

    root = deleteFromBST(root, delKey);

    cout << "After Deletion: ";
    traversal(root);
    cout << endl;

    return 0;
}