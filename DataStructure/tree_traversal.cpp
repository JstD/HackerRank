#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
};

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

void preOrder(Node *root) {
    if(root){
        cout<<root->data<<' ';
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(Node *root) {
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<' ';
    }
}
void inOrder(Node *root) {
    if(root){
        inOrder(root->left);
        cout<<root->data<<' ';
        inOrder(root->right);
    }
}
int height(Node* root) {
    if(root){
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight,rightHeight)+1;
    }
    return -1;
}