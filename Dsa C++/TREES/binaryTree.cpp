#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
} *root = nullptr;

node *create()
{
    node *newNode = new node();
    int value;
    cout << "Enter the value of node: ";
    cin >> value;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
node *insertLeft(node *root)
{
    root->left = create();
    return root->left;
}
node *insertRight(node *root)
{
    root->right = create();
    return root->right;
}
void preOrder(node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << endl;
    preOrder(root->left);
    preOrder(root->right);
}
void deleteTree(node *root)
{
    if (!root)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main()
{
    //              root
    //             /    \
    //          root->L  root->R
    //        /   \      /   \
    //       LL   LR    RL   RR

    root = create();          // 10
    insertLeft(root);         // 5
    insertRight(root);        // 15
    insertLeft(root->left);   // 2
    insertRight(root->left);  // 7
    insertLeft(root->right);  // 12
    insertRight(root->right); // 18

    //  Adding one more level (children for leaf nodes)
    insertLeft(root->left->left);  // left child of 2
    insertRight(root->left->left); // right child of 2

    insertLeft(root->left->right);  // left child of 7
    insertRight(root->left->right); // right child of 7

    insertLeft(root->right->left);  // left child of 12
    insertRight(root->right->left); // right child of 12

    insertLeft(root->right->right);  // left child of 18
    insertRight(root->right->right); // right child of 18
    cout << "Traversal of Binary Tree:" << endl;
    preOrder(root);
    deleteTree(root);

    //             10
    //           /    \
    //          5        15
    //       /  \      /   \
    //      2    7    12    18
    //     / \  / \   / \   / \
    //    .  . .  .  .  .  .  .

    return 0;
}