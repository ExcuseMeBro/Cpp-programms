/*4.Berilgan binar daraxtdan kalit qiymatlari kamayish tartibida 
joylashgan bir bog‟lamli ro‟yhat hosil qilish algoritmi va dasturini keltiring.
*/
#include <iostream> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
    Node(int data) 
    { 
        this->data = data; 
        this->next = NULL; 
    } 
}; 
  
class treeNode { 
public: 
    int data; 
    treeNode* left; 
    treeNode* right; 
    treeNode(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 
  
void print(Node* head) 
{ 
    if (head == NULL) { 
        return; 
    } 
    Node* temp = head; 
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
} 
  
Node* sortedList(Node* head, treeNode* root) 
{ 
    if (root == NULL) { 
        return head; 
    } 

    head = sortedList(head, root->left); 
    Node* newNode = new Node(root->data); 
    Node* temp = head; 
    Node* prev = NULL; 
  
    if (temp == NULL) { 
        head = newNode; 
    } 
    else { 

        while (temp != NULL) { 
            if (temp->data < root->data) { 
                break; 
            } 
            else { 
                prev = temp; 
                temp = temp->next; 
            } 
        } 

        if (temp == NULL) { 
            prev->next = newNode; 
        } 
        else { 
  

            if (prev == NULL) { 
                newNode->next = temp; 
                head = newNode; 
            } 
            else { 
  
                newNode->next = temp; 
                prev->next = newNode; 
            } 
        } 
    } 
  
    head = sortedList(head, root->right); 
    return head; 
} 
  
int main() 
{ 
    /* Daraxt 
         10 
        /  \ 
      15    2 
     /  \ 
    1    5 
*/
    treeNode* root = new treeNode(10); 
    root->left = new treeNode(15); 
    root->right = new treeNode(2); 
    root->left->left = new treeNode(1); 
    root->left->right = new treeNode(5); 
  
    Node* head = sortedList(NULL, root); 
    print(head); 
  
    return 0; 
} 