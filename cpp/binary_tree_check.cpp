/*https://www.hackerrank.com/challenges/ctci-is-binary-search-tree/problem*/

/* Hidden stub code will pass a root argument to the function below. 
Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   bool checkBST(Node* root, int min, int max) {
       if (root == NULL) {return true;} //base condition
       
       if(root->data>max || root->data<min){return false;} //checking range base condition one
       
       return (checkBST(root->left, min, root->data-1) && checkBST(root->right, root->data+1, max));
      //checking if the left node is between the value of min and root-1 
      //checking if the right node is between the value of root+1 and max
   }


   bool checkBST(Node* root){
       return checkBST(root, 0, 10000);
   } 
       
