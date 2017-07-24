#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:   
     Node* insert(Node * const head,const int data)
      {
          
          Node *newNode = new Node(data);
          Node *tmp = head; //temporary node holding heads value(points to the first node)
          
          if(head==NULL) {return newNode; }//if the list is empty, return new node
          
          //if list is not empty then iterate through the list and add it to the end of the list
          
          while(tmp->next!= NULL){
              tmp=tmp->next;
          } //run loop until the list has nodes
          
          //the above loop ends when the tmp is at the end
          //now the tmp is pointing to the last node 
          tmp->next=newNode;
          //we create a new node with the data 
          return head;      
      }
      
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
