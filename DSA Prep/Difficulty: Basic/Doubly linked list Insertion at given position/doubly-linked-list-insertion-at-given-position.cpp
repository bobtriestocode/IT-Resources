/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        
        
        
        int count = 0 ; 
        Node* temp = head ; 
        while(temp && count< pos){
            temp=temp->next ; 
            count++; 
        }
        
        Node* newNode = new Node(data);
        newNode->next = temp->next; 
        newNode->prev = temp;

        if (temp->next != nullptr)        // Step 3: if not inserting at end
            temp->next->prev = newNode;

        temp->next = newNode;             
        
        return head; 
        
    }
};