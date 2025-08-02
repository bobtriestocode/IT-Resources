/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
      
      Node* dummy = new Node(-1); 
      dummy->next = head ; 
      Node* temp = dummy ; 
      int i = 0 ;
      while(temp && i<(x-1)){
          
          temp=temp->next;
          i++;
      }
      Node* del = temp->next ; 
          temp->next = del->next;
          delete(del);
      return dummy->next;
      
    }
};