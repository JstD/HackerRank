#include<bits/stdc++.h>

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

/*
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
    //breadth first search
    class mydata{
        public:
        Node*node;
        int level;
        int distance;
        mydata(Node*node,int level,int distance){
            this->node = node;
            this->level = level;
            this->distance = distance;
        }
    };
    void topView(Node * root) {
        queue<mydata>arr;
        map<int,mydata*>save;
        arr.push(mydata(root,0,0));
        while(!arr.empty()){
            mydata temp = arr.front();
            arr.pop();
            if(temp.node->left){
                arr.push(mydata(temp.node->left,temp.level+1,temp.distance-1));
            }
            if(temp.node->right){
                arr.push(mydata(temp.node->right,temp.level+1,temp.distance+1));
            }
            if(!save[temp.distance]){
                save[temp.distance]=new mydata(temp.node,temp.level,temp.distance);
            }
        }
        for(int i=-500;i<500;i++){
            if(save[i])
                cout<<save[i]->node->data<<' ';
        }
    }
};