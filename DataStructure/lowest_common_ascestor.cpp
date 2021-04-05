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

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    
    void traversal(Node* root,int data,vector<Node*>&lst){
        if(root){
            lst.push_back(root);
            if (root->data==data){
                return;
            }
            if(root->data>data)
                traversal(root->left,data,lst);
            else{
                traversal(root->right,data,lst);
            }
        }
    }
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        vector<Node*>lstAscestor1;
        vector<Node*>lstAscestor2;
        traversal(root,v1,lstAscestor1);
        traversal(root,v2,lstAscestor2);
        for(int i = lstAscestor1.size();i>=0;i--){
            if(find(lstAscestor2.begin(),lstAscestor2.end(),lstAscestor1[i])!=lstAscestor2.end())
                return lstAscestor1[i];
        }
        return lstAscestor1[0];
    }
};