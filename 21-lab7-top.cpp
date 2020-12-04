#include <bits/stdc++.h>
 
typedef struct Node Node;
struct Node {
    int value;
    Node* left, *right;
};
 
Node* init_tree(int data) {
    Node* root = (Node*) malloc (sizeof(Node));
    root->left = root->right = NULL;
    root->value = data;
    return root;
}
 
Node* create_node(int data) {
    Node* node = (Node*) malloc (sizeof(Node));
    node->value = data;
    node->left = node->right = NULL;
    return node;
}
 
void free_tree(Node* root) {
    Node* temp = root;
    if (!temp)
        return;
    free_tree(temp->left);
    free_tree(temp->right);
    if (!temp->left && !temp->right) {
        free(temp);
        return;
    }
}
 
int tree_balandlik(Node* root) {
    if (!root)
        return 0;
    else {
        int left_balandlik = tree_balandlik(root->left);
        int right_balandlik = tree_balandlik(root->right);
        if (left_balandlik >= right_balandlik)
            return left_balandlik + 1;
        else
            return right_balandlik + 1;
    }
}
 
int main() {
    //Daraxt elementlari
    Node* root = init_tree(1);
    root->left = create_node(2);
    root->right = create_node(1);
    root->left->left = create_node(4);
    root->left->right = create_node(7);
    int balandlik = tree_balandlik(root);
    printf("Daraxt balandligi: %d\n", balandlik);
    free_tree(root);
    return 0;
}