/*11.Berilgan ro‟yhat binar daraxt bo‟la oladimi, yo‟qmi, shuni aniqlash dasturini keltiring.
*/
// BD(Binar Daraxt)
#include<bits/stdc++.h> 
  
using namespace std; 
  
class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
      
    node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 
  
int isBDUtil(node* node, int min, int max);  
  

int isBD(node* node)  
{  
    return(isBDUtil(node, INT_MIN, INT_MAX));  
}  
  
int isBDUtil(node* node, int min, int max)  
{  

    if (node==NULL)  
        return 1;  

    if (node->data < min || node->data > max)  
        return 0;  
      
    return
        isBDUtil(node->left, min, node->data-1) &&   
        isBDUtil(node->right, node->data+1, max); 
}  

int main()  
{  
   //Binar daraxt
    node *root = new node(4);  
    root->left = new node(2);  
    root->right = new node(5);  
    root->left->left = new node(1);  
    root->left->right = new node(3);
    //Binar daraxt emas
    /*node *root = new node(4);  
    root->left = new node(2);  
    root->right = new node(5);  
    root->left->left = new node(1);  
    root->left->right = new node(3); */ 
      
    if(isBD(root))  
        cout<<"Binar daraxt\n";  
    else
        cout<<"Binar Daraxt emas\n";  
          
    return 0;  
}