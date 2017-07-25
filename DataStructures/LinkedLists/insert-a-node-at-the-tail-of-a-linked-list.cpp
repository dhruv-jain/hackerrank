//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *newNode = new Node;
    Node *tmp = head;
    
    newNode->data = data;
  
    if (head==nullptr){
        return newNode;
    }
    
    else{
        while(tmp->next!=NULL){ //move the tmp pointer to the last place
            tmp=tmp->next;
        }
        //Now pointer points to last node
        tmp->next=newNode;
    }
            return head;

}
