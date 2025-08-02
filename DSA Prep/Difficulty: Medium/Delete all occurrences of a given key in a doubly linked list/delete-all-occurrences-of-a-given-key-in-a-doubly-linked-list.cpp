// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
      
        Node* temp = *head_ref;
        
        
        while( temp){
            if(temp->data ==x ){
                 if (temp == *head_ref) {
                    *head_ref = temp->next;
                }
                
                Node* nextPointer = temp->next;
                Node* prevPointer = temp->prev;
                
                if(nextPointer) nextPointer->prev  = prevPointer;
                if(prevPointer) prevPointer->next = nextPointer;
                
                delete(temp);
                temp = nextPointer;
                
            }
            else{
                temp = temp->next;
            }
        }
        
        
    }
};