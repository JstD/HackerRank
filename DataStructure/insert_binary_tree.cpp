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
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
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

    Node * process(Node * root, int data) {
        if(root){
            if(root->data>data){
                //left
                if(root->left)
                    return process(root->left,data);
                else{
                    root->left = new Node(data);
                }
            }
            else{
                if(root->right)
                    return process(root->right,data);
                else{
                    root->right = new Node(data);
                }
            }
            return root;
        }
        else{
            return new Node(data);
        }
    }
    Node * insert(Node * root, int data) {
        if(!root)
            return new Node(data);
        process(root,data);
        return root;
    }
};