//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/editorial
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
  //Pseudocode
  // Initialize ptr to head of the linked list
  // while ptr is not NULL
  // print (*ptr).value 
  // ptr=(*ptr).next //Move ptr to the next node in the list
  
    Node *current = head;    
    while(current!=NULL) {
        cout << current->data <<endl;
        current=current->next;
    }   
}
