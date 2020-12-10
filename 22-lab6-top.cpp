#include <bits/stdc++.h>
using namespace std;

int n = 1;

struct node
{
    int data;
    node *left;
    node *right;
};

struct node *getNode(int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *Insert(struct node *root, int data)
{
    if (root == NULL)
        return getNode(data);

    if (data < root->data)
        root->left = Insert(root->left, data);
    else if (data > root->data)
        root->right = Insert(root->right, data);

    return root;
}

int tugun_soni(node *root)
{
    if (root == NULL)
        return 0;
    if (root->left != NULL)
    {
        n = n + 1;
        n = tugun_soni(root->left);
    }
    if (root->right != NULL)
    {
        n = n + 1;
        n = tugun_soni(root->right);
    }
    return n;
}

int main()
{
    node *root = NULL;
    root = Insert(root, 3);
    Insert(root, 4);
    Insert(root, 2);
    Insert(root, 5);
    Insert(root, 1);
    Insert(root, 7);
    Insert(root, 6);

    cout << "Barcha tugunlar soni = " << tugun_soni(root) << endl;

    return 0;
}