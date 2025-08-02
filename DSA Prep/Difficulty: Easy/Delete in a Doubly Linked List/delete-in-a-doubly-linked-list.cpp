/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
       Node* temp = head ; 
       if(x==1){
           Node* newNode = head->next ; 
           if (newNode != nullptr) {
    newNode->prev = nullptr;
}

           delete head; 
           return newNode ;
       }
       
       int count =1 ; 
       while(temp && count<x){
           temp = temp->next ; 
           count++;
       }
       if(temp == nullptr) return head ; 
       Node* after = temp->next ; 
       Node* before = temp->prev ; 
       
       if(after!=nullptr) after->prev = before ; 
       
      before->next = after ; 
       
       delete temp ; 
       return head ; 
        
    }
};






