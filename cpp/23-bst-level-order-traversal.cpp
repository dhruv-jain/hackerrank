https://www.hackerrank.com/challenges/30-binary-trees/problem

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        
        	void levelOrder(Node * root){ //breadth-first search
      //returns the tree elements top to bottom from left to right 
        queue<Node*> q;
        while(root!=NULL){
            cout << root->data << ' ';
        
        if(root->left != NULL) q.push(root->left);
        if(root->right != NULL) q.push(root->right);
        
        if(!q.empty()) { //if the queue is not empty
            root = q.front(); //point the root to the front of queue
            q.pop(); //pop the elements from queue
        }
        else{
            root = NULL;
        } 
                        }
}

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
