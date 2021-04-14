/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	
*/
#include<iostream>
#include<vector>
using namespace std;
struct Node {
		int data;
		Node* left;
		Node* right;
	};



void inOrder(Node*root,vector<int> &arr){
    if(!root)
        return;
    else{
        inOrder(root->left,arr); 
        arr.push_back(root->data);
        inOrder(root->right,arr);
    }
}
bool checkBST(Node* root) {
    if(!root)
        return true;
    vector<int> arr; 
    inOrder(root,arr);
    for(int i=0;i<arr.size()-1;i++)
        if(arr[i]>=arr[i+1])
            return false;
    return true;
}