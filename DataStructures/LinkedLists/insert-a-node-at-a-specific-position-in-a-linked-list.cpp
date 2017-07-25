//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/
/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(head==nullptr){
        return newNode;
    }
    else {
        Node *tmp =head;
        int p=0;
        if(position == 0) {
            newNode->next = head;
            return newNode;
        }
        while(tmp!=nullptr){
            if(p == position-1) {
                newNode->next = tmp->next;
                tmp->next = newNode;
                } else {
                tmp = tmp->next;
            }
           p++;
        } 
    }
                return head;

}
